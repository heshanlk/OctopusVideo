<?php
/**
 * @file
 * video_permissions.features.user_permission.inc
 */

/**
 * Implementation of hook_user_default_permissions().
 */
function video_permissions_user_default_permissions() {
  $permissions = array();

  // Exported permission: transocder postback
  $permissions['transocder postback'] = array(
    'name' => 'transocder postback',
    'roles' => array(
      0 => 'anonymous user',
    ),
    'module' => 'video',
  );

  return $permissions;
}
