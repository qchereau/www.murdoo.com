<?php
/**
 * @file
 * murder_scenario_node_type.features.inc
 */

/**
 * Implements hook_node_info().
 */
function murder_scenario_node_type_node_info() {
  $items = array(
    'murder_scenario' => array(
      'name' => t('Murder Scenario'),
      'base' => 'node_content',
      'description' => t('A murder scenario to be played in murder parties'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
