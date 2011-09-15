<?php
/**
 * @file
 * video_video.context.inc
 */

/**
 * Implementation of hook_context_default_contexts().
 */
function video_video_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'related_videos';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'video/*' => 'video/*',
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
