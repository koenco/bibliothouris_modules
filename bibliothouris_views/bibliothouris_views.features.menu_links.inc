<?php
/**
 * @file
 * bibliothouris_views.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function bibliothouris_views_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-navigation-custom:show-all-members
  $menu_links['menu-navigation-custom:show-all-members'] = array(
    'menu_name' => 'menu-navigation-custom',
    'link_path' => 'show-all-members',
    'router_path' => 'show-all-members',
    'link_title' => 'Show all members',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Show all members');


  return $menu_links;
}
