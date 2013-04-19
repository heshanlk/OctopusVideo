<?php
/**
 * @file
 * video_moderation.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function video_moderation_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'workbench_moderation_default_state_video';
  $strongarm->value = 'draft';
  $export['workbench_moderation_default_state_video'] = $strongarm;

  return $export;
}
