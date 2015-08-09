<?php
/**
 * @file
 * is_part_of.relation_type_default.inc
 */

/**
 * Implements hook_relation_default_relation_types().
 */
function is_part_of_relation_default_relation_types() {
  $export = array();

  $relation_type = new stdClass();
  $relation_type->disabled = FALSE; /* Edit this to true to make a default relation_type disabled initially */
  $relation_type->api_version = 1;
  $relation_type->relation_type = 'is_part_of';
  $relation_type->label = 'is part of';
  $relation_type->reverse_label = 'is partly composed by';
  $relation_type->directional = 1;
  $relation_type->transitive = 0;
  $relation_type->r_unique = 1;
  $relation_type->min_arity = 2;
  $relation_type->max_arity = 2;
  $relation_type->source_bundles = array(
    0 => 'node:action',
    1 => 'node:character',
    2 => 'node:clue',
    3 => 'node:manual',
    4 => 'node:object',
    5 => 'node:room',
  );
  $relation_type->target_bundles = array(
    0 => 'node:murder_scenario',
  );
  $export['is_part_of'] = $relation_type;

  return $export;
}
