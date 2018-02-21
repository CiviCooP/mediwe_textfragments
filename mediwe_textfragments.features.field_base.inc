<?php
/**
 * @file
 * mediwe_textfragments.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function mediwe_textfragments_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'body'.
  $field_bases['body'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'node',
    ),
    'field_name' => 'body',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_with_summary',
  );

  // Exported field_base: 'field_civi_contact'.
  $field_bases['field_civi_contact'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_civi_contact',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'civicrm_contact_ref',
    'settings' => array(
      'allowed_values' => array(
        'Individual' => array(
          'Individual' => 0,
          'Parent' => 0,
          'Staff' => 0,
          'Student' => 0,
          'mediwe_gebruiker' => 0,
          'mediwe_klant_medewerker' => 0,
        ),
        'Household' => array(
          'Household' => 0,
        ),
        'Organization' => array(
          'Organization' => 0,
          'Sponsor' => 0,
          'Team' => 0,
          'mediwe_controle_arts' => 0,
          'mediwe_inspecteur' => 0,
          'mediwe_klant' => 'mediwe_klant',
        ),
      ),
    ),
    'translatable' => 0,
    'type' => 'civicrm_contact_ref_contact',
  );

  // Exported field_base: 'field_language'.
  $field_bases['field_language'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_language',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'NL' => 'NL',
        'FR' => 'FR',
        'EN' => 'EN',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_reference'.
  $field_bases['field_reference'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_reference',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 30,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  return $field_bases;
}
