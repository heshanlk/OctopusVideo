<?php
/**
 * @file
 * video_video.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function video_video_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer video presets
  $permissions['administer video presets'] = array(
    'name' => 'administer video presets',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'video',
  );

  // Exported permission: bypass conversion video
  $permissions['bypass conversion video'] = array(
    'name' => 'bypass conversion video',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'video',
  );

  // Exported permission: convert on submission
  $permissions['convert on submission'] = array(
    'name' => 'convert on submission',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'video',
  );

  // Exported permission: create video content
  $permissions['create video content'] = array(
    'name' => 'create video content',
    'roles' => array(
      0 => 'administrator',
      1 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any video content
  $permissions['delete any video content'] = array(
    'name' => 'delete any video content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own video content
  $permissions['delete own video content'] = array(
    'name' => 'delete own video content',
    'roles' => array(
      0 => 'administrator',
      1 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any video content
  $permissions['edit any video content'] = array(
    'name' => 'edit any video content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own video content
  $permissions['edit own video content'] = array(
    'name' => 'edit own video content',
    'roles' => array(
      0 => 'administrator',
      1 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: override player dimensions
  $permissions['override player dimensions'] = array(
    'name' => 'override player dimensions',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'video',
  );

  // Exported permission: re convert video
  $permissions['re convert video'] = array(
    'name' => 're convert video',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'video',
  );

  // Exported permission: use default thumb
  $permissions['use default thumb'] = array(
    'name' => 'use default thumb',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'video',
  );

  return $permissions;
}
