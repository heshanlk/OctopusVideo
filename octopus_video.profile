<?php

/**
 * Implements hook_install_tasks().
 */
function octopus_video_install_tasks($install_state) {
  $tasks = array();
  if (!defined('DRUSH_BASE_PATH')) {
    $tasks['create_categories_form'] = array(
      'display_name' => st('Set up categories'),
      'type' => 'form',
    );
    $tasks['configure_zencoder_form'] = array(
      'display_name' => st('Configure Transcoder'),
      'type' => 'form',
    );
  }
  return $tasks;
}

/**
 * Category creation form
 */
function create_categories_form() {
  drupal_set_title(st('Set up categories'));
  $form['welcome']['#markup'] = '<h1 class="title">Create category terms</h1><p>' . st('Welcome to Octopus! Octopus is managing your videos in social manner.
    It comes with a wide variety of features and categoris also using every where as video channels. You can create some more category terms later on from taxonomy page.') . '</p>';
  $form['taxonomy'] = array(
    '#type' => 'fieldset',
    '#title' => st('Import Terms'),
    '#collapsible' => FALSE,
    '#collapsed' => FALSE,
    '#description' => st('Select Term names to import to the Categories taxonomy'),
  );
  $options = array(
    'Autos & Vehicles' => 'Autos & Vehicles',
    'Comedy' => 'Comedy',
    'Education' => 'Education',
    'Entertainment' => 'Entertainment',
    'Film & Animation' => 'Film & Animation',
    'Gaming' => 'Gaming',
    'Howto & Style' => 'Howto & Style',
    'News & Politics' => 'News & Politics',
    'Nonprofits & Activism' => 'Nonprofits & Activism',
    'People & Blogs' => 'People & Blogs',
    'Pets & Animals' => 'Pets & Animals',
    'Science & Technology' => 'Science & Technology',
    'Sports' => 'Sports',
    'Travel & Events' => 'Travel & Events',
  );
  $form['taxonomy']['terms'] = array(
    '#type' => 'checkboxes',
    '#title' => st('Term names'),
    '#default_value' => array('Education', 'Comedy', 'People & Blogs'),
    '#options' => $options,
    '#required' => TRUE,
  );
  $form['actions'] = array('#type' => 'actions');
  $form['actions']['submit'] = array(
    '#type' => 'submit',
    '#value' => st('Save and continue'),
    '#weight' => 15,
  );
  return $form;
}

/**
 * Submit callback
 */
function create_categories_form_submit($form, $form_state) {
  $terms = $form_state['values']['terms'];
  $vid = db_query("SELECT vid FROM {taxonomy_vocabulary} WHERE machine_name = :machine_name", array(':machine_name' => 'categories'))->fetchField();
  foreach ($terms as $key => $name) {
    if (empty($name)) {
      continue;
    }
    $term       = new stdClass;
    $term->name = trim($name);
    $term->vid  = $vid;
    taxonomy_term_save($term);
  }
  return array();
}

/**
 * Zencoder configuration form
 */
function configure_zencoder_form() {
  drupal_set_title(st('Configure Zencoder'));
  $form['welcome']['#markup'] = '<h1 class="title">Configure Zencoder</h1><p>' . st('Welcome to Octopus! Octopus is managing your videos in social manner.
    It comes with a wide variety of features and categoris also using every where as video channels. You can create some more category terms later on from taxonomy page.') . '</p>';
  // Zencoder form
  $transcoder = new Transcoder();
  $options = $transcoder->getAllTranscoders();
  $form = array();
  $form['video_convertor'] = array(
    '#type' => 'radios',
    '#title' => t('Video transcoder'),
    '#default_value' => variable_get('video_convertor', 'TranscoderAbstractionFactoryZencoder'),
    '#options' => $options['radios'],
    '#description' => '<p>' . t('Select a video transcoder will help you convert videos and generate thumbnails.') . '</p>' . theme('item_list', array('items' => $options['help'])),
  );
  $form = $form + $options['admin_settings'];

  // Amazon S3 settings
  $form['amazons3'] = array(
    '#type' => 'fieldset',
    '#title' => st('Amazon S3 settings'),
    '#collapsible' => FALSE,
    '#collapsed' => FALSE,
    '#description' => st('If you do not already have Amazon S3 account then you can get one from !amazons3 website and create your bucket to upload all converted videos.', array('!amazons3' => l('Amazon S3', 'http://aws.amazon.com/s3/'))),
    '#states' => array(
      'visible' => array(
        ':input[name="video_convertor"]' => array('value' => 'TranscoderAbstractionFactoryZencoder'),
      ),
    ),
  );
  $form['amazons3']['amazons3_key'] = array(
    '#type' => 'textfield',
    '#title' => st('Amazon Web Services Key'),
    '#default_value' => '',
    '#states' => array(
      'visible' => array(
        ':input[name="video_convertor"]' => array('value' => 'TranscoderAbstractionFactoryZencoder'),
      ),
    ),
  );
  $form['amazons3']['amazons3_secret'] = array(
    '#type' => 'textfield',
    '#title' => st('Amazon Web Services Secret Key'),
    '#default_value' => '',
    '#states' => array(
      'visible' => array(
        ':input[name="video_convertor"]' => array('value' => 'TranscoderAbstractionFactoryZencoder'),
      ),
    ),
  );
  $form['amazons3']['amazons3_bucket'] = array(
    '#type' => 'textfield',
    '#title' => st('Default Bucket Name'),
    '#default_value' => '',
    '#states' => array(
      'visible' => array(
        ':input[name="video_convertor"]' => array('value' => 'TranscoderAbstractionFactoryZencoder'),
      ),
    ),
  );
  $form['actions'] = array('#type' => 'actions');
  $form['actions']['submit'] = array(
    '#type' => 'submit',
    '#value' => st('Save and continue'),
    '#weight' => 15,
  );
  return $form;
}

/**
 * Validate handler
 */
function configure_zencoder_form_validate($form, $form_state) {
  $transcodername = $form_state['values']['video_convertor'];
  if ($transcodername == '') {
    return;
  }
  Transcoder::createTranscoder($transcodername)->adminSettingsValidate($form, $form_state);
  if (!form_get_errors() && $transcodername != variable_get('video_convertor')) {
    drupal_set_message(t('Be sure you change codec settings for your !presets.', array(l('Presets', 'admin/config/media/video/presets'))), 'warning');
  }
}

/**
 * Submit handler
 */
function configure_zencoder_form_submit($form, $form_state) {
  $transcodername = $form_state['values']['video_convertor'];
  variable_set('video_convertor', $transcodername);
  if ($transcodername == 'TranscoderAbstractionFactoryZencoder') {
    $amazons3_key    = $form_state['values']['amazons3_key'];
    $amazons3_secret = $form_state['values']['amazons3_secret'];
    $amazons3_bucket = $form_state['values']['amazons3_bucket'];
    variable_set('amazons3_bucket', $amazons3_bucket);
    variable_set('aws_key', $amazons3_key);
    variable_set('aws_secret_key', $amazons3_secret);
    variable_set('video_zencoder_base_url', 's3://' . $amazons3_bucket);
  }
  return array();
}

/**
 * Implements hook_form_FORM_ID_alter().
 *
 * Allows the profile to alter the site configuration form.
 */
function octopus_video_form_install_configure_form_alter(&$form, $form_state) {
  $form['site_information']['site_name']['#default_value'] = 'Octopus video';
  $form['site_information']['site_mail']['#default_value'] = 'admin@' . $_SERVER['HTTP_HOST'];
  $form['admin_account']['account']['name']['#default_value'] = 'admin';
  $form['admin_account']['account']['mail']['#default_value'] = 'admin@' . $_SERVER['HTTP_HOST'];
}