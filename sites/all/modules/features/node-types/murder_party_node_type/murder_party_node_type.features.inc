<?php
/**
 * @file
 * murder_party_node_type.features.inc
 */

/**
 * Implements hook_node_info().
 */
function murder_party_node_type_node_info() {
  $items = array(
    'murder_party' => array(
      'name' => t('Murder Party'),
      'base' => 'node_content',
      'description' => t('Create a murder party event and choose its scenario and guests'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
