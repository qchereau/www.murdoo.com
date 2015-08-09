<?php
/**
 * @file
 * has_access.relation_type_default.inc
 */

/**
 * Implements hook_relation_default_relation_types().
 */
function has_access_relation_default_relation_types() {
  $export = array();

  $relation_type = new stdClass();
  $relation_type->disabled = FALSE; /* Edit this to true to make a default relation_type disabled initially */
  $relation_type->api_version = 1;
  $relation_type->relation_type = 'has_access';
  $relation_type->label = 'has access';
  $relation_type->reverse_label = 'can be accessed by';
  $relation_type->directional = 1;
  $relation_type->transitive = 1;
  $relation_type->r_unique = 1;
  $relation_type->min_arity = 2;
  $relation_type->max_arity = 2;
  $relation_type->source_bundles = array(
    0 => 'node:character',
    1 => 'user:user',
  );
  $relation_type->target_bundles = array(
    0 => 'node:action',
    1 => 'node:character',
    2 => 'node:clue',
    3 => 'node:manual',
    4 => 'node:murder_party',
    5 => 'node:murder_scenario',
    6 => 'node:object',
    7 => 'node:room',
  );
  $export['has_access'] = $relation_type;

  return $export;
}
