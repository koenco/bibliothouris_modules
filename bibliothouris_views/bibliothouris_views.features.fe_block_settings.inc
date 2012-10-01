<?php
/**
 * @file
 * bibliothouris_views.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function bibliothouris_views_default_fe_block_settings() {
  $export = array();

  // alphorn
  $theme = array();

  $theme['system-powered-by'] = array(
    'module' => 'system',
    'delta' => 'powered-by',
    'theme' => 'alphorn',
    'status' => 0,
    'weight' => '-6',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['views--exp-show_all_members-page'] = array(
    'module' => 'views',
    'delta' => '-exp-show_all_members-page',
    'theme' => 'alphorn',
    'status' => '1',
    'weight' => '-14',
    'region' => 'content',
    'custom' => '0',
    'visibility' => '1',
    'pages' => 'show-all-members',
    'title' => '',
    'cache' => -1,
  );

  $theme['views--exp-view_all_books-page'] = array(
    'module' => 'views',
    'delta' => '-exp-view_all_books-page',
    'theme' => 'alphorn',
    'status' => '1',
    'weight' => '-13',
    'region' => 'content',
    'custom' => '0',
    'visibility' => '1',
    'pages' => 'view-all-books',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-borrowed_books-block'] = array(
    'module' => 'views',
    'delta' => 'borrowed_books-block',
    'theme' => 'alphorn',
    'status' => '1',
    'weight' => '-10',
    'region' => 'content',
    'custom' => '0',
    'visibility' => '1',
    'pages' => 'user/*',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-enter_a_new_book-block'] = array(
    'module' => 'views',
    'delta' => 'enter_a_new_book-block',
    'theme' => 'alphorn',
    'status' => '1',
    'weight' => '-9',
    'region' => 'content',
    'custom' => '0',
    'visibility' => '1',
    'pages' => 'user/*',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-top_10_borrowed_books-block'] = array(
    'module' => 'views',
    'delta' => 'top_10_borrowed_books-block',
    'theme' => 'alphorn',
    'status' => '1',
    'weight' => '-7',
    'region' => 'content',
    'custom' => '0',
    'visibility' => '1',
    'pages' => '<front>',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-top_10_viewed_books-block'] = array(
    'module' => 'views',
    'delta' => 'top_10_viewed_books-block',
    'theme' => 'alphorn',
    'status' => '1',
    'weight' => '-8',
    'region' => 'content',
    'custom' => '0',
    'visibility' => '1',
    'pages' => '<front>',
    'title' => '',
    'cache' => -1,
  );

  $export['alphorn'] = $theme;

  // bartik
  $theme = array();

  $theme['system-powered-by'] = array(
    'module' => 'system',
    'delta' => 'powered-by',
    'theme' => 'bartik',
    'status' => '1',
    'weight' => '10',
    'region' => 'footer',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['views--exp-show_all_members-page'] = array(
    'module' => 'views',
    'delta' => '-exp-show_all_members-page',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '1',
    'pages' => 'show-all-members',
    'title' => '',
    'cache' => -1,
  );

  $theme['views--exp-view_all_books-page'] = array(
    'module' => 'views',
    'delta' => '-exp-view_all_books-page',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '1',
    'pages' => 'view-all-books',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-borrowed_books-block'] = array(
    'module' => 'views',
    'delta' => 'borrowed_books-block',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '1',
    'pages' => 'user/*',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-enter_a_new_book-block'] = array(
    'module' => 'views',
    'delta' => 'enter_a_new_book-block',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => 'user/*',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-top_10_borrowed_books-block'] = array(
    'module' => 'views',
    'delta' => 'top_10_borrowed_books-block',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '<front>',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-top_10_viewed_books-block'] = array(
    'module' => 'views',
    'delta' => 'top_10_viewed_books-block',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '<front>',
    'title' => '',
    'cache' => -1,
  );

  $export['bartik'] = $theme;

  // seven
  $theme = array();

  $theme['system-powered-by'] = array(
    'module' => 'system',
    'delta' => 'powered-by',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '10',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['views--exp-show_all_members-page'] = array(
    'module' => 'views',
    'delta' => '-exp-show_all_members-page',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '1',
    'pages' => 'show-all-members',
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

  $theme['views-borrowed_books-block'] = array(
    'module' => 'views',
    'delta' => 'borrowed_books-block',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '1',
    'pages' => 'user/*',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-enter_a_new_book-block'] = array(
    'module' => 'views',
    'delta' => 'enter_a_new_book-block',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => 'user/*',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-top_10_borrowed_books-block'] = array(
    'module' => 'views',
    'delta' => 'top_10_borrowed_books-block',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '<front>',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-top_10_viewed_books-block'] = array(
    'module' => 'views',
    'delta' => 'top_10_viewed_books-block',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '<front>',
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
