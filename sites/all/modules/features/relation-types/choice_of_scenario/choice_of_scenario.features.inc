<?php
/**
 * @file
 * choice_of_scenario.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function choice_of_scenario_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "relation" && $api == "relation_type_default") {
    return array("version" => "1");
  }
}
