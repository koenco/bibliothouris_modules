<?php
/**
 * @file
 * bibliothouris_user.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function bibliothouris_user_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-navigation-custom:admin/people/create
  $menu_links['menu-navigation-custom:admin/people/create'] = array(
    'menu_name' => 'menu-navigation-custom',
    'link_path' => 'admin/people/create',
    'router_path' => 'admin/people/create',
    'link_title' => 'Add library member',
    'options' => array(
      'attributes' => array(
        'title' => 'A page to add new library members',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Add library member');


  return $menu_links;
}
