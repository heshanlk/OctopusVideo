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

  // Exported permission: access comments.
  $permissions['access comments'] = array(
    'name' => 'access comments',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: access content.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'approver',
      3 => 'authenticated user',
      4 => 'publisher',
    ),
    'module' => 'node',
  );

  // Exported permission: access fblikebutton.
  $permissions['access fblikebutton'] = array(
    'name' => 'access fblikebutton',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'fblikebutton',
  );

  // Exported permission: access statistics.
  $permissions['access statistics'] = array(
    'name' => 'access statistics',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'statistics',
  );

  // Exported permission: access user profiles.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'user',
  );

  // Exported permission: administer video presets.
  $permissions['administer video presets'] = array(
    'name' => 'administer video presets',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'video',
  );

  // Exported permission: bypass conversion video.
  $permissions['bypass conversion video'] = array(
    'name' => 'bypass conversion video',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'video',
  );

  // Exported permission: convert on submission.
  $permissions['convert on submission'] = array(
    'name' => 'convert on submission',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'video',
  );

  // Exported permission: create video content.
  $permissions['create video content'] = array(
    'name' => 'create video content',
    'roles' => array(
      0 => 'administrator',
      1 => 'approver',
      2 => 'authenticated user',
      3 => 'publisher',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any video content.
  $permissions['delete any video content'] = array(
    'name' => 'delete any video content',
    'roles' => array(
      0 => 'administrator',
      1 => 'approver',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own video content.
  $permissions['delete own video content'] = array(
    'name' => 'delete own video content',
    'roles' => array(
      0 => 'administrator',
      1 => 'approver',
      2 => 'authenticated user',
      3 => 'publisher',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any video content.
  $permissions['edit any video content'] = array(
    'name' => 'edit any video content',
    'roles' => array(
      0 => 'administrator',
      1 => 'approver',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own video content.
  $permissions['edit own video content'] = array(
    'name' => 'edit own video content',
    'roles' => array(
      0 => 'administrator',
      1 => 'approver',
      2 => 'authenticated user',
      3 => 'publisher',
    ),
    'module' => 'node',
  );

  // Exported permission: override player dimensions.
  $permissions['override player dimensions'] = array(
    'name' => 'override player dimensions',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'video',
  );

  // Exported permission: post comments.
  $permissions['post comments'] = array(
    'name' => 'post comments',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: rate content.
  $permissions['rate content'] = array(
    'name' => 'rate content',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'fivestar',
  );

  // Exported permission: re convert video.
  $permissions['re convert video'] = array(
    'name' => 're convert video',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'video',
  );

  // Exported permission: search content.
  $permissions['search content'] = array(
    'name' => 'search content',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'search',
  );

  // Exported permission: use default thumb.
  $permissions['use default thumb'] = array(
    'name' => 'use default thumb',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'video',
  );

  // Exported permission: view google plusone.
  $permissions['view google plusone'] = array(
    'name' => 'view google plusone',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'google_plusone',
  );

  // Exported permission: view own unpublished content.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      0 => 'administrator',
      1 => 'approver',
      2 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: view post access counter.
  $permissions['view post access counter'] = array(
    'name' => 'view post access counter',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'statistics',
  );

  return $permissions;
}
