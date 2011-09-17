<?php
/**
 * @file
 * video_user.field_group.inc
 */

/**
 * Implementation of hook_field_group_info().
 */
function video_user_field_group_info() {
  $export = array();

  $field_group = new stdClass;
  $field_group->api_version = 1;
  $field_group->identifier = 'group_activities_and_interests|user|user|default';
  $field_group->group_name = 'group_activities_and_interests';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Activities and interests',
    'weight' => '8',
    'children' => array(
      0 => 'field_interests',
      1 => 'field_activities',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Activities and interests',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_activities_and_interests|user|user|default'] = $field_group;

  $field_group = new stdClass;
  $field_group->api_version = 1;
  $field_group->identifier = 'group_activities_and_interests|user|user|form';
  $field_group->group_name = 'group_activities_and_interests';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Activities and interests',
    'weight' => '9',
    'children' => array(
      0 => 'field_interests',
      1 => 'field_activities',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Activities and interests',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_activities_and_interests|user|user|form'] = $field_group;

  $field_group = new stdClass;
  $field_group->api_version = 1;
  $field_group->identifier = 'group_arts_and_entertainment|user|user|default';
  $field_group->group_name = 'group_arts_and_entertainment';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Arts and entertainment',
    'weight' => '6',
    'children' => array(
      0 => 'field_music',
      1 => 'field_books',
      2 => 'field_movies',
      3 => 'field_television',
      4 => 'field_games',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Arts and entertainment',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_arts_and_entertainment|user|user|default'] = $field_group;

  $field_group = new stdClass;
  $field_group->api_version = 1;
  $field_group->identifier = 'group_arts_and_entertainment|user|user|form';
  $field_group->group_name = 'group_arts_and_entertainment';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Arts and entertainment',
    'weight' => '7',
    'children' => array(
      0 => 'field_music',
      1 => 'field_books',
      2 => 'field_movies',
      3 => 'field_television',
      4 => 'field_games',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Arts and entertainment',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_arts_and_entertainment|user|user|form'] = $field_group;

  $field_group = new stdClass;
  $field_group->api_version = 1;
  $field_group->identifier = 'group_basic_information|user|user|default';
  $field_group->group_name = 'group_basic_information';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Basic Information ',
    'weight' => '4',
    'children' => array(
      0 => 'field_current_location',
      1 => 'field_hometown',
      2 => 'field_gender',
      3 => 'field_birthday',
      4 => 'field_about_me',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Basic Information ',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_basic_information|user|user|default'] = $field_group;

  $field_group = new stdClass;
  $field_group->api_version = 1;
  $field_group->identifier = 'group_basic_information|user|user|form';
  $field_group->group_name = 'group_basic_information';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Basic information',
    'weight' => '4',
    'children' => array(
      0 => 'field_current_location',
      1 => 'field_hometown',
      2 => 'field_gender',
      3 => 'field_birthday',
      4 => 'field_about_me',
      5 => 'timezone',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Basic information',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_basic_information|user|user|form'] = $field_group;

  $field_group = new stdClass;
  $field_group->api_version = 1;
  $field_group->identifier = 'group_channel|user|user|default';
  $field_group->group_name = 'group_channel';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Channels',
    'weight' => '14',
    'children' => array(
      0 => 'group_audience',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Channels',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_channel|user|user|default'] = $field_group;

  $field_group = new stdClass;
  $field_group->api_version = 1;
  $field_group->identifier = 'group_general|user|user|form';
  $field_group->group_name = 'group_general';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'General',
    'weight' => '3',
    'children' => array(
      0 => 'group_audience',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'General',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_general|user|user|form'] = $field_group;

  $field_group = new stdClass;
  $field_group->api_version = 1;
  $field_group->identifier = 'group_philosophy|user|user|default';
  $field_group->group_name = 'group_philosophy';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Philosophy',
    'weight' => '5',
    'children' => array(
      0 => 'field_religion',
      1 => 'field_favourite_quotations',
      2 => 'field_people_who_inspire_you',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Philosophy',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_philosophy|user|user|default'] = $field_group;

  $field_group = new stdClass;
  $field_group->api_version = 1;
  $field_group->identifier = 'group_philosophy|user|user|form';
  $field_group->group_name = 'group_philosophy';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Philosophy',
    'weight' => '6',
    'children' => array(
      0 => 'field_religion',
      1 => 'field_favourite_quotations',
      2 => 'field_people_who_inspire_you',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Philosophy',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_philosophy|user|user|form'] = $field_group;

  $field_group = new stdClass;
  $field_group->api_version = 1;
  $field_group->identifier = 'group_profile_picture|user|user|form';
  $field_group->group_name = 'group_profile_picture';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Profile picture',
    'weight' => '5',
    'children' => array(
      0 => 'field_image',
      1 => 'picture',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Profile picture',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_profile_picture|user|user|form'] = $field_group;

  $field_group = new stdClass;
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sport|user|user|default';
  $field_group->group_name = 'group_sport';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Sport',
    'weight' => '7',
    'children' => array(
      0 => 'field_favourite_sports',
      1 => 'field_favourite_teams',
      2 => 'field_favourite_athletes',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Sport',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_sport|user|user|default'] = $field_group;

  $field_group = new stdClass;
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sport|user|user|form';
  $field_group->group_name = 'group_sport';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Sport ',
    'weight' => '8',
    'children' => array(
      0 => 'field_favourite_sports',
      1 => 'field_favourite_teams',
      2 => 'field_favourite_athletes',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Sport ',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_sport|user|user|form'] = $field_group;

  return $export;
}
