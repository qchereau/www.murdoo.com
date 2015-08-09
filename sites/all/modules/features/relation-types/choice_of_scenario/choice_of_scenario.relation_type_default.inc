<?php
/**
 * @file
 * choice_of_scenario.relation_type_default.inc
 */

/**
 * Implements hook_relation_default_relation_types().
 */
function choice_of_scenario_relation_default_relation_types() {
  $export = array();

  $relation_type = new stdClass();
  $relation_type->disabled = FALSE; /* Edit this to true to make a default relation_type disabled initially */
  $relation_type->api_version = 1;
  $relation_type->relation_type = 'choice_of_scenario';
  $relation_type->label = 'choice of scenario';
  $relation_type->reverse_label = 'is chosen for';
  $relation_type->directional = 1;
  $relation_type->transitive = 0;
  $relation_type->r_unique = 1;
  $relation_type->min_arity = 2;
  $relation_type->max_arity = 2;
  $relation_type->source_bundles = array(
    0 => 'node:murder_party',
  );
  $relation_type->target_bundles = array(
    0 => 'node:murder_scenario',
  );
  $export['choice_of_scenario'] = $relation_type;

  return $export;
}
