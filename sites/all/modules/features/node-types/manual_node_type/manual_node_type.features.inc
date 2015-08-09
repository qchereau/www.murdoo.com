<?php
/**
 * @file
 * manual_node_type.features.inc
 */

/**
 * Implements hook_node_info().
 */
function manual_node_type_node_info() {
  $items = array(
    'manual' => array(
      'name' => t('Manual'),
      'base' => 'node_content',
      'description' => t('This is used to create manuals for a murder scenario. It takes both Organizer or Player manuals'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
