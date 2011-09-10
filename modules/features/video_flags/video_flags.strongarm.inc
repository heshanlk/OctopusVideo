<?php
/**
 * @file
 * video_flags.strongarm.inc
 */

/**
 * Implementation of hook_strongarm().
 */
function video_flags_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'flag_default_flag_status';
  $strongarm->value = array(
    'friend' => FALSE,
  );
  $export['flag_default_flag_status'] = $strongarm;

  return $export;
}
