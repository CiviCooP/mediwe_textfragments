<?php
/**
 * @file
 * mediwe_textfragments.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function mediwe_textfragments_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-text_fragment-body'.
  $field_instances['node-text_fragment-body'] = array(
    'bundle' => 'text_fragment',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Text',
    'required' => 0,
    'settings' => array(
      'display_summary' => 1,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-text_fragment-field_civi_contact'.
  $field_instances['node-text_fragment-field_civi_contact'] = array(
    'bundle' => 'text_fragment',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'civicrm_contact_ref',
        'settings' => array(),
        'type' => 'civicrm_contact_ref_link',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_civi_contact',
    'label' => 'Civi Contact',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'civicrm_contact_ref',
      'settings' => array(
        'autocomplete_path' => 'civicrm_contact_ref/autocomplete',
        'size' => 60,
      ),
      'type' => 'civicrm_contact_ref_autocomplete',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-text_fragment-field_language'.
  $field_instances['node-text_fragment-field_language'] = array(
    'bundle' => 'text_fragment',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_language',
    'label' => 'Taal',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-text_fragment-field_reference'.
  $field_instances['node-text_fragment-field_reference'] = array(
    'bundle' => 'text_fragment',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Referentie naar het tekst fragment om in de code te gebruiken.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_reference',
    'label' => 'Referentie',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Civi Contact');
  t('Referentie');
  t('Referentie naar het tekst fragment om in de code te gebruiken.');
  t('Taal');
  t('Text');

  return $field_instances;
}
