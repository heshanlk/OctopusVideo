<?php
/**
 * @file
 * video_flags.features.inc
 */

/**
 * Implementation of hook_ctools_plugin_api().
 */
function video_flags_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implementation of hook_flag_default_flags().
 */
function video_flags_flag_default_flags() {
  $flags = array();
  // Exported flag: "Follow".
  $flags['follow'] = array(
    'content_type' => 'user',
    'title' => 'Follow',
    'global' => '0',
    'types' => array(),
    'flag_short' => 'Follow',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Your Following! Cancel?',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'roles' => array(
      'flag' => array(
        0 => '2',
      ),
      'unflag' => array(
        0 => '2',
      ),
    ),
    'show_on_profile' => 1,
    'access_uid' => '',
    'api_version' => 2,
    'module' => 'video_flags',
    'locked' => array(
      0 => 'name',
    ),
  );
  // Exported flag: "Watch later".
  $flags['watch_later'] = array(
    'content_type' => 'node',
    'title' => 'Watch later',
    'global' => '0',
    'types' => array(
      0 => 'video',
    ),
    'flag_short' => 'Watch this video later!',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Remove from the list!',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'roles' => array(
      'flag' => array(
        0 => '2',
      ),
      'unflag' => array(
        0 => '2',
      ),
    ),
    'show_on_page' => 1,
    'show_on_teaser' => 1,
    'show_on_form' => 0,
    'access_author' => 'others',
    'i18n' => 0,
    'api_version' => 2,
    'module' => 'video_flags',
    'locked' => array(
      0 => 'name',
    ),
  );
  return $flags;
}
