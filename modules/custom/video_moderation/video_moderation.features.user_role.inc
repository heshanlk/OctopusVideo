<?php
/**
 * @file
 * video_moderation.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function video_moderation_user_default_roles() {
  $roles = array();

  // Exported role: approver.
  $roles['approver'] = array(
    'name' => 'approver',
    'weight' => '3',
  );

  // Exported role: publisher.
  $roles['publisher'] = array(
    'name' => 'publisher',
    'weight' => '4',
  );

  return $roles;
}
