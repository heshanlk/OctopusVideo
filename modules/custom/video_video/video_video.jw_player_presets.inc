<?php
/**
 * @file
 * video_video.jw_player_presets.inc
 */

/**
 * Implements hook_default_jw_player_presets().
 */
function video_video_default_jw_player_presets() {
  $export = array();

  $jw_player_preset = new stdClass();
  $jw_player_preset->disabled = FALSE; /* Edit this to true to make a default jw_player_preset disabled initially */
  $jw_player_preset->api_version = 1;
  $jw_player_preset->preset_name = 'HTML5 primary, Flash failover';
  $jw_player_preset->machine_name = 'html5_primary_flash_failover';
  $jw_player_preset->description = '';
  $jw_player_preset->settings = array(
    'mode' => 'html5',
    'width' => '640',
    'height' => '360',
    'controlbar' => 'bottom',
    'skin' => '',
    'autoplay' => 0,
  );
  $export['html5_primary_flash_failover'] = $jw_player_preset;

  return $export;
}
