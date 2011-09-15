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
    'weight' => '-49',
  );
  // Exported menu link: main-menu:node/add/channel
  $menu_links['main-menu:node/add/channel'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/add/channel',
    'router_path' => 'node/add/channel',
    'link_title' => 'Create a Channel',
    'options' => array(
      'attributes' => array(
        'title' => 'Channels where users can publish their contents and subscribe in the same time.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
    'parent_path' => 'node/add/video',
  );
  // Exported menu link: main-menu:node/add/video
  $menu_links['main-menu:node/add/video'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/add/video',
    'router_path' => 'node/add/video',
    'link_title' => 'Upload',
    'options' => array(
      'attributes' => array(
        'title' => 'Upload videos.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '-47',
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
    'weight' => '-48',
  );
  // Exported menu link: user-menu:user
  $menu_links['user-menu:user'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user',
    'router_path' => 'user',
    'link_title' => 'User account',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
  );
  // Exported menu link: user-menu:user/logout
  $menu_links['user-menu:user/logout'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'Log out',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('All Videos');
  t('Channels');
  t('Create a Channel');
  t('Log out');
  t('Upload');
  t('User account');
  t('Watch Later');


  return $menu_links;
}
