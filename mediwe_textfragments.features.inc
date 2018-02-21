<?php
/**
 * @file
 * mediwe_textfragments.features.inc
 */

/**
 * Implements hook_node_info().
 */
function mediwe_textfragments_node_info() {
  $items = array(
    'text_fragment' => array(
      'name' => t('Text Fragment'),
      'base' => 'node_content',
      'description' => t('Multilingual text fragments used in the Belgian context'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
