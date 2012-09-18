<?php
/**
 * @file
 * bibliotouris_book.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function bibliotouris_book_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Non-Fiction',
    'description' => 'Non-fictie',
    'format' => 'filtered_html',
    'weight' => '0',
    'uuid' => '5fb0bacc-608c-75f4-d9ae-77e3ac65ea05',
    'vocabulary_machine_name' => 'category',
  );
  $terms[] = array(
    'name' => 'Youth',
    'description' => 'Jeugd',
    'format' => 'filtered_html',
    'weight' => '0',
    'uuid' => '7c8253be-75e1-5054-79a6-cfcaceee8f3c',
    'vocabulary_machine_name' => 'category',
  );
  $terms[] = array(
    'name' => 'Fiction',
    'description' => 'Fictie',
    'format' => 'filtered_html',
    'weight' => '0',
    'uuid' => 'c5a80e81-5e54-ea34-75a5-65a3b42a268d',
    'vocabulary_machine_name' => 'category',
  );
  return $terms;
}
