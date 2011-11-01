<?php
/**
 * @file
 * video_channels.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function video_channels_field_group_info() {
  $export = array();

  $field_group = new stdClass;
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_channel|user|user|default';
  $field_group->group_name = 'group_channel';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_user_infomation';
  $field_group->data = array(
    'label' => 'Channels',
    'weight' => '8',
    'children' => array(
      0 => 'group_audience',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_channel|user|user|default'] = $field_group;

  $field_group = new stdClass;
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_general|user|user|form';
  $field_group->group_name = 'group_general';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'General',
    'weight' => '2',
    'children' => array(
      0 => 'group_audience',
      1 => 'field_name',
      2 => 'contact',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_general|user|user|form'] = $field_group;

  $field_group = new stdClass;
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_user_infomation|user|user|default';
  $field_group->group_name = 'group_user_infomation';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'User Information',
    'weight' => '2',
    'children' => array(
      0 => 'group_activities_and_interests',
      1 => 'group_arts_and_entertainment',
      2 => 'group_basic_information',
      3 => 'group_channel',
      4 => 'group_philosophy',
      5 => 'group_sport',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_user_infomation|user|user|default'] = $field_group;

  return $export;
}
