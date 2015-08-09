<?php
/**
 * @file
 * clue_node_type.features.inc
 */

/**
 * Implements hook_node_info().
 */
function clue_node_type_node_info() {
  $items = array(
    'clue' => array(
      'name' => t('Clue'),
      'base' => 'node_content',
      'description' => t('A clue belonging to a murder scenario. It is supposed to help players to solve the case.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
