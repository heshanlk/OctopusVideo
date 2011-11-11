<?php
/**
 * @file
 * video_channels.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function video_channels_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function video_channels_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}

/**
 * Implements hook_node_info().
 */
function video_channels_node_info() {
  $items = array(
    'channel' => array(
      'name' => t('Channel'),
      'base' => 'node_content',
      'description' => t('Channels where users can publish their contents and subscribe in the same time.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
