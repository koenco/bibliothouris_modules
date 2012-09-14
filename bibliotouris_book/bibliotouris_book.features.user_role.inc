<?php
/**
 * @file
 * bibliotouris_book.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function bibliotouris_book_user_default_roles() {
  $roles = array();

  // Exported role: medewerker.
  $roles['medewerker'] = array(
    'name' => 'medewerker',
    'weight' => '3',
  );

  return $roles;
}
