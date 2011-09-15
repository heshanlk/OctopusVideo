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
    'flag_long' => 'Add this user to your list of followers.',
    'flag_message' => 'Your following',
    'unflag_short' => 'Unfollow',
    'unflag_long' => 'Remove this user from your list of followers.',
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
    'access_uid' => 'others',
    'module' => 'video_flags',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 2,
  );
  // Exported flag: "Watch Later".
  $flags['watch_later'] = array(
    'content_type' => 'node',
    'title' => 'Watch Later',
    'global' => '0',
    'types' => array(
      0 => 'video',
    ),
    'flag_short' => 'Add to Watch Later',
    'flag_long' => 'Add this post to your Watch Later video channel',
    'flag_message' => 'This post has been added to your Watch Later channel',
    'unflag_short' => 'Remove?',
    'unflag_long' => 'Remove this post from your Watch Later video channel',
    'unflag_message' => 'This post has been removed from your Watch Later channel',
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
    'access_author' => '',
    'i18n' => 0,
    'module' => 'video_flags',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 2,
  );
  return $flags;
}
