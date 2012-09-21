<?php
/**
 * @file
 * bibliothouris_user.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function bibliothouris_user_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer permissions.
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(
      0 => 'administrator',
      1 => 'employee',
    ),
    'module' => 'user',
  );

  // Exported permission: administer users.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      0 => 'administrator',
      1 => 'employee',
    ),
    'module' => 'user',
  );

  // Exported permission: create users.
  $permissions['create users'] = array(
    'name' => 'create users',
    'roles' => array(
      0 => 'administrator',
      1 => 'employee',
    ),
    'module' => 'administerusersbyrole',
  );

  // Exported permission: edit users with role employee.
  $permissions['edit users with role employee'] = array(
    'name' => 'edit users with role employee',
    'roles' => array(
      0 => 'administrator',
      1 => 'employee',
    ),
    'module' => 'administerusersbyrole',
  );

  // Exported permission: edit users with role librarymember.
  $permissions['edit users with role librarymember'] = array(
    'name' => 'edit users with role librarymember',
    'roles' => array(
      0 => 'administrator',
      1 => 'employee',
    ),
    'module' => 'administerusersbyrole',
  );

  return $permissions;
}
