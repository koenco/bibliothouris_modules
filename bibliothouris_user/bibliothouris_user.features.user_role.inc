<?php
/**
 * @file
 * bibliothouris_user.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function bibliothouris_user_user_default_roles() {
  $roles = array();

  // Exported role: employee.
  $roles['employee'] = array(
    'name' => 'employee',
    'weight' => '3',
  );

  // Exported role: library member.
  $roles['library member'] = array(
    'name' => 'library member',
    'weight' => '4',
  );

  return $roles;
}
