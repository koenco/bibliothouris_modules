<?php
/**
 * @file
 * bibliothouris_views.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function bibliothouris_views_user_default_permissions() {
  $permissions = array();

  // Exported permission: create lended_book content.
  $permissions['create lended_book content'] = array(
    'name' => 'create lended_book content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any lended_book content.
  $permissions['delete any lended_book content'] = array(
    'name' => 'delete any lended_book content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own lended_book content.
  $permissions['delete own lended_book content'] = array(
    'name' => 'delete own lended_book content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit any lended_book content.
  $permissions['edit any lended_book content'] = array(
    'name' => 'edit any lended_book content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own lended_book content.
  $permissions['edit own lended_book content'] = array(
    'name' => 'edit own lended_book content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: lend out a book.
  $permissions['lend out a book'] = array(
    'name' => 'lend out a book',
    'roles' => array(
      0 => 'administrator',
      1 => 'employee',
    ),
    'module' => 'bibliothouris_views',
  );

  return $permissions;
}
