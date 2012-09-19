<?php
/**
 * @file
 * bibliotouris_book.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function bibliotouris_book_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'uid' => '1',
  'title' => 'Boek1',
  'log' => '',
  'status' => '1',
  'comment' => '1',
  'promote' => '0',
  'sticky' => '0',
  'vuuid' => 'b7e5d980-43b5-4721-8377-2baf1ea53193',
  'type' => 'book',
  'language' => 'und',
  'created' => '1348046919',
  'tnid' => '0',
  'translate' => '0',
  'uuid' => '73fdd4d1-2245-4dc0-9a1b-f94fe228bdab',
  'revision_uid' => '1',
  'field_author_first_name' => array(
    'und' => array(
      0 => array(
        'value' => 'Renee',
        'format' => NULL,
        'safe_value' => 'Renee',
      ),
    ),
  ),
  'field_author_last_name' => array(
    'und' => array(
      0 => array(
        'value' => 'Gijp',
        'format' => NULL,
        'safe_value' => 'Gijp',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => '1',
      ),
    ),
  ),
  'field_cover_image' => array(
    'und' => array(
      0 => array(
        'fid' => '1',
        'alt' => '',
        'title' => '',
        'width' => '550',
        'height' => '785',
        'uid' => '1',
        'filename' => '1001004011817640.jpg',
        'uri' => 'public://1001004011817640.jpg',
        'filemime' => 'image/jpeg',
        'filesize' => '74054',
        'status' => '1',
        'timestamp' => '1348048920',
        'uuid' => 'bbe2d6aa-1ea6-4b1c-8084-127216e9550a',
        'rdf_mapping' => array(),
      ),
    ),
  ),
  'field_description' => array(),
  'field_isbn' => array(
    'und' => array(
      0 => array(
        'value' => '9789071359477',
        'format' => NULL,
        'safe_value' => '9789071359477',
      ),
    ),
  ),
  'field_pages' => array(
    'und' => array(
      0 => array(
        'value' => '2',
      ),
    ),
  ),
  'field_publication_date' => array(
    'und' => array(
      0 => array(
        'value' => '2012-09-19 00:00:00',
        'timezone' => 'Europe/Berlin',
        'timezone_db' => 'Europe/Berlin',
        'date_type' => 'datetime',
      ),
    ),
  ),
  'field_publisher' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => '0',
  'last_comment_name' => NULL,
  'last_comment_uid' => '1',
  'comment_count' => '0',
  'name' => 'admin',
  'picture' => '0',
  'data' => 'b:0;',
  'date' => '2012-09-19 11:28:39 +0200',
);
  return $nodes;
}
