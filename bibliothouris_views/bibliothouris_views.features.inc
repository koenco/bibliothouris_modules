<?php
/**
 * @file
 * bibliothouris_views.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function bibliothouris_views_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function bibliothouris_views_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function bibliothouris_views_node_info() {
  $items = array(
    'lended_book' => array(
      'name' => t('Lended book'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
