<?php

/**
 * Implements hook_install_tasks().
 */
function octopus_install_tasks($install_state) {
  $tasks['create_categories_form'] = array(
    'display_name' => st('Set up categories'),
    'type' => 'form'
  );
  $tasks['configure_zencoder_form'] = array(
    'display_name' => st('Configure Zencoder'),
    'type' => 'form',
  );
  return $tasks;
}

/**
 * Category creation form
 */
function create_categories_form() {
  drupal_set_title(st('Set up categories'));
  $form['welcome']['#markup'] = '<h1 class="title">Create category terms</h1><p>' . st('Welcome to Octopus! Octopus is managing your videos in social manner.
    It comes with a wide variety of features and categoris also using every where as video channels. You can create some more category terms later on from taxonomy page.') . '</p>';
  $form['term_name_1'] = array(
    '#type' => 'textfield',
    '#title' => st('Term name one'),
    '#default_value' => 'Educational',
    '#required' => TRUE,
  );
  $form['term_name_2'] = array(
    '#type' => 'textfield',
    '#title' => st('Term name two'),
    '#default_value' => 'Comedy',
    '#required' => TRUE,
  );
  $form['term_name_3'] = array(
    '#type' => 'textfield',
    '#title' => st('Term name three'),
    '#default_value' => 'Music',
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
  $term_name_1 = $form_state['values']['term_name_1'];
  $term_name_2 = $form_state['values']['term_name_2'];
  $term_name_3 = $form_state['values']['term_name_3'];
  $vid = db_query("SELECT vid FROM {taxonomy_vocabulary} WHERE machine_name = :machine_name", array(':machine_name' => 'categories'))->fetchField();
  watchdog('install_p', 'category value = ' . $vid);
  for ($i = 1; $i <= 3; $i++) {
    $term = new stdClass;
    $term->name = $form_state['values']['term_name_' . $i];
    $term->vid = $vid;
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
  $factory = new TranscoderAbstractionAbstractFactory();
  $transcoder = $factory->getProduct();
  $form += $transcoder->adminSettings();
  // Amazon S3 settings
  $form['amazons3'] = array(
    '#type' => 'fieldset',
    '#title' => st('Amazon S3 settings'),
    '#collapsible' => FALSE,
    '#collapsed' => FALSE,
    '#description' => st('If you do not already have Amazon S3 account then you can get one from !amazons3 website and create your bucket to upload all converted videos.', array('!amazons3' => l('Amazon S3', 'http://aws.amazon.com/s3/')))
  );
  $form['amazons3']['amazons3_key'] = array(
    '#type' => 'textfield',
    '#title' => st('Amazon Web Services Key'),
    '#default_value' => '',
    '#required' => TRUE,
  );
  $form['amazons3']['amazons3_secret'] = array(
    '#type' => 'textfield',
    '#title' => st('Amazon Web Services Secret Key'),
    '#default_value' => '',
    '#required' => TRUE,
  );
  $form['amazons3']['amazons3_bucket'] = array(
    '#type' => 'textfield',
    '#title' => st('Default Bucket Name'),
    '#default_value' => '',
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
 * Validate handler
 */
function configure_zencoder_form_validate($form, $form_state) {
  $factory = new TranscoderAbstractionAbstractFactory();
  $transcoder = $factory->getProduct();
  $transcoder->adminSettingsValidate($form, $form_state);
}

/**
 * Submit handler
 */
function configure_zencoder_form_submit($form, $form_state) {
  $amazons3_key = $form_state['values']['amazons3_key'];
  $amazons3_secret = $form_state['values']['amazons3_secret'];
  $amazons3_bucket = $form_state['values']['amazons3_bucket'];
  variable_set('amazons3_bucket', $amazons3_bucket);
  variable_set('aws_key', $amazons3_key);
  variable_set('aws_secret_key', $amazons3_secret);
  variable_set('video_zencoder_base_url', 's3://' . $amazons3_bucket);
  return array();
}

/**
 * Implements hook_form_FORM_ID_alter().
 *
 * Allows the profile to alter the site configuration form.
 */
function octopus_form_install_configure_form_alter(&$form, $form_state) {
  $form['site_information']['site_name']['#default_value'] = 'Octopus';
  $form['site_information']['site_mail']['#default_value'] = 'admin@' . $_SERVER['HTTP_HOST'];
  $form['admin_account']['account']['name']['#default_value'] = 'admin';
  $form['admin_account']['account']['mail']['#default_value'] = 'admin@' . $_SERVER['HTTP_HOST'];
}