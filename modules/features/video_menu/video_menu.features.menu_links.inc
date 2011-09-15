<?php
/**
 * @file
 * video_menu.features.menu_links.inc
 */

/**
 * Implementation of hook_menu_default_menu_links().
 */
function video_menu_menu_default_menu_links() {
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
  // Exported menu link: main-menu:videos
  $menu_links['main-menu:videos'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'videos',
    'router_path' => 'videos',
    'link_title' => 'All Videos',
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
    'weight' => '-50',
  );
  // Exported menu link: main-menu:watch-later
  $menu_links['main-menu:watch-later'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'watch-later',
    'router_path' => 'watch-later',
    'link_title' => 'Watch Later',
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
  t('All Videos');
  t('Channels');
  t('Watch Later');


  return $menu_links;
}
