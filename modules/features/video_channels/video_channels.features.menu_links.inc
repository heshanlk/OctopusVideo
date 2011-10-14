<?php
/**
 * @file
 * video_channels.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function video_channels_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:channels
  $menu_links['main-menu:channels'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'channels',
    'router_path' => 'channels',
    'link_title' => 'Channels',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: main-menu:node/add/channel
  $menu_links['main-menu:node/add/channel'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/add/channel',
    'router_path' => 'node/add/channel',
    'link_title' => 'Create a Channel',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
    'parent_path' => 'node/add',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Channels');
  t('Create a Channel');


  return $menu_links;
}
