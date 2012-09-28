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
    'name' => 'Loaned',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '0',
    'uuid' => '4ec0ed79-f478-45e2-a882-f41e81171151',
    'vocabulary_machine_name' => 'status',
  );
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
    'name' => 'Available',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '0',
    'uuid' => 'b055f7da-f9b0-45a5-a695-2b5b9a77f48c',
    'vocabulary_machine_name' => 'status',
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
