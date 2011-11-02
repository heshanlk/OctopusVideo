<?php
/**
 * @file
 * video_channels.features.menu_links.inc
 */

/**
 * Implementation of hook_menu_default_menu_links().
 */
function video_channels_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:channels
  $menu_links['main-menu:channels'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'channels',
    'router_path' => 'channels',
    'link_title' => 'Channels',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Channels');


  return $menu_links;
}
