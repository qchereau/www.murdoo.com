<?php
/**
 * @file
 * participate_in.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function participate_in_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "relation" && $api == "relation_type_default") {
    return array("version" => "1");
  }
}
