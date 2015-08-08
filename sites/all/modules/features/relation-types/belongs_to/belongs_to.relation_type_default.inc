<?php
/**
 * @file
 * belongs_to.relation_type_default.inc
 */

/**
 * Implements hook_relation_default_relation_types().
 */
function belongs_to_relation_default_relation_types() {
  $export = array();

  $relation_type = new stdClass();
  $relation_type->disabled = FALSE; /* Edit this to true to make a default relation_type disabled initially */
  $relation_type->api_version = 1;
  $relation_type->relation_type = 'belongs_to';
  $relation_type->label = 'belongs to';
  $relation_type->reverse_label = 'has within';
  $relation_type->directional = 1;
  $relation_type->transitive = 0;
  $relation_type->r_unique = 1;
  $relation_type->min_arity = 2;
  $relation_type->max_arity = 2;
  $relation_type->source_bundles = array(
    0 => 'node:action',
    1 => 'node:clue',
    2 => 'node:object',
  );
  $relation_type->target_bundles = array(
    0 => 'node:character',
    1 => 'node:room',
  );
  $export['belongs_to'] = $relation_type;

  return $export;
}
