<?php
/**
 * @file
 * video_flags.features.menu_links.inc
 */

/**
 * Implementation of hook_menu_default_menu_links().
 */
function video_flags_menu_default_menu_links() {
  $menu_links = array();

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
  t('Watch Later');


  return $menu_links;
}
