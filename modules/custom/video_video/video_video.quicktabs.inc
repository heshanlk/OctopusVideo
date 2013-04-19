<?php
/**
 * @file
 * video_video.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function video_video_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'home_page';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Home page';
  $quicktabs->tabs = array(
    0 => array(
      'vid' => 'video',
      'display' => 'block_8',
      'args' => '',
      'title' => 'Watching Now',
      'weight' => '-100',
      'type' => 'view',
    ),
    1 => array(
      'vid' => 'video',
      'display' => 'block_7',
      'args' => '',
      'title' => 'Popular Today',
      'weight' => '-99',
      'type' => 'view',
    ),
    2 => array(
      'vid' => 'video',
      'display' => 'block_6',
      'args' => '',
      'title' => 'Popular All Time',
      'weight' => '-98',
      'type' => 'view',
    ),
    3 => array(
      'vid' => 'video',
      'display' => 'block_5',
      'args' => '',
      'title' => 'Most Searched',
      'weight' => '-97',
      'type' => 'view',
    ),
    4 => array(
      'vid' => 'video',
      'display' => 'block_3',
      'args' => '',
      'title' => 'Most Voted',
      'weight' => '-96',
      'type' => 'view',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'nostyle';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Home page');
  t('Most Searched');
  t('Most Voted');
  t('Popular All Time');
  t('Popular Today');
  t('Watching Now');

  $export['home_page'] = $quicktabs;

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'related_videos';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Related videos';
  $quicktabs->tabs = array(
    0 => array(
      'vid' => 'video',
      'display' => 'block_1',
      'args' => '',
      'title' => 'Related videos',
      'weight' => '-100',
      'type' => 'view',
    ),
    1 => array(
      'vid' => 'video',
      'display' => 'block_2',
      'args' => '',
      'title' => 'More by user',
      'weight' => '-99',
      'type' => 'view',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'nostyle';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('More by user');
  t('Related videos');

  $export['related_videos'] = $quicktabs;

  return $export;
}
