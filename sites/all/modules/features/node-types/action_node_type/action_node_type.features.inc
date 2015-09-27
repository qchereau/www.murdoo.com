<?php
/**
 * @file
 * action_node_type.features.inc
 */

/**
 * Implements hook_node_info().
 */
function action_node_type_node_info() {
  $items = array(
    'action' => array(
      'name' => t('Action'),
      'base' => 'node_content',
      'description' => t('An action which can be taken in a murder scenario'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
