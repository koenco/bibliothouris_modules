<?php
/**
 * @file
 * bibliotouris_book.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function bibliotouris_book_default_fe_block_settings() {
  $export = array();

  // bartik
  $theme = array();

  $theme['menu-menu-navigation-custom'] = array(
    'module' => 'menu',
    'delta' => 'menu-navigation-custom',
    'theme' => 'bartik',
    'status' => '1',
    'weight' => '0',
    'region' => 'sidebar_first',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['system-navigation'] = array(
    'module' => 'system',
    'delta' => 'navigation',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['views--exp-view_all_books-page'] = array(
    'module' => 'views',
    'delta' => '-exp-view_all_books-page',
    'theme' => 'bartik',
    'status' => '1',
    'weight' => '-11',
    'region' => 'content',
    'custom' => '0',
    'visibility' => '1',
    'pages' => 'view-all-books',
    'title' => '',
    'cache' => -1,
  );

  $export['bartik'] = $theme;

  // bibliothouris_theme
  $theme = array();

  $theme['menu-menu-navigation-custom'] = array(
    'module' => 'menu',
    'delta' => 'menu-navigation-custom',
    'theme' => 'bibliothouris_theme',
    'status' => '1',
    'weight' => '0',
    'region' => 'sidebar_first',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['system-navigation'] = array(
    'module' => 'system',
    'delta' => 'navigation',
    'theme' => 'bibliothouris_theme',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['views--exp-view_all_books-page'] = array(
    'module' => 'views',
    'delta' => '-exp-view_all_books-page',
    'theme' => 'bibliothouris_theme',
    'status' => '1',
    'weight' => '-11',
    'region' => 'content',
    'custom' => '0',
    'visibility' => '1',
    'pages' => 'view-all-books',
    'title' => '',
    'cache' => -1,
  );

  $export['bibliothouris_theme'] = $theme;

  // omega
  $theme = array();

  $theme['menu-menu-navigation-custom'] = array(
    'module' => 'menu',
    'delta' => 'menu-navigation-custom',
    'theme' => 'omega',
    'status' => '1',
    'weight' => '0',
    'region' => 'sidebar_first',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['system-navigation'] = array(
    'module' => 'system',
    'delta' => 'navigation',
    'theme' => 'omega',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['views--exp-view_all_books-page'] = array(
    'module' => 'views',
    'delta' => '-exp-view_all_books-page',
    'theme' => 'omega',
    'status' => '1',
    'weight' => '-11',
    'region' => 'content',
    'custom' => '0',
    'visibility' => '1',
    'pages' => 'view-all-books',
    'title' => '',
    'cache' => -1,
  );

  $export['omega'] = $theme;

  // respond
  $theme = array();

  $theme['menu-menu-navigation-custom'] = array(
    'module' => 'menu',
    'delta' => 'menu-navigation-custom',
    'theme' => 'respond',
    'status' => '1',
    'weight' => '0',
    'region' => 'sidebar_first',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['system-navigation'] = array(
    'module' => 'system',
    'delta' => 'navigation',
    'theme' => 'respond',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['views--exp-view_all_books-page'] = array(
    'module' => 'views',
    'delta' => '-exp-view_all_books-page',
    'theme' => 'respond',
    'status' => '1',
    'weight' => '-11',
    'region' => 'content',
    'custom' => '0',
    'visibility' => '1',
    'pages' => 'view-all-books',
    'title' => '',
    'cache' => -1,
  );

  $export['respond'] = $theme;

  // seven
  $theme = array();

  $theme['menu-menu-navigation-custom'] = array(
    'module' => 'menu',
    'delta' => 'menu-navigation-custom',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['system-navigation'] = array(
    'module' => 'system',
    'delta' => 'navigation',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['views--exp-view_all_books-page'] = array(
    'module' => 'views',
    'delta' => '-exp-view_all_books-page',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '1',
    'pages' => 'view-all-books',
    'title' => '',
    'cache' => -1,
  );

  $export['seven'] = $theme;

  $theme_default = variable_get('theme_default', 'garland');
  $themes = list_themes();
  foreach ($export as $theme_key => $settings) {
    if ($theme_key != $theme_default && empty($themes[$theme_key]->status)) {
      unset($export[$theme_key]);
    }
  }
  return $export;
}
