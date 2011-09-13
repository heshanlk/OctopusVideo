<?php
/**
 * @file
 * video_video.quicktabs.inc
 */

/**
 * Implementation of hook_quicktabs_default_quicktabs().
 */
function video_video_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass;
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'related_videos';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Related videos';
  $quicktabs->tabs = array(
    0 => array(
      'vid' => 'video',
      'display' => 'block_1',
      'args' => '',
      'title' => 'Related videos',
      'weight' => '-100',
      'type' => 'view',
    ),
    1 => array(
      'vid' => 'video',
      'display' => 'block_2',
      'args' => '',
      'title' => 'More by user',
      'weight' => '-99',
      'type' => 'view',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'nostyle';
  $quicktabs->options = array();
  $export['related_videos'] = $quicktabs;

  return $export;
}
