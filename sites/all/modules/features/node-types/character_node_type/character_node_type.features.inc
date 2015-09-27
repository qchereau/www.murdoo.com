<?php
/**
 * @file
 * character_node_type.features.inc
 */

/**
 * Implements hook_node_info().
 */
function character_node_type_node_info() {
  $items = array(
    'character' => array(
      'name' => t('Character'),
      'base' => 'node_content',
      'description' => t('A character defining a role in the murder scenario. This is the very basis of every single role-play game.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
