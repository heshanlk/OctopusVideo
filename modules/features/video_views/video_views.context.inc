<?php
/**
 * @file
 * video_views.context.inc
 */

/**
 * Implementation of hook_context_default_contexts().
 */
function video_views_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'front_page';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-video-block_3' => array(
          'module' => 'views',
          'delta' => 'video-block_3',
          'region' => 'featured',
          'weight' => '-10',
        ),
        'views-video-block_5' => array(
          'module' => 'views',
          'delta' => 'video-block_5',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-video-block_4' => array(
          'module' => 'views',
          'delta' => 'video-block_4',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['front_page'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'related_videos';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'video' => 'video',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'quicktabs-related_videos' => array(
          'module' => 'quicktabs',
          'delta' => 'related_videos',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['related_videos'] = $context;

  return $export;
}
