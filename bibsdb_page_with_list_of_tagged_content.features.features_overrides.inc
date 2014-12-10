<?php
/**
 * @file
 * bibsdb_page_with_list_of_tagged_content.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function bibsdb_page_with_list_of_tagged_content_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: page_manager_handlers
  $overrides["page_manager_handlers.node_view_panel_context_3.weight"] = -26;
  $overrides["page_manager_handlers.node_view_panel_context_4.weight"] = 29;
  $overrides["page_manager_handlers.node_view_panel_context_5.weight"] = -8;

 return $overrides;
}
