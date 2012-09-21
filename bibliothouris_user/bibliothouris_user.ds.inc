<?php
/**
 * @file
 * bibliothouris_user.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function bibliothouris_user_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'user|user|default';
  $ds_fieldsetting->entity_type = 'user';
  $ds_fieldsetting->bundle = 'user';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'custom_telephone' => array(
      'weight' => '6',
      'label' => 'inline',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 0,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:9:{s:5:"label";s:6:"hidden";s:9:"formatter";s:5:"phone";s:11:"delta_limit";i:0;s:12:"delta_offset";s:1:"0";s:14:"delta_reversed";b:0;s:18:"formatter_settings";a:0:{}s:7:"context";s:25:"argument_entity_id:user_1";s:14:"override_title";i:0;s:19:"override_title_text";s:2:"T:";}s:4:"type";s:12:"entity_field";s:7:"subtype";s:23:"user:field_phone_number";}',
        'load_terms' => 0,
      ),
    ),
    'history' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 1,
        'title_wrapper' => 'p',
        'ctools' => 'a:3:{s:4:"conf";a:4:{s:8:"sanitize";i:1;s:7:"context";s:25:"argument_entity_id:user_1";s:14:"override_title";i:1;s:19:"override_title_text";s:13:"Member since:";}s:4:"type";s:5:"token";s:7:"subtype";s:12:"user:created";}',
        'load_terms' => 0,
      ),
    ),
    'username2' => array(
      'weight' => '7',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 0,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:4:{s:8:"sanitize";i:1;s:7:"context";s:25:"argument_entity_id:user_1";s:14:"override_title";i:0;s:19:"override_title_text";s:0:"";}s:4:"type";s:5:"token";s:7:"subtype";s:9:"user:mail";}',
        'load_terms' => 0,
      ),
    ),
  );
  $export['user|user|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function bibliothouris_user_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'custom_telephone';
  $ds_field->label = 'Custom Telephone';
  $ds_field->field_type = 7;
  $ds_field->entities = array(
    'user' => 'user',
  );
  $ds_field->properties = array(
    'default' => array(),
    'settings' => array(
      'show_title' => array(
        'type' => 'checkbox',
      ),
      'title_wrapper' => array(
        'type' => 'textfield',
        'description' => 'Eg: h1, h2, p',
      ),
      'ctools' => array(
        'type' => 'ctools',
      ),
    ),
  );
  $export['custom_telephone'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'history';
  $ds_field->label = 'History';
  $ds_field->field_type = 7;
  $ds_field->entities = array(
    'user' => 'user',
  );
  $ds_field->properties = array(
    'default' => array(),
    'settings' => array(
      'show_title' => array(
        'type' => 'checkbox',
      ),
      'title_wrapper' => array(
        'type' => 'textfield',
        'description' => 'Eg: h1, h2, p',
      ),
      'ctools' => array(
        'type' => 'ctools',
      ),
    ),
  );
  $export['history'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'username2';
  $ds_field->label = 'username';
  $ds_field->field_type = 7;
  $ds_field->entities = array(
    'user' => 'user',
  );
  $ds_field->properties = array(
    'default' => array(),
    'settings' => array(
      'show_title' => array(
        'type' => 'checkbox',
      ),
      'title_wrapper' => array(
        'type' => 'textfield',
        'description' => 'Eg: h1, h2, p',
      ),
      'ctools' => array(
        'type' => 'ctools',
      ),
    ),
  );
  $export['username2'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function bibliothouris_user_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'user|user|default';
  $ds_layout->entity_type = 'user';
  $ds_layout->bundle = 'user';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'panels-flexible:user_layout';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'center' => array(
        0 => 'field_street_number',
        1 => 'field_postal_code',
        2 => 'field_city',
      ),
      'left' => array(
        0 => 'history',
      ),
      'right' => array(
        0 => 'field_date_of_birth',
        1 => 'custom_telephone',
        2 => 'username2',
      ),
      'name' => array(
        0 => 'field_first_name',
        1 => 'field_last_name',
      ),
    ),
    'fields' => array(
      'field_street_number' => 'center',
      'field_postal_code' => 'center',
      'field_city' => 'center',
      'history' => 'left',
      'field_date_of_birth' => 'right',
      'custom_telephone' => 'right',
      'username2' => 'right',
      'field_first_name' => 'name',
      'field_last_name' => 'name',
    ),
    'classes' => array(),
  );
  $export['user|user|default'] = $ds_layout;

  return $export;
}
