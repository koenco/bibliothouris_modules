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

  $theme['views--exp-show_all_members-page'] = array(
    'module' => 'views',
    'delta' => '-exp-show_all_members-page',
    'theme' => 'alphorn',
    'status' => '1',
    'weight' => '-12',
    'region' => 'content',
    'custom' => '0',
    'visibility' => '1',
    'pages' => 'show-all-members',
    'title' => '',
    'cache' => -1,
  );

  $export['alphorn'] = $theme;

  // bartik
  $theme = array();

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

  $export['bartik'] = $theme;

  // seven
  $theme = array();

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
