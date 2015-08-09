<?php
/**
 * @file
 * is_part_of.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function is_part_of_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "relation" && $api == "relation_type_default") {
    return array("version" => "1");
  }
}
