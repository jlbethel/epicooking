<?php
/**
 * @file
 * roles.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function roles_user_default_roles() {
  $roles = array();

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 4,
  );

  // Exported role: contributor.
  $roles['contributor'] = array(
    'name' => 'contributor',
    'weight' => 3,
  );

  // Exported role: forum moderator.
  $roles['forum moderator'] = array(
    'name' => 'forum moderator',
    'weight' => 2,
  );

  return $roles;
}
