<?php
/**
 * @file
 * video_video.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function video_video_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:node/add
  $menu_links['main-menu:node/add'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/add',
    'router_path' => 'node/add',
    'link_title' => 'Upload',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '-47',
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
  // Exported menu link: main-menu:node/add/video
  $menu_links['main-menu:node/add/video'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/add/video',
    'router_path' => 'node/add/video',
    'link_title' => 'Upload a video',
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
    'parent_path' => 'node/add',
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
  // Translatables
  // Included for use with string extractors like potx.
  t('All Videos');
  t('Create a Channel');
  t('Upload');
  t('Upload a video');


  return $menu_links;
}
