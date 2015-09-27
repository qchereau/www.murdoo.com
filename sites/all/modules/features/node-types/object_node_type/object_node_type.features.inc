<?php
/**
 * @file
 * object_node_type.features.inc
 */

/**
 * Implements hook_node_info().
 */
function object_node_type_node_info() {
  $items = array(
    'object' => array(
      'name' => t('Object'),
      'base' => 'node_content',
      'description' => t('An object usable in a murder scenario'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
