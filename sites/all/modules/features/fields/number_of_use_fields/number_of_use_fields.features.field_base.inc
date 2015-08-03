<?php
/**
 * @file
 * number_of_use_fields.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function number_of_use_fields_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_initial_number_of_use'
  $field_bases['field_initial_number_of_use'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_initial_number_of_use',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  // Exported field_base: 'field_remaining_number_of_use'
  $field_bases['field_remaining_number_of_use'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_remaining_number_of_use',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  return $field_bases;
}
