<?php
/**
 * @file
 * video_views.strongarm.inc
 */

/**
 * Implementation of hook_strongarm().
 */
function video_views_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_video';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_video'] = $strongarm;

  return $export;
}
