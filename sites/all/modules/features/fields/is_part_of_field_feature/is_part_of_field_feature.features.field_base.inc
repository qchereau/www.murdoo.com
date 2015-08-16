<?php
/**
 * @file
 * is_part_of_field_feature.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function is_part_of_field_feature_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_is_part_of'
  $field_bases['field_is_part_of'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_is_part_of',
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'type' => 'none',
        ),
        'target_bundles' => array(
          'murder_scenario' => 'murder_scenario',
        ),
      ),
      'target_type' => 'node',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  return $field_bases;
}
