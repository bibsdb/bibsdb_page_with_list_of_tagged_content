<?php
/**
 * @file
 * bibsdb_page_with_list_of_tagged_content.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function bibsdb_page_with_list_of_tagged_content_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_10';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -12;
  $handler->conf = array(
    'title' => 'Bibsdb Page - Netbiblioteket',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      0 => array(
        'identifier' => 'Library',
        'keyword' => 'library_group',
        'name' => 'og_group_from_node',
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
      1 => array(
        'identifier' => 'Library node',
        'keyword' => 'library_node',
        'name' => 'og_node_from_group',
        'context' => 'relationship_og_group_from_node_1',
        'id' => 1,
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'ding_page' => 'ding_page',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'node/46',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'bibsdb-page-netbiblioteket',
  );
  $display = new panels_display();
  $display->layout = '25_50_25';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'left_sidebar' => NULL,
      'main_content' => NULL,
      'right_sidebar' => NULL,
      'attachment_4_1' => NULL,
      'attachment_4_2' => NULL,
      'attachment_4_3' => NULL,
      'attachment_4_4' => NULL,
      'attachment_3_1' => NULL,
      'attachment_3_2' => NULL,
      'attachment_3_3' => NULL,
      'attachment_2_1' => NULL,
      'attachment_2_2' => NULL,
      'attachment_1_1' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '0dcea667-2e2c-4e41-9f30-b42ceea690bc';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c0f498bf-2259-4ec6-8faa-620aff29fdb0';
    $pane->panel = 'left_sidebar';
    $pane->type = 'block';
    $pane->subtype = 'menu_block-3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c0f498bf-2259-4ec6-8faa-620aff29fdb0';
    $display->content['new-c0f498bf-2259-4ec6-8faa-620aff29fdb0'] = $pane;
    $display->panels['left_sidebar'][0] = 'new-c0f498bf-2259-4ec6-8faa-620aff29fdb0';
    $pane = new stdClass();
    $pane->pid = 'new-36ab5388-a1d9-4c79-8f68-51c42c0abbaa';
    $pane->panel = 'left_sidebar';
    $pane->type = 'block';
    $pane->subtype = 'og_menu-og_single_menu_block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '36ab5388-a1d9-4c79-8f68-51c42c0abbaa';
    $display->content['new-36ab5388-a1d9-4c79-8f68-51c42c0abbaa'] = $pane;
    $display->panels['left_sidebar'][1] = 'new-36ab5388-a1d9-4c79-8f68-51c42c0abbaa';
    $pane = new stdClass();
    $pane->pid = 'new-0afc4cd6-efcb-4251-9107-6222c7b68c36';
    $pane->panel = 'main_content';
    $pane->type = 'node_content';
    $pane->subtype = 'node_content';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'links' => 1,
      'no_extras' => 0,
      'override_title' => 0,
      'override_title_text' => '',
      'identifier' => '',
      'link' => 0,
      'leave_node_title' => 1,
      'build_mode' => 'token',
      'context' => 'argument_entity_id:node_1',
    );
    $pane->cache = array(
      'method' => '0',
      'settings' => array(),
    );
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = '';
    $pane->uuid = '0afc4cd6-efcb-4251-9107-6222c7b68c36';
    $display->content['new-0afc4cd6-efcb-4251-9107-6222c7b68c36'] = $pane;
    $display->panels['main_content'][0] = 'new-0afc4cd6-efcb-4251-9107-6222c7b68c36';
    $pane = new stdClass();
    $pane->pid = 'new-f5e83964-56c8-41f6-84ff-3a52daf50756';
    $pane->panel = 'main_content';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 1,
      'markup' => 'h1',
      'id' => '',
      'class' => '',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'f5e83964-56c8-41f6-84ff-3a52daf50756';
    $display->content['new-f5e83964-56c8-41f6-84ff-3a52daf50756'] = $pane;
    $display->panels['main_content'][1] = 'new-f5e83964-56c8-41f6-84ff-3a52daf50756';
    $pane = new stdClass();
    $pane->pid = 'new-3e0dc215-4da4-494b-bcc0-b53be5e1e0da';
    $pane->panel = 'main_content';
    $pane->type = 'views_panes';
    $pane->subtype = 'bibsdb_tags_list-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(),
    );
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '3e0dc215-4da4-494b-bcc0-b53be5e1e0da';
    $display->content['new-3e0dc215-4da4-494b-bcc0-b53be5e1e0da'] = $pane;
    $display->panels['main_content'][2] = 'new-3e0dc215-4da4-494b-bcc0-b53be5e1e0da';
    $pane = new stdClass();
    $pane->pid = 'new-1880d4ac-10bd-445b-9f1e-3b8894191472';
    $pane->panel = 'right_sidebar';
    $pane->type = 'campaign';
    $pane->subtype = 'campaign';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'ding_campaign_count' => 3,
      'ding_campaign_offset' => 0,
      'context' => array(
        0 => 'argument_entity_id:node_1',
        1 => 'relationship_og_node_from_group_1',
        2 => 'empty',
        3 => 'relationship_terms_from_node_1',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array(
      'method' => 'simple',
      'settings' => array(
        'lifetime' => '600',
        'granularity' => 'context',
      ),
    );
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = '';
    $pane->uuid = '1880d4ac-10bd-445b-9f1e-3b8894191472';
    $display->content['new-1880d4ac-10bd-445b-9f1e-3b8894191472'] = $pane;
    $display->panels['right_sidebar'][0] = 'new-1880d4ac-10bd-445b-9f1e-3b8894191472';
    $pane = new stdClass();
    $pane->pid = 'new-d4be559e-2492-4bba-be07-55bda1a5601c';
    $pane->panel = 'right_sidebar';
    $pane->type = 'block';
    $pane->subtype = 'similarterms-ding_content_tags';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = '';
    $pane->uuid = 'd4be559e-2492-4bba-be07-55bda1a5601c';
    $display->content['new-d4be559e-2492-4bba-be07-55bda1a5601c'] = $pane;
    $display->panels['right_sidebar'][1] = 'new-d4be559e-2492-4bba-be07-55bda1a5601c';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_10'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_11';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -23;
  $handler->conf = array(
    'title' => 'Bibsdb Page - Litteratur',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => 'bibsdb-taglist-page',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      0 => array(
        'identifier' => 'Library',
        'keyword' => 'library_group',
        'name' => 'og_group_from_node',
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
      1 => array(
        'identifier' => 'Library node',
        'keyword' => 'library_node',
        'name' => 'og_node_from_group',
        'context' => 'relationship_og_group_from_node_1',
        'id' => 1,
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'ding_page' => 'ding_page',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'node/105',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'bibsdb-page-litteratur',
  );
  $display = new panels_display();
  $display->layout = '25_50_25';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'left_sidebar' => NULL,
      'main_content' => NULL,
      'right_sidebar' => NULL,
      'attachment_4_1' => NULL,
      'attachment_4_2' => NULL,
      'attachment_4_3' => NULL,
      'attachment_4_4' => NULL,
      'attachment_3_1' => NULL,
      'attachment_3_2' => NULL,
      'attachment_3_3' => NULL,
      'attachment_2_1' => NULL,
      'attachment_2_2' => NULL,
      'attachment_1_1' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '86976699-4648-42da-ad0f-33a821224d3c';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-426628dc-6c4b-4e80-9d5f-95441818ca7b';
    $pane->panel = 'left_sidebar';
    $pane->type = 'block';
    $pane->subtype = 'menu_block-3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '426628dc-6c4b-4e80-9d5f-95441818ca7b';
    $display->content['new-426628dc-6c4b-4e80-9d5f-95441818ca7b'] = $pane;
    $display->panels['left_sidebar'][0] = 'new-426628dc-6c4b-4e80-9d5f-95441818ca7b';
    $pane = new stdClass();
    $pane->pid = 'new-1c49b58d-c252-459b-9802-b39e257a5a85';
    $pane->panel = 'left_sidebar';
    $pane->type = 'block';
    $pane->subtype = 'og_menu-og_single_menu_block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '1c49b58d-c252-459b-9802-b39e257a5a85';
    $display->content['new-1c49b58d-c252-459b-9802-b39e257a5a85'] = $pane;
    $display->panels['left_sidebar'][1] = 'new-1c49b58d-c252-459b-9802-b39e257a5a85';
    $pane = new stdClass();
    $pane->pid = 'new-295441d7-8d8e-48b9-b43b-32c427b5a47b';
    $pane->panel = 'main_content';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 1,
      'markup' => 'h1',
      'id' => '',
      'class' => '',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '295441d7-8d8e-48b9-b43b-32c427b5a47b';
    $display->content['new-295441d7-8d8e-48b9-b43b-32c427b5a47b'] = $pane;
    $display->panels['main_content'][0] = 'new-295441d7-8d8e-48b9-b43b-32c427b5a47b';
    $pane = new stdClass();
    $pane->pid = 'new-75fc00f0-537f-4241-b155-c58aa5f96643';
    $pane->panel = 'main_content';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_ding_page_lead';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '75fc00f0-537f-4241-b155-c58aa5f96643';
    $display->content['new-75fc00f0-537f-4241-b155-c58aa5f96643'] = $pane;
    $display->panels['main_content'][1] = 'new-75fc00f0-537f-4241-b155-c58aa5f96643';
    $pane = new stdClass();
    $pane->pid = 'new-c515d3d7-f354-4361-ba24-d755bae1cc18';
    $pane->panel = 'main_content';
    $pane->type = 'views_panes';
    $pane->subtype = 'bibsdb_tags_list-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'tid' => '97,130',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'c515d3d7-f354-4361-ba24-d755bae1cc18';
    $display->content['new-c515d3d7-f354-4361-ba24-d755bae1cc18'] = $pane;
    $display->panels['main_content'][2] = 'new-c515d3d7-f354-4361-ba24-d755bae1cc18';
    $pane = new stdClass();
    $pane->pid = 'new-0ea39a83-a757-4e82-972a-ae6dea4537f5';
    $pane->panel = 'main_content';
    $pane->type = 'views_panes';
    $pane->subtype = 'bibsdb_tags_list-panel_pane_4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'tid' => '97,124',
      ),
      'override_title' => 1,
      'override_title_text' => 'Nyeste titler',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '0ea39a83-a757-4e82-972a-ae6dea4537f5';
    $display->content['new-0ea39a83-a757-4e82-972a-ae6dea4537f5'] = $pane;
    $display->panels['main_content'][3] = 'new-0ea39a83-a757-4e82-972a-ae6dea4537f5';
    $pane = new stdClass();
    $pane->pid = 'new-1815d738-6634-42eb-aa79-a53f788c496b';
    $pane->panel = 'main_content';
    $pane->type = 'views_panes';
    $pane->subtype = 'bibsdb_tags_list-panel_pane_7';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'tid' => '61,97',
      ),
      'override_title' => 1,
      'override_title_text' => 'Inspirationsfoldere',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '1815d738-6634-42eb-aa79-a53f788c496b';
    $display->content['new-1815d738-6634-42eb-aa79-a53f788c496b'] = $pane;
    $display->panels['main_content'][4] = 'new-1815d738-6634-42eb-aa79-a53f788c496b';
    $pane = new stdClass();
    $pane->pid = 'new-44bd89e7-a372-42ba-9810-f10b39c42cb2';
    $pane->panel = 'right_sidebar';
    $pane->type = 'campaign';
    $pane->subtype = 'campaign';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'ding_campaign_count' => 3,
      'ding_campaign_offset' => 0,
      'context' => array(
        0 => 'argument_entity_id:node_1',
        1 => 'relationship_og_node_from_group_1',
        2 => 'empty',
        3 => 'relationship_terms_from_node_1',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array(
      'method' => 'simple',
      'settings' => array(
        'lifetime' => '600',
        'granularity' => 'context',
      ),
    );
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = '';
    $pane->uuid = '44bd89e7-a372-42ba-9810-f10b39c42cb2';
    $display->content['new-44bd89e7-a372-42ba-9810-f10b39c42cb2'] = $pane;
    $display->panels['right_sidebar'][0] = 'new-44bd89e7-a372-42ba-9810-f10b39c42cb2';
    $pane = new stdClass();
    $pane->pid = 'new-3117ff8b-53f4-4953-b50c-c92d8ec8c622';
    $pane->panel = 'right_sidebar';
    $pane->type = 'block';
    $pane->subtype = 'similarterms-ding_content_tags';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = '';
    $pane->uuid = '3117ff8b-53f4-4953-b50c-c92d8ec8c622';
    $display->content['new-3117ff8b-53f4-4953-b50c-c92d8ec8c622'] = $pane;
    $display->panels['right_sidebar'][1] = 'new-3117ff8b-53f4-4953-b50c-c92d8ec8c622';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_11'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_12';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -22;
  $handler->conf = array(
    'title' => 'Bibsdb Page - Musik',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => 'bibsdb-taglist-page',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      0 => array(
        'identifier' => 'Library',
        'keyword' => 'library_group',
        'name' => 'og_group_from_node',
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
      1 => array(
        'identifier' => 'Library node',
        'keyword' => 'library_node',
        'name' => 'og_node_from_group',
        'context' => 'relationship_og_group_from_node_1',
        'id' => 1,
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'ding_page' => 'ding_page',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'node/95',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'bibsdb-page-musik',
  );
  $display = new panels_display();
  $display->layout = '25_50_25';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'left_sidebar' => NULL,
      'main_content' => NULL,
      'right_sidebar' => NULL,
      'attachment_4_1' => NULL,
      'attachment_4_2' => NULL,
      'attachment_4_3' => NULL,
      'attachment_4_4' => NULL,
      'attachment_3_1' => NULL,
      'attachment_3_2' => NULL,
      'attachment_3_3' => NULL,
      'attachment_2_1' => NULL,
      'attachment_2_2' => NULL,
      'attachment_1_1' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '4e53c69a-d3fa-4317-b73c-f0720db86ca9';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-aabff47b-9223-4ec1-9e0e-8a30c9ac4bae';
    $pane->panel = 'left_sidebar';
    $pane->type = 'block';
    $pane->subtype = 'menu_block-3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'aabff47b-9223-4ec1-9e0e-8a30c9ac4bae';
    $display->content['new-aabff47b-9223-4ec1-9e0e-8a30c9ac4bae'] = $pane;
    $display->panels['left_sidebar'][0] = 'new-aabff47b-9223-4ec1-9e0e-8a30c9ac4bae';
    $pane = new stdClass();
    $pane->pid = 'new-714399aa-72c4-4926-a457-2f581187db2b';
    $pane->panel = 'left_sidebar';
    $pane->type = 'block';
    $pane->subtype = 'og_menu-og_single_menu_block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '714399aa-72c4-4926-a457-2f581187db2b';
    $display->content['new-714399aa-72c4-4926-a457-2f581187db2b'] = $pane;
    $display->panels['left_sidebar'][1] = 'new-714399aa-72c4-4926-a457-2f581187db2b';
    $pane = new stdClass();
    $pane->pid = 'new-ca7edc49-078c-4325-984a-e9bfc84b7d8e';
    $pane->panel = 'main_content';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 1,
      'markup' => 'h1',
      'id' => '',
      'class' => '',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ca7edc49-078c-4325-984a-e9bfc84b7d8e';
    $display->content['new-ca7edc49-078c-4325-984a-e9bfc84b7d8e'] = $pane;
    $display->panels['main_content'][0] = 'new-ca7edc49-078c-4325-984a-e9bfc84b7d8e';
    $pane = new stdClass();
    $pane->pid = 'new-e95997fb-d89e-47c6-9c5b-bed79f9c4b18';
    $pane->panel = 'main_content';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_ding_page_lead';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'e95997fb-d89e-47c6-9c5b-bed79f9c4b18';
    $display->content['new-e95997fb-d89e-47c6-9c5b-bed79f9c4b18'] = $pane;
    $display->panels['main_content'][1] = 'new-e95997fb-d89e-47c6-9c5b-bed79f9c4b18';
    $pane = new stdClass();
    $pane->pid = 'new-56bfd6b0-8c7e-4819-ae9a-f79d5a0bbe4f';
    $pane->panel = 'main_content';
    $pane->type = 'views_panes';
    $pane->subtype = 'bibsdb_tags_list-panel_pane_8';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'tid' => '128,130',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '56bfd6b0-8c7e-4819-ae9a-f79d5a0bbe4f';
    $display->content['new-56bfd6b0-8c7e-4819-ae9a-f79d5a0bbe4f'] = $pane;
    $display->panels['main_content'][2] = 'new-56bfd6b0-8c7e-4819-ae9a-f79d5a0bbe4f';
    $pane = new stdClass();
    $pane->pid = 'new-09383f60-4582-463e-aad6-575b4cbceb06';
    $pane->panel = 'main_content';
    $pane->type = 'views_panes';
    $pane->subtype = 'bibsdb_tags_list-panel_pane_4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'tid' => '128,124',
      ),
      'override_title' => 1,
      'override_title_text' => 'Nyeste titler',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '09383f60-4582-463e-aad6-575b4cbceb06';
    $display->content['new-09383f60-4582-463e-aad6-575b4cbceb06'] = $pane;
    $display->panels['main_content'][3] = 'new-09383f60-4582-463e-aad6-575b4cbceb06';
    $pane = new stdClass();
    $pane->pid = 'new-4524b97a-d94e-4f73-a381-9e74e457fe35';
    $pane->panel = 'right_sidebar';
    $pane->type = 'campaign';
    $pane->subtype = 'campaign';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'ding_campaign_count' => 3,
      'ding_campaign_offset' => 0,
      'context' => array(
        0 => 'argument_entity_id:node_1',
        1 => 'relationship_og_node_from_group_1',
        2 => 'empty',
        3 => 'relationship_terms_from_node_1',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array(
      'method' => 'simple',
      'settings' => array(
        'lifetime' => '600',
        'granularity' => 'context',
      ),
    );
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = '';
    $pane->uuid = '4524b97a-d94e-4f73-a381-9e74e457fe35';
    $display->content['new-4524b97a-d94e-4f73-a381-9e74e457fe35'] = $pane;
    $display->panels['right_sidebar'][0] = 'new-4524b97a-d94e-4f73-a381-9e74e457fe35';
    $pane = new stdClass();
    $pane->pid = 'new-4fbf595b-eee6-4377-8a61-e95b886ac424';
    $pane->panel = 'right_sidebar';
    $pane->type = 'block';
    $pane->subtype = 'similarterms-ding_content_tags';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = '';
    $pane->uuid = '4fbf595b-eee6-4377-8a61-e95b886ac424';
    $display->content['new-4fbf595b-eee6-4377-8a61-e95b886ac424'] = $pane;
    $display->panels['right_sidebar'][1] = 'new-4fbf595b-eee6-4377-8a61-e95b886ac424';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_12'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_13';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -21;
  $handler->conf = array(
    'title' => 'Bibsdb Page - Film',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => 'bibsdb-taglist-page',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      0 => array(
        'identifier' => 'Library',
        'keyword' => 'library_group',
        'name' => 'og_group_from_node',
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
      1 => array(
        'identifier' => 'Library node',
        'keyword' => 'library_node',
        'name' => 'og_node_from_group',
        'context' => 'relationship_og_group_from_node_1',
        'id' => 1,
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'ding_page' => 'ding_page',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'node/37',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'bibsdb-page-film',
  );
  $display = new panels_display();
  $display->layout = '25_50_25';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'left_sidebar' => NULL,
      'main_content' => NULL,
      'right_sidebar' => NULL,
      'attachment_4_1' => NULL,
      'attachment_4_2' => NULL,
      'attachment_4_3' => NULL,
      'attachment_4_4' => NULL,
      'attachment_3_1' => NULL,
      'attachment_3_2' => NULL,
      'attachment_3_3' => NULL,
      'attachment_2_1' => NULL,
      'attachment_2_2' => NULL,
      'attachment_1_1' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'b57f1e55-c227-414b-b5a5-8f71886cc71f';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-15f7b8cb-4dc1-4633-910a-f8d7c91e1834';
    $pane->panel = 'left_sidebar';
    $pane->type = 'block';
    $pane->subtype = 'menu_block-3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '15f7b8cb-4dc1-4633-910a-f8d7c91e1834';
    $display->content['new-15f7b8cb-4dc1-4633-910a-f8d7c91e1834'] = $pane;
    $display->panels['left_sidebar'][0] = 'new-15f7b8cb-4dc1-4633-910a-f8d7c91e1834';
    $pane = new stdClass();
    $pane->pid = 'new-44023165-a8ab-44e4-b0df-ab614eb8f37b';
    $pane->panel = 'left_sidebar';
    $pane->type = 'block';
    $pane->subtype = 'og_menu-og_single_menu_block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '44023165-a8ab-44e4-b0df-ab614eb8f37b';
    $display->content['new-44023165-a8ab-44e4-b0df-ab614eb8f37b'] = $pane;
    $display->panels['left_sidebar'][1] = 'new-44023165-a8ab-44e4-b0df-ab614eb8f37b';
    $pane = new stdClass();
    $pane->pid = 'new-ec8b3031-fd73-404b-9143-ff9ff492568c';
    $pane->panel = 'main_content';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 1,
      'markup' => 'h1',
      'id' => '',
      'class' => '',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ec8b3031-fd73-404b-9143-ff9ff492568c';
    $display->content['new-ec8b3031-fd73-404b-9143-ff9ff492568c'] = $pane;
    $display->panels['main_content'][0] = 'new-ec8b3031-fd73-404b-9143-ff9ff492568c';
    $pane = new stdClass();
    $pane->pid = 'new-d31e794d-69e9-4a02-a93b-585d144e4a97';
    $pane->panel = 'main_content';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_ding_page_lead';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'd31e794d-69e9-4a02-a93b-585d144e4a97';
    $display->content['new-d31e794d-69e9-4a02-a93b-585d144e4a97'] = $pane;
    $display->panels['main_content'][1] = 'new-d31e794d-69e9-4a02-a93b-585d144e4a97';
    $pane = new stdClass();
    $pane->pid = 'new-dda48fd0-5e83-4454-9702-43dc07174b85';
    $pane->panel = 'main_content';
    $pane->type = 'views_panes';
    $pane->subtype = 'bibsdb_tags_list-panel_pane_8';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'tid' => '98,130',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'dda48fd0-5e83-4454-9702-43dc07174b85';
    $display->content['new-dda48fd0-5e83-4454-9702-43dc07174b85'] = $pane;
    $display->panels['main_content'][2] = 'new-dda48fd0-5e83-4454-9702-43dc07174b85';
    $pane = new stdClass();
    $pane->pid = 'new-123f8db4-35ef-4c86-a633-af8bc51f3d0d';
    $pane->panel = 'main_content';
    $pane->type = 'views_panes';
    $pane->subtype = 'bibsdb_tags_list-panel_pane_4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'tid' => '98,124',
      ),
      'override_title' => 1,
      'override_title_text' => 'Nyeste titler',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '123f8db4-35ef-4c86-a633-af8bc51f3d0d';
    $display->content['new-123f8db4-35ef-4c86-a633-af8bc51f3d0d'] = $pane;
    $display->panels['main_content'][3] = 'new-123f8db4-35ef-4c86-a633-af8bc51f3d0d';
    $pane = new stdClass();
    $pane->pid = 'new-238508aa-e3a9-4464-a3c3-24c9478a9bcb';
    $pane->panel = 'right_sidebar';
    $pane->type = 'campaign';
    $pane->subtype = 'campaign';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'ding_campaign_count' => 3,
      'ding_campaign_offset' => 0,
      'context' => array(
        0 => 'argument_entity_id:node_1',
        1 => 'relationship_og_node_from_group_1',
        2 => 'empty',
        3 => 'relationship_terms_from_node_1',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array(
      'method' => 'simple',
      'settings' => array(
        'lifetime' => '600',
        'granularity' => 'context',
      ),
    );
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = '';
    $pane->uuid = '238508aa-e3a9-4464-a3c3-24c9478a9bcb';
    $display->content['new-238508aa-e3a9-4464-a3c3-24c9478a9bcb'] = $pane;
    $display->panels['right_sidebar'][0] = 'new-238508aa-e3a9-4464-a3c3-24c9478a9bcb';
    $pane = new stdClass();
    $pane->pid = 'new-5e078369-af39-42ec-8995-a2edf29a4065';
    $pane->panel = 'right_sidebar';
    $pane->type = 'block';
    $pane->subtype = 'similarterms-ding_content_tags';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = '';
    $pane->uuid = '5e078369-af39-42ec-8995-a2edf29a4065';
    $display->content['new-5e078369-af39-42ec-8995-a2edf29a4065'] = $pane;
    $display->panels['right_sidebar'][1] = 'new-5e078369-af39-42ec-8995-a2edf29a4065';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_13'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_14';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -20;
  $handler->conf = array(
    'title' => 'Bibsdb Page - Spil',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => 'bibsdb-taglist-page',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      0 => array(
        'identifier' => 'Library',
        'keyword' => 'library_group',
        'name' => 'og_group_from_node',
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
      1 => array(
        'identifier' => 'Library node',
        'keyword' => 'library_node',
        'name' => 'og_node_from_group',
        'context' => 'relationship_og_group_from_node_1',
        'id' => 1,
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'ding_page' => 'ding_page',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'node/97',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'bibsdb-page-spil',
  );
  $display = new panels_display();
  $display->layout = '25_50_25';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'left_sidebar' => NULL,
      'main_content' => NULL,
      'right_sidebar' => NULL,
      'attachment_4_1' => NULL,
      'attachment_4_2' => NULL,
      'attachment_4_3' => NULL,
      'attachment_4_4' => NULL,
      'attachment_3_1' => NULL,
      'attachment_3_2' => NULL,
      'attachment_3_3' => NULL,
      'attachment_2_1' => NULL,
      'attachment_2_2' => NULL,
      'attachment_1_1' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'dd263fde-2124-4f9b-9352-f8cd35fe1190';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-80d7af68-b5e8-499e-b5f6-7d2dbf1c09d9';
    $pane->panel = 'left_sidebar';
    $pane->type = 'block';
    $pane->subtype = 'menu_block-3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '80d7af68-b5e8-499e-b5f6-7d2dbf1c09d9';
    $display->content['new-80d7af68-b5e8-499e-b5f6-7d2dbf1c09d9'] = $pane;
    $display->panels['left_sidebar'][0] = 'new-80d7af68-b5e8-499e-b5f6-7d2dbf1c09d9';
    $pane = new stdClass();
    $pane->pid = 'new-b8cd1c45-76d5-47f9-81bf-141fb4745976';
    $pane->panel = 'left_sidebar';
    $pane->type = 'block';
    $pane->subtype = 'og_menu-og_single_menu_block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'b8cd1c45-76d5-47f9-81bf-141fb4745976';
    $display->content['new-b8cd1c45-76d5-47f9-81bf-141fb4745976'] = $pane;
    $display->panels['left_sidebar'][1] = 'new-b8cd1c45-76d5-47f9-81bf-141fb4745976';
    $pane = new stdClass();
    $pane->pid = 'new-57280457-6f9c-48cd-b5a7-f5f1cdcc323e';
    $pane->panel = 'main_content';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 1,
      'markup' => 'h1',
      'id' => '',
      'class' => '',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '57280457-6f9c-48cd-b5a7-f5f1cdcc323e';
    $display->content['new-57280457-6f9c-48cd-b5a7-f5f1cdcc323e'] = $pane;
    $display->panels['main_content'][0] = 'new-57280457-6f9c-48cd-b5a7-f5f1cdcc323e';
    $pane = new stdClass();
    $pane->pid = 'new-4cd0922e-9bef-4475-8037-c7c0eb297608';
    $pane->panel = 'main_content';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_ding_page_lead';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '4cd0922e-9bef-4475-8037-c7c0eb297608';
    $display->content['new-4cd0922e-9bef-4475-8037-c7c0eb297608'] = $pane;
    $display->panels['main_content'][1] = 'new-4cd0922e-9bef-4475-8037-c7c0eb297608';
    $pane = new stdClass();
    $pane->pid = 'new-f6603d57-74e6-4339-b70d-89b6347be128';
    $pane->panel = 'main_content';
    $pane->type = 'views_panes';
    $pane->subtype = 'bibsdb_tags_list-panel_pane_6';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'tid' => '129,130',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'f6603d57-74e6-4339-b70d-89b6347be128';
    $display->content['new-f6603d57-74e6-4339-b70d-89b6347be128'] = $pane;
    $display->panels['main_content'][2] = 'new-f6603d57-74e6-4339-b70d-89b6347be128';
    $pane = new stdClass();
    $pane->pid = 'new-ba382b6d-ad97-4112-9b72-c351e0e841d4';
    $pane->panel = 'main_content';
    $pane->type = 'views_panes';
    $pane->subtype = 'bibsdb_tags_list-panel_pane_4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'tid' => '129,124',
      ),
      'override_title' => 1,
      'override_title_text' => 'Nyeste titler',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'ba382b6d-ad97-4112-9b72-c351e0e841d4';
    $display->content['new-ba382b6d-ad97-4112-9b72-c351e0e841d4'] = $pane;
    $display->panels['main_content'][3] = 'new-ba382b6d-ad97-4112-9b72-c351e0e841d4';
    $pane = new stdClass();
    $pane->pid = 'new-d494bb55-5105-43cf-91ff-887f87fc9bac';
    $pane->panel = 'right_sidebar';
    $pane->type = 'campaign';
    $pane->subtype = 'campaign';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'ding_campaign_count' => 3,
      'ding_campaign_offset' => 0,
      'context' => array(
        0 => 'argument_entity_id:node_1',
        1 => 'relationship_og_node_from_group_1',
        2 => 'empty',
        3 => 'relationship_terms_from_node_1',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array(
      'method' => 'simple',
      'settings' => array(
        'lifetime' => '600',
        'granularity' => 'context',
      ),
    );
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = '';
    $pane->uuid = 'd494bb55-5105-43cf-91ff-887f87fc9bac';
    $display->content['new-d494bb55-5105-43cf-91ff-887f87fc9bac'] = $pane;
    $display->panels['right_sidebar'][0] = 'new-d494bb55-5105-43cf-91ff-887f87fc9bac';
    $pane = new stdClass();
    $pane->pid = 'new-bc06abae-4cd3-4f35-8745-0016b1f16383';
    $pane->panel = 'right_sidebar';
    $pane->type = 'block';
    $pane->subtype = 'similarterms-ding_content_tags';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = '';
    $pane->uuid = 'bc06abae-4cd3-4f35-8745-0016b1f16383';
    $display->content['new-bc06abae-4cd3-4f35-8745-0016b1f16383'] = $pane;
    $display->panels['right_sidebar'][1] = 'new-bc06abae-4cd3-4f35-8745-0016b1f16383';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_14'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_15';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -19;
  $handler->conf = array(
    'title' => 'Bibsdb Page - Studerende',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => 'bibsdb-taglist-page',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      0 => array(
        'identifier' => 'Library',
        'keyword' => 'library_group',
        'name' => 'og_group_from_node',
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
      1 => array(
        'identifier' => 'Library node',
        'keyword' => 'library_node',
        'name' => 'og_node_from_group',
        'context' => 'relationship_og_group_from_node_1',
        'id' => 1,
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'ding_page' => 'ding_page',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'node/134',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'bibsdb-page-studerende',
  );
  $display = new panels_display();
  $display->layout = '25_50_25';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'left_sidebar' => NULL,
      'main_content' => NULL,
      'right_sidebar' => NULL,
      'attachment_4_1' => NULL,
      'attachment_4_2' => NULL,
      'attachment_4_3' => NULL,
      'attachment_4_4' => NULL,
      'attachment_3_1' => NULL,
      'attachment_3_2' => NULL,
      'attachment_3_3' => NULL,
      'attachment_2_1' => NULL,
      'attachment_2_2' => NULL,
      'attachment_1_1' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '8583beb5-ca78-4c1d-baab-802e2fcc3f27';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-bb4db738-a446-4749-9aca-0fc2956317b6';
    $pane->panel = 'left_sidebar';
    $pane->type = 'block';
    $pane->subtype = 'menu_block-3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'bb4db738-a446-4749-9aca-0fc2956317b6';
    $display->content['new-bb4db738-a446-4749-9aca-0fc2956317b6'] = $pane;
    $display->panels['left_sidebar'][0] = 'new-bb4db738-a446-4749-9aca-0fc2956317b6';
    $pane = new stdClass();
    $pane->pid = 'new-3feb422d-bf6b-4cab-ad5f-cb7e8bf15087';
    $pane->panel = 'left_sidebar';
    $pane->type = 'block';
    $pane->subtype = 'og_menu-og_single_menu_block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '3feb422d-bf6b-4cab-ad5f-cb7e8bf15087';
    $display->content['new-3feb422d-bf6b-4cab-ad5f-cb7e8bf15087'] = $pane;
    $display->panels['left_sidebar'][1] = 'new-3feb422d-bf6b-4cab-ad5f-cb7e8bf15087';
    $pane = new stdClass();
    $pane->pid = 'new-9bb3569e-12be-438a-8ce9-ef6b28a15be2';
    $pane->panel = 'main_content';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 1,
      'markup' => 'h1',
      'id' => '',
      'class' => '',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '9bb3569e-12be-438a-8ce9-ef6b28a15be2';
    $display->content['new-9bb3569e-12be-438a-8ce9-ef6b28a15be2'] = $pane;
    $display->panels['main_content'][0] = 'new-9bb3569e-12be-438a-8ce9-ef6b28a15be2';
    $pane = new stdClass();
    $pane->pid = 'new-3449eb90-0b8a-4713-b8a8-e0d12c88e0d2';
    $pane->panel = 'main_content';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_ding_page_lead';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '3449eb90-0b8a-4713-b8a8-e0d12c88e0d2';
    $display->content['new-3449eb90-0b8a-4713-b8a8-e0d12c88e0d2'] = $pane;
    $display->panels['main_content'][1] = 'new-3449eb90-0b8a-4713-b8a8-e0d12c88e0d2';
    $pane = new stdClass();
    $pane->pid = 'new-bedf97d6-0267-413d-a2e7-b6cdbb60b9b1';
    $pane->panel = 'main_content';
    $pane->type = 'views_panes';
    $pane->subtype = 'bibsdb_tags_list-panel_pane_5';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'tid' => '78,130',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'bedf97d6-0267-413d-a2e7-b6cdbb60b9b1';
    $display->content['new-bedf97d6-0267-413d-a2e7-b6cdbb60b9b1'] = $pane;
    $display->panels['main_content'][2] = 'new-bedf97d6-0267-413d-a2e7-b6cdbb60b9b1';
    $pane = new stdClass();
    $pane->pid = 'new-f81979f2-6f8f-48ba-ba70-8a4cf0d14df0';
    $pane->panel = 'main_content';
    $pane->type = 'views_panes';
    $pane->subtype = 'bibsdb_tags_list-panel_pane_4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'tid' => '78,85',
      ),
      'override_title' => 1,
      'override_title_text' => 'Faciliteter',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'f81979f2-6f8f-48ba-ba70-8a4cf0d14df0';
    $display->content['new-f81979f2-6f8f-48ba-ba70-8a4cf0d14df0'] = $pane;
    $display->panels['main_content'][3] = 'new-f81979f2-6f8f-48ba-ba70-8a4cf0d14df0';
    $pane = new stdClass();
    $pane->pid = 'new-7f181c1b-04de-4551-9d78-1e18d6b95689';
    $pane->panel = 'right_sidebar';
    $pane->type = 'campaign';
    $pane->subtype = 'campaign';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'ding_campaign_count' => 3,
      'ding_campaign_offset' => 0,
      'context' => array(
        0 => 'argument_entity_id:node_1',
        1 => 'relationship_og_node_from_group_1',
        2 => 'empty',
        3 => 'relationship_terms_from_node_1',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array(
      'method' => 'simple',
      'settings' => array(
        'lifetime' => '600',
        'granularity' => 'context',
      ),
    );
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = '';
    $pane->uuid = '7f181c1b-04de-4551-9d78-1e18d6b95689';
    $display->content['new-7f181c1b-04de-4551-9d78-1e18d6b95689'] = $pane;
    $display->panels['right_sidebar'][0] = 'new-7f181c1b-04de-4551-9d78-1e18d6b95689';
    $pane = new stdClass();
    $pane->pid = 'new-c09f869c-743a-48c8-b75d-3753acafb443';
    $pane->panel = 'right_sidebar';
    $pane->type = 'block';
    $pane->subtype = 'similarterms-ding_content_tags';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = '';
    $pane->uuid = 'c09f869c-743a-48c8-b75d-3753acafb443';
    $display->content['new-c09f869c-743a-48c8-b75d-3753acafb443'] = $pane;
    $display->panels['right_sidebar'][1] = 'new-c09f869c-743a-48c8-b75d-3753acafb443';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_15'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_16';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -18;
  $handler->conf = array(
    'title' => 'Bibsdb Page - Indvandrere',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => 'bibsdb-taglist-page',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      0 => array(
        'identifier' => 'Library',
        'keyword' => 'library_group',
        'name' => 'og_group_from_node',
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
      1 => array(
        'identifier' => 'Library node',
        'keyword' => 'library_node',
        'name' => 'og_node_from_group',
        'context' => 'relationship_og_group_from_node_1',
        'id' => 1,
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'ding_page' => 'ding_page',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'node/72',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'bibsdb-page-indvandrere',
  );
  $display = new panels_display();
  $display->layout = '25_50_25';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'left_sidebar' => NULL,
      'main_content' => NULL,
      'right_sidebar' => NULL,
      'attachment_4_1' => NULL,
      'attachment_4_2' => NULL,
      'attachment_4_3' => NULL,
      'attachment_4_4' => NULL,
      'attachment_3_1' => NULL,
      'attachment_3_2' => NULL,
      'attachment_3_3' => NULL,
      'attachment_2_1' => NULL,
      'attachment_2_2' => NULL,
      'attachment_1_1' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '9e513346-29f1-42c7-b5c5-a42b2a8ceddc';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-4fae0e2c-0628-40c5-ae08-5a01f2896725';
    $pane->panel = 'left_sidebar';
    $pane->type = 'block';
    $pane->subtype = 'menu_block-3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '4fae0e2c-0628-40c5-ae08-5a01f2896725';
    $display->content['new-4fae0e2c-0628-40c5-ae08-5a01f2896725'] = $pane;
    $display->panels['left_sidebar'][0] = 'new-4fae0e2c-0628-40c5-ae08-5a01f2896725';
    $pane = new stdClass();
    $pane->pid = 'new-80b69c66-4aa8-4035-8e8a-20179efae5c4';
    $pane->panel = 'left_sidebar';
    $pane->type = 'block';
    $pane->subtype = 'og_menu-og_single_menu_block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '80b69c66-4aa8-4035-8e8a-20179efae5c4';
    $display->content['new-80b69c66-4aa8-4035-8e8a-20179efae5c4'] = $pane;
    $display->panels['left_sidebar'][1] = 'new-80b69c66-4aa8-4035-8e8a-20179efae5c4';
    $pane = new stdClass();
    $pane->pid = 'new-db278ec2-f3c2-4ad5-adf4-5a2515a856d9';
    $pane->panel = 'main_content';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 1,
      'markup' => 'h1',
      'id' => '',
      'class' => '',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'db278ec2-f3c2-4ad5-adf4-5a2515a856d9';
    $display->content['new-db278ec2-f3c2-4ad5-adf4-5a2515a856d9'] = $pane;
    $display->panels['main_content'][0] = 'new-db278ec2-f3c2-4ad5-adf4-5a2515a856d9';
    $pane = new stdClass();
    $pane->pid = 'new-17e06c80-1abd-49ff-84c4-6793120753cb';
    $pane->panel = 'main_content';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_ding_page_lead';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '17e06c80-1abd-49ff-84c4-6793120753cb';
    $display->content['new-17e06c80-1abd-49ff-84c4-6793120753cb'] = $pane;
    $display->panels['main_content'][1] = 'new-17e06c80-1abd-49ff-84c4-6793120753cb';
    $pane = new stdClass();
    $pane->pid = 'new-406f0aec-f2b3-4b8d-937a-19268708818e';
    $pane->panel = 'main_content';
    $pane->type = 'views_panes';
    $pane->subtype = 'bibsdb_tags_list-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'tid' => '76,130',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '406f0aec-f2b3-4b8d-937a-19268708818e';
    $display->content['new-406f0aec-f2b3-4b8d-937a-19268708818e'] = $pane;
    $display->panels['main_content'][2] = 'new-406f0aec-f2b3-4b8d-937a-19268708818e';
    $pane = new stdClass();
    $pane->pid = 'new-ba5b6e4d-bab2-4bdb-b401-56b88cb771f0';
    $pane->panel = 'main_content';
    $pane->type = 'views_panes';
    $pane->subtype = 'bibsdb_tags_list-panel_pane_4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'tid' => '76,124',
      ),
      'override_title' => 1,
      'override_title_text' => 'Nyeste titler',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'ba5b6e4d-bab2-4bdb-b401-56b88cb771f0';
    $display->content['new-ba5b6e4d-bab2-4bdb-b401-56b88cb771f0'] = $pane;
    $display->panels['main_content'][3] = 'new-ba5b6e4d-bab2-4bdb-b401-56b88cb771f0';
    $pane = new stdClass();
    $pane->pid = 'new-8c154e9e-4fa5-4c14-8831-4bf9cdb94db9';
    $pane->panel = 'main_content';
    $pane->type = 'views_panes';
    $pane->subtype = 'bibsdb_tags_list-panel_pane_9';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'tid' => '75,76',
      ),
      'override_title' => 1,
      'override_title_text' => 'Nyttige links',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '8c154e9e-4fa5-4c14-8831-4bf9cdb94db9';
    $display->content['new-8c154e9e-4fa5-4c14-8831-4bf9cdb94db9'] = $pane;
    $display->panels['main_content'][4] = 'new-8c154e9e-4fa5-4c14-8831-4bf9cdb94db9';
    $pane = new stdClass();
    $pane->pid = 'new-f35350fb-14e0-4901-9c17-07c529d45883';
    $pane->panel = 'right_sidebar';
    $pane->type = 'campaign';
    $pane->subtype = 'campaign';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'ding_campaign_count' => 3,
      'ding_campaign_offset' => 0,
      'context' => array(
        0 => 'argument_entity_id:node_1',
        1 => 'relationship_og_node_from_group_1',
        2 => 'empty',
        3 => 'relationship_terms_from_node_1',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array(
      'method' => 'simple',
      'settings' => array(
        'lifetime' => '600',
        'granularity' => 'context',
      ),
    );
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = '';
    $pane->uuid = 'f35350fb-14e0-4901-9c17-07c529d45883';
    $display->content['new-f35350fb-14e0-4901-9c17-07c529d45883'] = $pane;
    $display->panels['right_sidebar'][0] = 'new-f35350fb-14e0-4901-9c17-07c529d45883';
    $pane = new stdClass();
    $pane->pid = 'new-43720845-4000-44b6-80d0-7608c78c809b';
    $pane->panel = 'right_sidebar';
    $pane->type = 'block';
    $pane->subtype = 'similarterms-ding_content_tags';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = '';
    $pane->uuid = '43720845-4000-44b6-80d0-7608c78c809b';
    $display->content['new-43720845-4000-44b6-80d0-7608c78c809b'] = $pane;
    $display->panels['right_sidebar'][1] = 'new-43720845-4000-44b6-80d0-7608c78c809b';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_16'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_17';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -17;
  $handler->conf = array(
    'title' => 'Bibsdb Page - Ældre',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => 'bibsdb-taglist-page',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      0 => array(
        'identifier' => 'Library',
        'keyword' => 'library_group',
        'name' => 'og_group_from_node',
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
      1 => array(
        'identifier' => 'Library node',
        'keyword' => 'library_node',
        'name' => 'og_node_from_group',
        'context' => 'relationship_og_group_from_node_1',
        'id' => 1,
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'ding_page' => 'ding_page',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'node/133',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'bibsdb-page-aeldre',
  );
  $display = new panels_display();
  $display->layout = '25_50_25';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'left_sidebar' => NULL,
      'main_content' => NULL,
      'right_sidebar' => NULL,
      'attachment_4_1' => NULL,
      'attachment_4_2' => NULL,
      'attachment_4_3' => NULL,
      'attachment_4_4' => NULL,
      'attachment_3_1' => NULL,
      'attachment_3_2' => NULL,
      'attachment_3_3' => NULL,
      'attachment_2_1' => NULL,
      'attachment_2_2' => NULL,
      'attachment_1_1' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '8d41ec6c-4170-4511-86b8-77f78fd54546';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-5fce638e-65c6-4550-8c46-b54cbb4b945d';
    $pane->panel = 'left_sidebar';
    $pane->type = 'block';
    $pane->subtype = 'menu_block-3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '5fce638e-65c6-4550-8c46-b54cbb4b945d';
    $display->content['new-5fce638e-65c6-4550-8c46-b54cbb4b945d'] = $pane;
    $display->panels['left_sidebar'][0] = 'new-5fce638e-65c6-4550-8c46-b54cbb4b945d';
    $pane = new stdClass();
    $pane->pid = 'new-5070dcfe-8cf1-4c26-9e5b-6ab415ef8035';
    $pane->panel = 'left_sidebar';
    $pane->type = 'block';
    $pane->subtype = 'og_menu-og_single_menu_block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '5070dcfe-8cf1-4c26-9e5b-6ab415ef8035';
    $display->content['new-5070dcfe-8cf1-4c26-9e5b-6ab415ef8035'] = $pane;
    $display->panels['left_sidebar'][1] = 'new-5070dcfe-8cf1-4c26-9e5b-6ab415ef8035';
    $pane = new stdClass();
    $pane->pid = 'new-7b0bb5c7-384a-45e0-b6b9-c25932a3f0ad';
    $pane->panel = 'main_content';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 1,
      'markup' => 'h1',
      'id' => '',
      'class' => '',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '7b0bb5c7-384a-45e0-b6b9-c25932a3f0ad';
    $display->content['new-7b0bb5c7-384a-45e0-b6b9-c25932a3f0ad'] = $pane;
    $display->panels['main_content'][0] = 'new-7b0bb5c7-384a-45e0-b6b9-c25932a3f0ad';
    $pane = new stdClass();
    $pane->pid = 'new-de05fa37-95e3-439a-80c9-95c56c915c26';
    $pane->panel = 'main_content';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_ding_page_lead';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'de05fa37-95e3-439a-80c9-95c56c915c26';
    $display->content['new-de05fa37-95e3-439a-80c9-95c56c915c26'] = $pane;
    $display->panels['main_content'][1] = 'new-de05fa37-95e3-439a-80c9-95c56c915c26';
    $pane = new stdClass();
    $pane->pid = 'new-1ec57b50-4402-4795-9449-1de51d2011f3';
    $pane->panel = 'main_content';
    $pane->type = 'views_panes';
    $pane->subtype = 'bibsdb_tags_list-panel_pane_5';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'tid' => '82,131',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '1ec57b50-4402-4795-9449-1de51d2011f3';
    $display->content['new-1ec57b50-4402-4795-9449-1de51d2011f3'] = $pane;
    $display->panels['main_content'][2] = 'new-1ec57b50-4402-4795-9449-1de51d2011f3';
    $pane = new stdClass();
    $pane->pid = 'new-9c84bd63-1c70-4d61-badd-a25cfe43a133';
    $pane->panel = 'main_content';
    $pane->type = 'views_panes';
    $pane->subtype = 'bibsdb_tags_list-panel_pane_4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'tid' => '82,124',
      ),
      'override_title' => 1,
      'override_title_text' => 'Nye titler',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '9c84bd63-1c70-4d61-badd-a25cfe43a133';
    $display->content['new-9c84bd63-1c70-4d61-badd-a25cfe43a133'] = $pane;
    $display->panels['main_content'][3] = 'new-9c84bd63-1c70-4d61-badd-a25cfe43a133';
    $pane = new stdClass();
    $pane->pid = 'new-68ad68b8-bc8b-4b40-9fa1-aa1c019bc42f';
    $pane->panel = 'main_content';
    $pane->type = 'views_panes';
    $pane->subtype = 'bibsdb_tags_list-panel_pane_4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'tid' => '82,85',
      ),
      'override_title' => 1,
      'override_title_text' => 'Faciliteter',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '68ad68b8-bc8b-4b40-9fa1-aa1c019bc42f';
    $display->content['new-68ad68b8-bc8b-4b40-9fa1-aa1c019bc42f'] = $pane;
    $display->panels['main_content'][4] = 'new-68ad68b8-bc8b-4b40-9fa1-aa1c019bc42f';
    $pane = new stdClass();
    $pane->pid = 'new-f286c97c-233a-44f7-b069-dae9e6d852a2';
    $pane->panel = 'right_sidebar';
    $pane->type = 'campaign';
    $pane->subtype = 'campaign';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'ding_campaign_count' => 3,
      'ding_campaign_offset' => 0,
      'context' => array(
        0 => 'argument_entity_id:node_1',
        1 => 'relationship_og_node_from_group_1',
        2 => 'empty',
        3 => 'relationship_terms_from_node_1',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array(
      'method' => 'simple',
      'settings' => array(
        'lifetime' => '600',
        'granularity' => 'context',
      ),
    );
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = '';
    $pane->uuid = 'f286c97c-233a-44f7-b069-dae9e6d852a2';
    $display->content['new-f286c97c-233a-44f7-b069-dae9e6d852a2'] = $pane;
    $display->panels['right_sidebar'][0] = 'new-f286c97c-233a-44f7-b069-dae9e6d852a2';
    $pane = new stdClass();
    $pane->pid = 'new-fb5d14d1-7da4-4ec6-bc70-a266ef4fa373';
    $pane->panel = 'right_sidebar';
    $pane->type = 'block';
    $pane->subtype = 'similarterms-ding_content_tags';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = '';
    $pane->uuid = 'fb5d14d1-7da4-4ec6-bc70-a266ef4fa373';
    $display->content['new-fb5d14d1-7da4-4ec6-bc70-a266ef4fa373'] = $pane;
    $display->panels['right_sidebar'][1] = 'new-fb5d14d1-7da4-4ec6-bc70-a266ef4fa373';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_17'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_18';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -16;
  $handler->conf = array(
    'title' => 'Bibsdb Page - Ordblinde',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => 'bibsdb-taglist-page',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      0 => array(
        'identifier' => 'Library',
        'keyword' => 'library_group',
        'name' => 'og_group_from_node',
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
      1 => array(
        'identifier' => 'Library node',
        'keyword' => 'library_node',
        'name' => 'og_node_from_group',
        'context' => 'relationship_og_group_from_node_1',
        'id' => 1,
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'ding_page' => 'ding_page',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'node/79',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'bibsdb-page-ordblinde',
  );
  $display = new panels_display();
  $display->layout = '25_50_25';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'left_sidebar' => NULL,
      'main_content' => NULL,
      'right_sidebar' => NULL,
      'attachment_4_1' => NULL,
      'attachment_4_2' => NULL,
      'attachment_4_3' => NULL,
      'attachment_4_4' => NULL,
      'attachment_3_1' => NULL,
      'attachment_3_2' => NULL,
      'attachment_3_3' => NULL,
      'attachment_2_1' => NULL,
      'attachment_2_2' => NULL,
      'attachment_1_1' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '4ff718bd-12f9-4407-9520-472753a4ac8e';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-228f40d2-8125-41da-96af-6b43c9000a58';
    $pane->panel = 'left_sidebar';
    $pane->type = 'block';
    $pane->subtype = 'menu_block-3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '228f40d2-8125-41da-96af-6b43c9000a58';
    $display->content['new-228f40d2-8125-41da-96af-6b43c9000a58'] = $pane;
    $display->panels['left_sidebar'][0] = 'new-228f40d2-8125-41da-96af-6b43c9000a58';
    $pane = new stdClass();
    $pane->pid = 'new-fa66a68d-8980-48e1-97b4-901ac8179814';
    $pane->panel = 'left_sidebar';
    $pane->type = 'block';
    $pane->subtype = 'og_menu-og_single_menu_block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'fa66a68d-8980-48e1-97b4-901ac8179814';
    $display->content['new-fa66a68d-8980-48e1-97b4-901ac8179814'] = $pane;
    $display->panels['left_sidebar'][1] = 'new-fa66a68d-8980-48e1-97b4-901ac8179814';
    $pane = new stdClass();
    $pane->pid = 'new-9f944c5c-24b3-4a84-9683-0dd1130efb46';
    $pane->panel = 'main_content';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 1,
      'markup' => 'h1',
      'id' => '',
      'class' => '',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '9f944c5c-24b3-4a84-9683-0dd1130efb46';
    $display->content['new-9f944c5c-24b3-4a84-9683-0dd1130efb46'] = $pane;
    $display->panels['main_content'][0] = 'new-9f944c5c-24b3-4a84-9683-0dd1130efb46';
    $pane = new stdClass();
    $pane->pid = 'new-196b3252-947b-4960-b5e5-57c27f6beff4';
    $pane->panel = 'main_content';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_ding_page_lead';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '196b3252-947b-4960-b5e5-57c27f6beff4';
    $display->content['new-196b3252-947b-4960-b5e5-57c27f6beff4'] = $pane;
    $display->panels['main_content'][1] = 'new-196b3252-947b-4960-b5e5-57c27f6beff4';
    $pane = new stdClass();
    $pane->pid = 'new-94ad8761-933a-4f9e-963d-2c861192a6ee';
    $pane->panel = 'main_content';
    $pane->type = 'views_panes';
    $pane->subtype = 'bibsdb_tags_list-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'tid' => '83,131',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '94ad8761-933a-4f9e-963d-2c861192a6ee';
    $display->content['new-94ad8761-933a-4f9e-963d-2c861192a6ee'] = $pane;
    $display->panels['main_content'][2] = 'new-94ad8761-933a-4f9e-963d-2c861192a6ee';
    $pane = new stdClass();
    $pane->pid = 'new-1dc760a6-d76b-44ad-98cb-96e3adcee0c3';
    $pane->panel = 'main_content';
    $pane->type = 'views_panes';
    $pane->subtype = 'bibsdb_tags_list-panel_pane_4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'tid' => '83,124',
      ),
      'override_title' => 1,
      'override_title_text' => 'Nyeste titler',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '1dc760a6-d76b-44ad-98cb-96e3adcee0c3';
    $display->content['new-1dc760a6-d76b-44ad-98cb-96e3adcee0c3'] = $pane;
    $display->panels['main_content'][3] = 'new-1dc760a6-d76b-44ad-98cb-96e3adcee0c3';
    $pane = new stdClass();
    $pane->pid = 'new-bff7db06-faaa-4c84-b4e9-51439e624fe9';
    $pane->panel = 'main_content';
    $pane->type = 'views_panes';
    $pane->subtype = 'bibsdb_tags_list-panel_pane_9';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'tid' => '83,75',
      ),
      'override_title' => 1,
      'override_title_text' => 'Nyttige links',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'bff7db06-faaa-4c84-b4e9-51439e624fe9';
    $display->content['new-bff7db06-faaa-4c84-b4e9-51439e624fe9'] = $pane;
    $display->panels['main_content'][4] = 'new-bff7db06-faaa-4c84-b4e9-51439e624fe9';
    $pane = new stdClass();
    $pane->pid = 'new-0577aa09-dacd-4265-9644-e46f3465fc10';
    $pane->panel = 'right_sidebar';
    $pane->type = 'campaign';
    $pane->subtype = 'campaign';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'ding_campaign_count' => 3,
      'ding_campaign_offset' => 0,
      'context' => array(
        0 => 'argument_entity_id:node_1',
        1 => 'relationship_og_node_from_group_1',
        2 => 'empty',
        3 => 'relationship_terms_from_node_1',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array(
      'method' => 'simple',
      'settings' => array(
        'lifetime' => '600',
        'granularity' => 'context',
      ),
    );
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = '';
    $pane->uuid = '0577aa09-dacd-4265-9644-e46f3465fc10';
    $display->content['new-0577aa09-dacd-4265-9644-e46f3465fc10'] = $pane;
    $display->panels['right_sidebar'][0] = 'new-0577aa09-dacd-4265-9644-e46f3465fc10';
    $pane = new stdClass();
    $pane->pid = 'new-bafb48f2-fed7-4a7e-a36e-4888a6735822';
    $pane->panel = 'right_sidebar';
    $pane->type = 'block';
    $pane->subtype = 'similarterms-ding_content_tags';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = '';
    $pane->uuid = 'bafb48f2-fed7-4a7e-a36e-4888a6735822';
    $display->content['new-bafb48f2-fed7-4a7e-a36e-4888a6735822'] = $pane;
    $display->panels['right_sidebar'][1] = 'new-bafb48f2-fed7-4a7e-a36e-4888a6735822';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_18'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_19';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -15;
  $handler->conf = array(
    'title' => 'Bibsdb Page - Børn',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => 'bibsdb-taglist-page',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      0 => array(
        'identifier' => 'Library',
        'keyword' => 'library_group',
        'name' => 'og_group_from_node',
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
      1 => array(
        'identifier' => 'Library node',
        'keyword' => 'library_node',
        'name' => 'og_node_from_group',
        'context' => 'relationship_og_group_from_node_1',
        'id' => 1,
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'ding_page' => 'ding_page',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'node/137',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'bibsdb-page-boern',
  );
  $display = new panels_display();
  $display->layout = '25_50_25';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'left_sidebar' => NULL,
      'main_content' => NULL,
      'right_sidebar' => NULL,
      'attachment_4_1' => NULL,
      'attachment_4_2' => NULL,
      'attachment_4_3' => NULL,
      'attachment_4_4' => NULL,
      'attachment_3_1' => NULL,
      'attachment_3_2' => NULL,
      'attachment_3_3' => NULL,
      'attachment_2_1' => NULL,
      'attachment_2_2' => NULL,
      'attachment_1_1' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'e355ae2f-1b9c-4920-8753-efadf23ac898';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-a57cdc24-f9d4-4dd0-9181-315ad6ece5d1';
    $pane->panel = 'left_sidebar';
    $pane->type = 'block';
    $pane->subtype = 'menu_block-3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a57cdc24-f9d4-4dd0-9181-315ad6ece5d1';
    $display->content['new-a57cdc24-f9d4-4dd0-9181-315ad6ece5d1'] = $pane;
    $display->panels['left_sidebar'][0] = 'new-a57cdc24-f9d4-4dd0-9181-315ad6ece5d1';
    $pane = new stdClass();
    $pane->pid = 'new-50170c80-368a-4c62-872c-b6928d883e71';
    $pane->panel = 'left_sidebar';
    $pane->type = 'block';
    $pane->subtype = 'og_menu-og_single_menu_block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '50170c80-368a-4c62-872c-b6928d883e71';
    $display->content['new-50170c80-368a-4c62-872c-b6928d883e71'] = $pane;
    $display->panels['left_sidebar'][1] = 'new-50170c80-368a-4c62-872c-b6928d883e71';
    $pane = new stdClass();
    $pane->pid = 'new-5bb78f91-0abc-4295-8820-0a3ab7e0e3ec';
    $pane->panel = 'main_content';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 1,
      'markup' => 'h1',
      'id' => '',
      'class' => '',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '5bb78f91-0abc-4295-8820-0a3ab7e0e3ec';
    $display->content['new-5bb78f91-0abc-4295-8820-0a3ab7e0e3ec'] = $pane;
    $display->panels['main_content'][0] = 'new-5bb78f91-0abc-4295-8820-0a3ab7e0e3ec';
    $pane = new stdClass();
    $pane->pid = 'new-6d9efdbe-9ce4-4835-9890-1976c4c00c7f';
    $pane->panel = 'main_content';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_ding_page_lead';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '6d9efdbe-9ce4-4835-9890-1976c4c00c7f';
    $display->content['new-6d9efdbe-9ce4-4835-9890-1976c4c00c7f'] = $pane;
    $display->panels['main_content'][1] = 'new-6d9efdbe-9ce4-4835-9890-1976c4c00c7f';
    $pane = new stdClass();
    $pane->pid = 'new-b5e5ea2d-dd76-4bf4-8832-e399dca24dfa';
    $pane->panel = 'main_content';
    $pane->type = 'views_panes';
    $pane->subtype = 'bibsdb_tags_list-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'tid' => '118,130',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'b5e5ea2d-dd76-4bf4-8832-e399dca24dfa';
    $display->content['new-b5e5ea2d-dd76-4bf4-8832-e399dca24dfa'] = $pane;
    $display->panels['main_content'][2] = 'new-b5e5ea2d-dd76-4bf4-8832-e399dca24dfa';
    $pane = new stdClass();
    $pane->pid = 'new-c18cd330-0b3a-4831-8fe2-fc283fda8e37';
    $pane->panel = 'main_content';
    $pane->type = 'views_panes';
    $pane->subtype = 'bibsdb_tags_list-panel_pane_4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'tid' => '118,124',
      ),
      'override_title' => 1,
      'override_title_text' => 'Nyeste titler',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'c18cd330-0b3a-4831-8fe2-fc283fda8e37';
    $display->content['new-c18cd330-0b3a-4831-8fe2-fc283fda8e37'] = $pane;
    $display->panels['main_content'][3] = 'new-c18cd330-0b3a-4831-8fe2-fc283fda8e37';
    $pane = new stdClass();
    $pane->pid = 'new-f6fc7c4f-6c8c-42b8-9cdc-7569acd9d149';
    $pane->panel = 'main_content';
    $pane->type = 'views_panes';
    $pane->subtype = 'bibsdb_tags_list-panel_pane_7';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'tid' => '61,118',
      ),
      'override_title' => 1,
      'override_title_text' => 'Mangler du en god bog?',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'f6fc7c4f-6c8c-42b8-9cdc-7569acd9d149';
    $display->content['new-f6fc7c4f-6c8c-42b8-9cdc-7569acd9d149'] = $pane;
    $display->panels['main_content'][4] = 'new-f6fc7c4f-6c8c-42b8-9cdc-7569acd9d149';
    $pane = new stdClass();
    $pane->pid = 'new-b3d1ab03-3920-445f-a591-5a2ae771d3bf';
    $pane->panel = 'right_sidebar';
    $pane->type = 'campaign';
    $pane->subtype = 'campaign';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'ding_campaign_count' => 3,
      'ding_campaign_offset' => 0,
      'context' => array(
        0 => 'argument_entity_id:node_1',
        1 => 'relationship_og_node_from_group_1',
        2 => 'empty',
        3 => 'relationship_terms_from_node_1',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array(
      'method' => 'simple',
      'settings' => array(
        'lifetime' => '600',
        'granularity' => 'context',
      ),
    );
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = '';
    $pane->uuid = 'b3d1ab03-3920-445f-a591-5a2ae771d3bf';
    $display->content['new-b3d1ab03-3920-445f-a591-5a2ae771d3bf'] = $pane;
    $display->panels['right_sidebar'][0] = 'new-b3d1ab03-3920-445f-a591-5a2ae771d3bf';
    $pane = new stdClass();
    $pane->pid = 'new-7fb708ca-6d56-474e-857b-cf005326c346';
    $pane->panel = 'right_sidebar';
    $pane->type = 'block';
    $pane->subtype = 'similarterms-ding_content_tags';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = '';
    $pane->uuid = '7fb708ca-6d56-474e-857b-cf005326c346';
    $display->content['new-7fb708ca-6d56-474e-857b-cf005326c346'] = $pane;
    $display->panels['right_sidebar'][1] = 'new-7fb708ca-6d56-474e-857b-cf005326c346';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_19'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_20';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -14;
  $handler->conf = array(
    'title' => 'Bibsdb Page - Forældre',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => 'bibsdb-taglist-page',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      0 => array(
        'identifier' => 'Library',
        'keyword' => 'library_group',
        'name' => 'og_group_from_node',
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
      1 => array(
        'identifier' => 'Library node',
        'keyword' => 'library_node',
        'name' => 'og_node_from_group',
        'context' => 'relationship_og_group_from_node_1',
        'id' => 1,
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'ding_page' => 'ding_page',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'node/138',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'bibsdb-page-foraeldre',
  );
  $display = new panels_display();
  $display->layout = '25_50_25';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'left_sidebar' => NULL,
      'main_content' => NULL,
      'right_sidebar' => NULL,
      'attachment_4_1' => NULL,
      'attachment_4_2' => NULL,
      'attachment_4_3' => NULL,
      'attachment_4_4' => NULL,
      'attachment_3_1' => NULL,
      'attachment_3_2' => NULL,
      'attachment_3_3' => NULL,
      'attachment_2_1' => NULL,
      'attachment_2_2' => NULL,
      'attachment_1_1' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'a3f103b6-d50c-434b-881d-b353793a43a8';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-66e44811-b51b-46ac-a831-612e31a4e655';
    $pane->panel = 'left_sidebar';
    $pane->type = 'block';
    $pane->subtype = 'menu_block-3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '66e44811-b51b-46ac-a831-612e31a4e655';
    $display->content['new-66e44811-b51b-46ac-a831-612e31a4e655'] = $pane;
    $display->panels['left_sidebar'][0] = 'new-66e44811-b51b-46ac-a831-612e31a4e655';
    $pane = new stdClass();
    $pane->pid = 'new-79867688-0205-41aa-9318-6e2f96cb9033';
    $pane->panel = 'left_sidebar';
    $pane->type = 'block';
    $pane->subtype = 'og_menu-og_single_menu_block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '79867688-0205-41aa-9318-6e2f96cb9033';
    $display->content['new-79867688-0205-41aa-9318-6e2f96cb9033'] = $pane;
    $display->panels['left_sidebar'][1] = 'new-79867688-0205-41aa-9318-6e2f96cb9033';
    $pane = new stdClass();
    $pane->pid = 'new-3a98e98e-e27d-4dcd-a643-4f531ef02583';
    $pane->panel = 'main_content';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 1,
      'markup' => 'h1',
      'id' => '',
      'class' => '',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3a98e98e-e27d-4dcd-a643-4f531ef02583';
    $display->content['new-3a98e98e-e27d-4dcd-a643-4f531ef02583'] = $pane;
    $display->panels['main_content'][0] = 'new-3a98e98e-e27d-4dcd-a643-4f531ef02583';
    $pane = new stdClass();
    $pane->pid = 'new-8dc8428f-c9de-4ba8-a417-9b06d5dbcef1';
    $pane->panel = 'main_content';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_ding_page_lead';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '8dc8428f-c9de-4ba8-a417-9b06d5dbcef1';
    $display->content['new-8dc8428f-c9de-4ba8-a417-9b06d5dbcef1'] = $pane;
    $display->panels['main_content'][1] = 'new-8dc8428f-c9de-4ba8-a417-9b06d5dbcef1';
    $pane = new stdClass();
    $pane->pid = 'new-035bd360-67e3-4ffa-adc4-7e464ed69aad';
    $pane->panel = 'main_content';
    $pane->type = 'views_panes';
    $pane->subtype = 'bibsdb_tags_list-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'tid' => '123,130',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '035bd360-67e3-4ffa-adc4-7e464ed69aad';
    $display->content['new-035bd360-67e3-4ffa-adc4-7e464ed69aad'] = $pane;
    $display->panels['main_content'][2] = 'new-035bd360-67e3-4ffa-adc4-7e464ed69aad';
    $pane = new stdClass();
    $pane->pid = 'new-b5a7d84a-7e2d-4246-988d-2fc91c011894';
    $pane->panel = 'main_content';
    $pane->type = 'views_panes';
    $pane->subtype = 'bibsdb_tags_list-panel_pane_4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'tid' => '123,124',
      ),
      'override_title' => 1,
      'override_title_text' => 'Nyeste titler',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'b5a7d84a-7e2d-4246-988d-2fc91c011894';
    $display->content['new-b5a7d84a-7e2d-4246-988d-2fc91c011894'] = $pane;
    $display->panels['main_content'][3] = 'new-b5a7d84a-7e2d-4246-988d-2fc91c011894';
    $pane = new stdClass();
    $pane->pid = 'new-6c523685-9928-416a-a7d0-c1e21f60fbf4';
    $pane->panel = 'main_content';
    $pane->type = 'views_panes';
    $pane->subtype = 'bibsdb_tags_list-panel_pane_9';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'tid' => '61,123',
      ),
      'override_title' => 1,
      'override_title_text' => 'Inspirationslister',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '6c523685-9928-416a-a7d0-c1e21f60fbf4';
    $display->content['new-6c523685-9928-416a-a7d0-c1e21f60fbf4'] = $pane;
    $display->panels['main_content'][4] = 'new-6c523685-9928-416a-a7d0-c1e21f60fbf4';
    $pane = new stdClass();
    $pane->pid = 'new-fc9b1b74-0f7b-4f07-8ba3-92075cc8bc72';
    $pane->panel = 'right_sidebar';
    $pane->type = 'campaign';
    $pane->subtype = 'campaign';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'ding_campaign_count' => 3,
      'ding_campaign_offset' => 0,
      'context' => array(
        0 => 'argument_entity_id:node_1',
        1 => 'relationship_og_node_from_group_1',
        2 => 'empty',
        3 => 'relationship_terms_from_node_1',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array(
      'method' => 'simple',
      'settings' => array(
        'lifetime' => '600',
        'granularity' => 'context',
      ),
    );
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = '';
    $pane->uuid = 'fc9b1b74-0f7b-4f07-8ba3-92075cc8bc72';
    $display->content['new-fc9b1b74-0f7b-4f07-8ba3-92075cc8bc72'] = $pane;
    $display->panels['right_sidebar'][0] = 'new-fc9b1b74-0f7b-4f07-8ba3-92075cc8bc72';
    $pane = new stdClass();
    $pane->pid = 'new-437ac89c-9af6-43c2-9142-557661760c18';
    $pane->panel = 'right_sidebar';
    $pane->type = 'block';
    $pane->subtype = 'similarterms-ding_content_tags';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = '';
    $pane->uuid = '437ac89c-9af6-43c2-9142-557661760c18';
    $display->content['new-437ac89c-9af6-43c2-9142-557661760c18'] = $pane;
    $display->panels['right_sidebar'][1] = 'new-437ac89c-9af6-43c2-9142-557661760c18';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_20'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_21';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -13;
  $handler->conf = array(
    'title' => 'Bibsdb Page - Professionelle',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => 'bibsdb-taglist-page',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      0 => array(
        'identifier' => 'Library',
        'keyword' => 'library_group',
        'name' => 'og_group_from_node',
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
      1 => array(
        'identifier' => 'Library node',
        'keyword' => 'library_node',
        'name' => 'og_node_from_group',
        'context' => 'relationship_og_group_from_node_1',
        'id' => 1,
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'ding_page' => 'ding_page',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'indhold/professionelle',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'bibsdb-page-professionelle',
  );
  $display = new panels_display();
  $display->layout = '25_50_25';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'left_sidebar' => NULL,
      'main_content' => NULL,
      'right_sidebar' => NULL,
      'attachment_4_1' => NULL,
      'attachment_4_2' => NULL,
      'attachment_4_3' => NULL,
      'attachment_4_4' => NULL,
      'attachment_3_1' => NULL,
      'attachment_3_2' => NULL,
      'attachment_3_3' => NULL,
      'attachment_2_1' => NULL,
      'attachment_2_2' => NULL,
      'attachment_1_1' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '7d8e48c0-f04e-4a29-b2a4-1ad591ff002f';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-2b3dc8ab-9474-4379-9637-5a1e0aafa818';
    $pane->panel = 'left_sidebar';
    $pane->type = 'block';
    $pane->subtype = 'menu_block-3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '2b3dc8ab-9474-4379-9637-5a1e0aafa818';
    $display->content['new-2b3dc8ab-9474-4379-9637-5a1e0aafa818'] = $pane;
    $display->panels['left_sidebar'][0] = 'new-2b3dc8ab-9474-4379-9637-5a1e0aafa818';
    $pane = new stdClass();
    $pane->pid = 'new-504e2995-eae0-44f7-9925-f4b524ec5ac7';
    $pane->panel = 'left_sidebar';
    $pane->type = 'block';
    $pane->subtype = 'og_menu-og_single_menu_block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '504e2995-eae0-44f7-9925-f4b524ec5ac7';
    $display->content['new-504e2995-eae0-44f7-9925-f4b524ec5ac7'] = $pane;
    $display->panels['left_sidebar'][1] = 'new-504e2995-eae0-44f7-9925-f4b524ec5ac7';
    $pane = new stdClass();
    $pane->pid = 'new-9eadbca0-165d-491c-8494-11f8e2137b97';
    $pane->panel = 'main_content';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 1,
      'markup' => 'h1',
      'id' => '',
      'class' => '',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '9eadbca0-165d-491c-8494-11f8e2137b97';
    $display->content['new-9eadbca0-165d-491c-8494-11f8e2137b97'] = $pane;
    $display->panels['main_content'][0] = 'new-9eadbca0-165d-491c-8494-11f8e2137b97';
    $pane = new stdClass();
    $pane->pid = 'new-f3693586-1dd6-4db7-9051-d25d9ec65342';
    $pane->panel = 'main_content';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_ding_page_lead';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'f3693586-1dd6-4db7-9051-d25d9ec65342';
    $display->content['new-f3693586-1dd6-4db7-9051-d25d9ec65342'] = $pane;
    $display->panels['main_content'][1] = 'new-f3693586-1dd6-4db7-9051-d25d9ec65342';
    $pane = new stdClass();
    $pane->pid = 'new-f10786d2-70af-4e7a-92d2-b0626aedfed7';
    $pane->panel = 'main_content';
    $pane->type = 'views_panes';
    $pane->subtype = 'bibsdb_tags_list-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'tid' => '120,130',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'f10786d2-70af-4e7a-92d2-b0626aedfed7';
    $display->content['new-f10786d2-70af-4e7a-92d2-b0626aedfed7'] = $pane;
    $display->panels['main_content'][2] = 'new-f10786d2-70af-4e7a-92d2-b0626aedfed7';
    $pane = new stdClass();
    $pane->pid = 'new-590b2713-ba6f-4aee-b9ac-345902c346f6';
    $pane->panel = 'main_content';
    $pane->type = 'views_panes';
    $pane->subtype = 'bibsdb_tags_list-panel_pane_4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'tid' => '120,124',
      ),
      'override_title' => 1,
      'override_title_text' => 'Nyeste titler',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '590b2713-ba6f-4aee-b9ac-345902c346f6';
    $display->content['new-590b2713-ba6f-4aee-b9ac-345902c346f6'] = $pane;
    $display->panels['main_content'][3] = 'new-590b2713-ba6f-4aee-b9ac-345902c346f6';
    $pane = new stdClass();
    $pane->pid = 'new-274a55d9-f31e-4d04-94b8-02791520f499';
    $pane->panel = 'main_content';
    $pane->type = 'views_panes';
    $pane->subtype = 'bibsdb_tags_list-panel_pane_9';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'tid' => '61,120',
      ),
      'override_title' => 1,
      'override_title_text' => 'Inspirationslister',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '274a55d9-f31e-4d04-94b8-02791520f499';
    $display->content['new-274a55d9-f31e-4d04-94b8-02791520f499'] = $pane;
    $display->panels['main_content'][4] = 'new-274a55d9-f31e-4d04-94b8-02791520f499';
    $pane = new stdClass();
    $pane->pid = 'new-092073e9-757c-450c-9b92-4c044824fd08';
    $pane->panel = 'right_sidebar';
    $pane->type = 'campaign';
    $pane->subtype = 'campaign';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'ding_campaign_count' => 3,
      'ding_campaign_offset' => 0,
      'context' => array(
        0 => 'argument_entity_id:node_1',
        1 => 'relationship_og_node_from_group_1',
        2 => 'empty',
        3 => 'relationship_terms_from_node_1',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array(
      'method' => 'simple',
      'settings' => array(
        'lifetime' => '600',
        'granularity' => 'context',
      ),
    );
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = '';
    $pane->uuid = '092073e9-757c-450c-9b92-4c044824fd08';
    $display->content['new-092073e9-757c-450c-9b92-4c044824fd08'] = $pane;
    $display->panels['right_sidebar'][0] = 'new-092073e9-757c-450c-9b92-4c044824fd08';
    $pane = new stdClass();
    $pane->pid = 'new-edb1b70d-be6f-4bce-a7bd-dcc89e17d028';
    $pane->panel = 'right_sidebar';
    $pane->type = 'block';
    $pane->subtype = 'similarterms-ding_content_tags';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = '';
    $pane->uuid = 'edb1b70d-be6f-4bce-a7bd-dcc89e17d028';
    $display->content['new-edb1b70d-be6f-4bce-a7bd-dcc89e17d028'] = $pane;
    $display->panels['right_sidebar'][1] = 'new-edb1b70d-be6f-4bce-a7bd-dcc89e17d028';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_21'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_22';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -11;
  $handler->conf = array(
    'title' => 'Bibsdb Page - DK laeser',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => 'bibsdb-taglist-page',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      0 => array(
        'identifier' => 'Library',
        'keyword' => 'library_group',
        'name' => 'og_group_from_node',
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
      1 => array(
        'identifier' => 'Library node',
        'keyword' => 'library_node',
        'name' => 'og_node_from_group',
        'context' => 'relationship_og_group_from_node_1',
        'id' => 1,
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'ding_page' => 'ding_page',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'node/295',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'bibsdb-page-dklaeser',
  );
  $display = new panels_display();
  $display->layout = '25_50_25';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'left_sidebar' => NULL,
      'main_content' => NULL,
      'right_sidebar' => NULL,
      'attachment_4_1' => NULL,
      'attachment_4_2' => NULL,
      'attachment_4_3' => NULL,
      'attachment_4_4' => NULL,
      'attachment_3_1' => NULL,
      'attachment_3_2' => NULL,
      'attachment_3_3' => NULL,
      'attachment_2_1' => NULL,
      'attachment_2_2' => NULL,
      'attachment_1_1' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'dd263fde-2124-4f9b-9352-f8cd35fe1190';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-80d7af68-b5e8-499e-b5f6-7d2dbf1c09d9';
    $pane->panel = 'left_sidebar';
    $pane->type = 'block';
    $pane->subtype = 'menu_block-3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '80d7af68-b5e8-499e-b5f6-7d2dbf1c09d9';
    $display->content['new-80d7af68-b5e8-499e-b5f6-7d2dbf1c09d9'] = $pane;
    $display->panels['left_sidebar'][0] = 'new-80d7af68-b5e8-499e-b5f6-7d2dbf1c09d9';
    $pane = new stdClass();
    $pane->pid = 'new-b8cd1c45-76d5-47f9-81bf-141fb4745976';
    $pane->panel = 'left_sidebar';
    $pane->type = 'block';
    $pane->subtype = 'og_menu-og_single_menu_block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'b8cd1c45-76d5-47f9-81bf-141fb4745976';
    $display->content['new-b8cd1c45-76d5-47f9-81bf-141fb4745976'] = $pane;
    $display->panels['left_sidebar'][1] = 'new-b8cd1c45-76d5-47f9-81bf-141fb4745976';
    $pane = new stdClass();
    $pane->pid = 'new-57280457-6f9c-48cd-b5a7-f5f1cdcc323e';
    $pane->panel = 'main_content';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 1,
      'markup' => 'h1',
      'id' => '',
      'class' => '',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '57280457-6f9c-48cd-b5a7-f5f1cdcc323e';
    $display->content['new-57280457-6f9c-48cd-b5a7-f5f1cdcc323e'] = $pane;
    $display->panels['main_content'][0] = 'new-57280457-6f9c-48cd-b5a7-f5f1cdcc323e';
    $pane = new stdClass();
    $pane->pid = 'new-4cd0922e-9bef-4475-8037-c7c0eb297608';
    $pane->panel = 'main_content';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_ding_page_lead';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '4cd0922e-9bef-4475-8037-c7c0eb297608';
    $display->content['new-4cd0922e-9bef-4475-8037-c7c0eb297608'] = $pane;
    $display->panels['main_content'][1] = 'new-4cd0922e-9bef-4475-8037-c7c0eb297608';
    $pane = new stdClass();
    $pane->pid = 'new-190693f6-fbb5-4e25-9c0d-d76c5ad40750';
    $pane->panel = 'main_content';
    $pane->type = 'views_panes';
    $pane->subtype = 'bibsdb_tags_list-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
      'override_title' => 1,
      'override_title_text' => 'Gratis lydbøger til download lige nu',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '190693f6-fbb5-4e25-9c0d-d76c5ad40750';
    $display->content['new-190693f6-fbb5-4e25-9c0d-d76c5ad40750'] = $pane;
    $display->panels['main_content'][2] = 'new-190693f6-fbb5-4e25-9c0d-d76c5ad40750';
    $pane = new stdClass();
    $pane->pid = 'new-997e11a6-2a40-4181-8a92-4d0cdb904e97';
    $pane->panel = 'main_content';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_ding_page_body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '997e11a6-2a40-4181-8a92-4d0cdb904e97';
    $display->content['new-997e11a6-2a40-4181-8a92-4d0cdb904e97'] = $pane;
    $display->panels['main_content'][3] = 'new-997e11a6-2a40-4181-8a92-4d0cdb904e97';
    $pane = new stdClass();
    $pane->pid = 'new-d494bb55-5105-43cf-91ff-887f87fc9bac';
    $pane->panel = 'right_sidebar';
    $pane->type = 'campaign';
    $pane->subtype = 'campaign';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'ding_campaign_count' => 3,
      'ding_campaign_offset' => 0,
      'context' => array(
        0 => 'argument_entity_id:node_1',
        1 => 'relationship_og_node_from_group_1',
        2 => 'empty',
        3 => 'relationship_terms_from_node_1',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array(
      'method' => 'simple',
      'settings' => array(
        'lifetime' => '600',
        'granularity' => 'context',
      ),
    );
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = '';
    $pane->uuid = 'd494bb55-5105-43cf-91ff-887f87fc9bac';
    $display->content['new-d494bb55-5105-43cf-91ff-887f87fc9bac'] = $pane;
    $display->panels['right_sidebar'][0] = 'new-d494bb55-5105-43cf-91ff-887f87fc9bac';
    $pane = new stdClass();
    $pane->pid = 'new-bc06abae-4cd3-4f35-8745-0016b1f16383';
    $pane->panel = 'right_sidebar';
    $pane->type = 'block';
    $pane->subtype = 'similarterms-ding_content_tags';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = '';
    $pane->uuid = 'bc06abae-4cd3-4f35-8745-0016b1f16383';
    $display->content['new-bc06abae-4cd3-4f35-8745-0016b1f16383'] = $pane;
    $display->panels['right_sidebar'][1] = 'new-bc06abae-4cd3-4f35-8745-0016b1f16383';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_22'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_6';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -8;
  $handler->conf = array(
    'title' => 'Bibsdb Page with tags expanded',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      0 => array(
        'identifier' => 'Library',
        'keyword' => 'library_group',
        'name' => 'og_group_from_node',
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
      1 => array(
        'identifier' => 'Library node',
        'keyword' => 'library_node',
        'name' => 'og_node_from_group',
        'context' => 'relationship_og_group_from_node_1',
        'id' => 1,
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'ding_page' => 'ding_page',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'bibsdb-page',
  );
  $display = new panels_display();
  $display->layout = '25_50_25';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'left_sidebar' => NULL,
      'main_content' => NULL,
      'right_sidebar' => NULL,
      'attachment_4_1' => NULL,
      'attachment_4_2' => NULL,
      'attachment_4_3' => NULL,
      'attachment_4_4' => NULL,
      'attachment_3_1' => NULL,
      'attachment_3_2' => NULL,
      'attachment_3_3' => NULL,
      'attachment_2_1' => NULL,
      'attachment_2_2' => NULL,
      'attachment_1_1' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'fffeeb94-425b-421c-8d36-bffdbfca050e';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-54292164-9999-413b-96b8-aed650d1c180';
    $pane->panel = 'left_sidebar';
    $pane->type = 'block';
    $pane->subtype = 'menu_block-3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '54292164-9999-413b-96b8-aed650d1c180';
    $display->content['new-54292164-9999-413b-96b8-aed650d1c180'] = $pane;
    $display->panels['left_sidebar'][0] = 'new-54292164-9999-413b-96b8-aed650d1c180';
    $pane = new stdClass();
    $pane->pid = 'new-3821a1f4-d825-4723-9cd0-bc14fcfc4b98';
    $pane->panel = 'left_sidebar';
    $pane->type = 'block';
    $pane->subtype = 'og_menu-og_single_menu_block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '3821a1f4-d825-4723-9cd0-bc14fcfc4b98';
    $display->content['new-3821a1f4-d825-4723-9cd0-bc14fcfc4b98'] = $pane;
    $display->panels['left_sidebar'][1] = 'new-3821a1f4-d825-4723-9cd0-bc14fcfc4b98';
    $pane = new stdClass();
    $pane->pid = 'new-e2863167-8c81-49d8-b764-4f90602a8991';
    $pane->panel = 'main_content';
    $pane->type = 'node_content';
    $pane->subtype = 'node_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'links' => 1,
      'no_extras' => 0,
      'override_title' => 0,
      'override_title_text' => '',
      'identifier' => '',
      'link' => 0,
      'leave_node_title' => 1,
      'build_mode' => 'full',
      'context' => 'argument_entity_id:node_1',
    );
    $pane->cache = array(
      'method' => '0',
      'settings' => array(),
    );
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = '';
    $pane->uuid = 'e2863167-8c81-49d8-b764-4f90602a8991';
    $display->content['new-e2863167-8c81-49d8-b764-4f90602a8991'] = $pane;
    $display->panels['main_content'][0] = 'new-e2863167-8c81-49d8-b764-4f90602a8991';
    $pane = new stdClass();
    $pane->pid = 'new-1071671a-5ee5-4361-8547-49530f5afa54';
    $pane->panel = 'main_content';
    $pane->type = 'views_panes';
    $pane->subtype = 'bibsdb_tags_list-ding_content_tags';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(),
    );
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'bibsdb',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '1071671a-5ee5-4361-8547-49530f5afa54';
    $display->content['new-1071671a-5ee5-4361-8547-49530f5afa54'] = $pane;
    $display->panels['main_content'][1] = 'new-1071671a-5ee5-4361-8547-49530f5afa54';
    $pane = new stdClass();
    $pane->pid = 'new-316377b9-fa8e-429c-b5f7-7b692ce001f1';
    $pane->panel = 'right_sidebar';
    $pane->type = 'campaign';
    $pane->subtype = 'campaign';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'ding_campaign_count' => 3,
      'ding_campaign_offset' => 0,
      'context' => array(
        0 => 'argument_entity_id:node_1',
        1 => 'relationship_og_node_from_group_1',
        2 => 'empty',
        3 => 'relationship_terms_from_node_1',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array(
      'method' => 'simple',
      'settings' => array(
        'lifetime' => '600',
        'granularity' => 'context',
      ),
    );
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = '';
    $pane->uuid = '316377b9-fa8e-429c-b5f7-7b692ce001f1';
    $display->content['new-316377b9-fa8e-429c-b5f7-7b692ce001f1'] = $pane;
    $display->panels['right_sidebar'][0] = 'new-316377b9-fa8e-429c-b5f7-7b692ce001f1';
    $pane = new stdClass();
    $pane->pid = 'new-5f8fdbf0-0719-45ba-b845-399e1eefdb15';
    $pane->panel = 'right_sidebar';
    $pane->type = 'block';
    $pane->subtype = 'similarterms-ding_content_tags';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = '';
    $pane->uuid = '5f8fdbf0-0719-45ba-b845-399e1eefdb15';
    $display->content['new-5f8fdbf0-0719-45ba-b845-399e1eefdb15'] = $pane;
    $display->panels['right_sidebar'][1] = 'new-5f8fdbf0-0719-45ba-b845-399e1eefdb15';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_6'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_7';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -10;
  $handler->conf = array(
    'title' => ' Bibsdb Groups (OG) with tags expanded in squares',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'bibsdb-groups',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'ding_group' => 'ding_group',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = '25_50_25';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left_sidebar' => NULL,
      'main_content' => NULL,
      'right_sidebar' => NULL,
      'attachment_4_1' => NULL,
      'attachment_4_2' => NULL,
      'attachment_4_3' => NULL,
      'attachment_4_4' => NULL,
      'attachment_3_1' => NULL,
      'attachment_3_2' => NULL,
      'attachment_3_3' => NULL,
      'attachment_2_1' => NULL,
      'attachment_2_2' => NULL,
      'attachment_1_1' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'a730bd9a-79fe-449f-a92e-62c0525686b9';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-a4e73725-1615-46ac-a50e-85f39ed596bc';
    $pane->panel = 'left_sidebar';
    $pane->type = 'block';
    $pane->subtype = 'og_menu-og_single_menu_block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a4e73725-1615-46ac-a50e-85f39ed596bc';
    $display->content['new-a4e73725-1615-46ac-a50e-85f39ed596bc'] = $pane;
    $display->panels['left_sidebar'][0] = 'new-a4e73725-1615-46ac-a50e-85f39ed596bc';
    $pane = new stdClass();
    $pane->pid = 'new-f4b4e08c-4964-44e2-a2be-3e2d11f45417';
    $pane->panel = 'main_content';
    $pane->type = 'node_content';
    $pane->subtype = 'node_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'links' => 0,
      'no_extras' => 0,
      'override_title' => 1,
      'override_title_text' => '',
      'identifier' => '',
      'link' => 0,
      'leave_node_title' => 0,
      'build_mode' => 'full',
      'context' => 'argument_entity_id:node_1',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'f4b4e08c-4964-44e2-a2be-3e2d11f45417';
    $display->content['new-f4b4e08c-4964-44e2-a2be-3e2d11f45417'] = $pane;
    $display->panels['main_content'][0] = 'new-f4b4e08c-4964-44e2-a2be-3e2d11f45417';
    $pane = new stdClass();
    $pane->pid = 'new-9798ed02-1116-43f2-8f69-5e428e161efb';
    $pane->panel = 'main_content';
    $pane->type = 'views_panes';
    $pane->subtype = 'bibsdb_tags_list-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '9798ed02-1116-43f2-8f69-5e428e161efb';
    $display->content['new-9798ed02-1116-43f2-8f69-5e428e161efb'] = $pane;
    $display->panels['main_content'][1] = 'new-9798ed02-1116-43f2-8f69-5e428e161efb';
    $pane = new stdClass();
    $pane->pid = 'new-62664a00-ecd0-4aca-acb4-5193954b3e82';
    $pane->panel = 'main_content';
    $pane->type = 'views_panes';
    $pane->subtype = 'ding_news-ding_news_groups_list';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'ding-group-news',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '62664a00-ecd0-4aca-acb4-5193954b3e82';
    $display->content['new-62664a00-ecd0-4aca-acb4-5193954b3e82'] = $pane;
    $display->panels['main_content'][2] = 'new-62664a00-ecd0-4aca-acb4-5193954b3e82';
    $pane = new stdClass();
    $pane->pid = 'new-91249a13-cc0e-4c02-bf64-cba6d52ec9b7';
    $pane->panel = 'main_content';
    $pane->type = 'views_panes';
    $pane->subtype = 'ding_event-ding_event_groups_list';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'ding-group-events',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '91249a13-cc0e-4c02-bf64-cba6d52ec9b7';
    $display->content['new-91249a13-cc0e-4c02-bf64-cba6d52ec9b7'] = $pane;
    $display->panels['main_content'][3] = 'new-91249a13-cc0e-4c02-bf64-cba6d52ec9b7';
    $pane = new stdClass();
    $pane->pid = 'new-405b1983-5f68-491c-a600-12271da68189';
    $pane->panel = 'right_sidebar';
    $pane->type = 'campaign';
    $pane->subtype = 'campaign';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'ding_campaign_count' => 3,
      'ding_campaign_offset' => 0,
      'ding_campaign_image_style' => 'medium',
      'context' => array(
        0 => 'argument_entity_id:node_1',
        1 => 'empty',
        2 => 'empty',
        3 => 'empty',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '405b1983-5f68-491c-a600-12271da68189';
    $display->content['new-405b1983-5f68-491c-a600-12271da68189'] = $pane;
    $display->panels['right_sidebar'][0] = 'new-405b1983-5f68-491c-a600-12271da68189';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_7'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_9';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -27;
  $handler->conf = array(
    'title' => 'Bibsdb Library (organic group)',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => 'ding-library-front',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'ding_library' => 'ding_library',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'og_is_node_group',
          'settings' => NULL,
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'bibsdb-library',
  );
  $display = new panels_display();
  $display->layout = '25_50_25';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
      'top' => NULL,
      'middle' => NULL,
      'bottom' => NULL,
      'left_sidebar' => NULL,
      'main_content' => NULL,
      'right_sidebar' => NULL,
      'attachment_4_1' => NULL,
      'attachment_4_2' => NULL,
      'attachment_4_3' => NULL,
      'attachment_4_4' => NULL,
      'attachment_3_1' => NULL,
      'attachment_3_2' => NULL,
      'attachment_3_3' => NULL,
      'attachment_2_1' => NULL,
      'attachment_2_2' => NULL,
      'attachment_1_1' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '6400984b-b948-4d08-adfd-b66724a335f6';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-0d287021-b87d-46fa-9442-9feb8d419218';
    $pane->panel = 'left_sidebar';
    $pane->type = 'block';
    $pane->subtype = 'og_menu-og_single_menu_block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '0d287021-b87d-46fa-9442-9feb8d419218';
    $display->content['new-0d287021-b87d-46fa-9442-9feb8d419218'] = $pane;
    $display->panels['left_sidebar'][0] = 'new-0d287021-b87d-46fa-9442-9feb8d419218';
    $pane = new stdClass();
    $pane->pid = 'new-9bf8073e-1571-4b25-bd4a-928cac0881fe';
    $pane->panel = 'main_content';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_ding_library_title_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'cs_adaptive_image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => 'ding_large',
        'image_link' => '',
        'styles' => array(
          'breakpoint_1' => '768',
          'style_1' => 'ding_secondary_medium',
          'breakpoint_2' => '500',
          'style_2' => 'ding_secondary_small',
          'max_style' => 'ding_secondary_large',
          'fallback_style' => 'ding_secondary_large',
        ),
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array(
      'method' => '0',
      'settings' => array(),
    );
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'ding-library-image',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '9bf8073e-1571-4b25-bd4a-928cac0881fe';
    $display->content['new-9bf8073e-1571-4b25-bd4a-928cac0881fe'] = $pane;
    $display->panels['main_content'][0] = 'new-9bf8073e-1571-4b25-bd4a-928cac0881fe';
    $pane = new stdClass();
    $pane->pid = 'new-ab4e2b63-e2ef-485b-8ddb-48cc2b85bed9';
    $pane->panel = 'main_content';
    $pane->type = 'address';
    $pane->subtype = 'address';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'ding-library-address',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'ab4e2b63-e2ef-485b-8ddb-48cc2b85bed9';
    $display->content['new-ab4e2b63-e2ef-485b-8ddb-48cc2b85bed9'] = $pane;
    $display->panels['main_content'][1] = 'new-ab4e2b63-e2ef-485b-8ddb-48cc2b85bed9';
    $pane = new stdClass();
    $pane->pid = 'new-01c7e7f6-8601-446d-b989-1a3aee17bd57';
    $pane->panel = 'main_content';
    $pane->type = 'contact';
    $pane->subtype = 'contact';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'context' => 'argument_entity_id:node_1',
    );
    $pane->cache = array(
      'method' => 'simple',
      'settings' => array(
        'lifetime' => '600',
        'granularity' => 'context',
      ),
    );
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'ding-library-contact',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = '';
    $pane->uuid = '01c7e7f6-8601-446d-b989-1a3aee17bd57';
    $display->content['new-01c7e7f6-8601-446d-b989-1a3aee17bd57'] = $pane;
    $display->panels['main_content'][2] = 'new-01c7e7f6-8601-446d-b989-1a3aee17bd57';
    $pane = new stdClass();
    $pane->pid = 'new-0be085a2-dc59-4036-a6f1-2b7419821441';
    $pane->panel = 'main_content';
    $pane->type = 'week';
    $pane->subtype = 'week';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'hide_if_empty' => 0,
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'ding-library-opening-hours js-opening-hours-toggle-element',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '0be085a2-dc59-4036-a6f1-2b7419821441';
    $display->content['new-0be085a2-dc59-4036-a6f1-2b7419821441'] = $pane;
    $display->panels['main_content'][3] = 'new-0be085a2-dc59-4036-a6f1-2b7419821441';
    $pane = new stdClass();
    $pane->pid = 'new-d43904af-c7ff-4392-87a3-a861c0aa2695';
    $pane->panel = 'main_content';
    $pane->type = 'views_panes';
    $pane->subtype = 'ding_news-ding_news_library_list';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'ding-library-news',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'd43904af-c7ff-4392-87a3-a861c0aa2695';
    $display->content['new-d43904af-c7ff-4392-87a3-a861c0aa2695'] = $pane;
    $display->panels['main_content'][4] = 'new-d43904af-c7ff-4392-87a3-a861c0aa2695';
    $pane = new stdClass();
    $pane->pid = 'new-e1b9b6ba-763b-4d27-9ddb-86ae024fd0cc';
    $pane->panel = 'main_content';
    $pane->type = 'views_panes';
    $pane->subtype = 'ding_event-ding_event_library_list';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Library events',
      'arguments' => array(
        'og_group_ref_target_id' => '',
      ),
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'ding-library-events',
    );
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'e1b9b6ba-763b-4d27-9ddb-86ae024fd0cc';
    $display->content['new-e1b9b6ba-763b-4d27-9ddb-86ae024fd0cc'] = $pane;
    $display->panels['main_content'][5] = 'new-e1b9b6ba-763b-4d27-9ddb-86ae024fd0cc';
    $pane = new stdClass();
    $pane->pid = 'new-2c6e5401-8087-422b-957c-071df7661ca7';
    $pane->panel = 'main_content';
    $pane->type = 'views_panes';
    $pane->subtype = 'bibsdb_tags_list-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'ding-library-facilities',
    );
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '2c6e5401-8087-422b-957c-071df7661ca7';
    $display->content['new-2c6e5401-8087-422b-957c-071df7661ca7'] = $pane;
    $display->panels['main_content'][6] = 'new-2c6e5401-8087-422b-957c-071df7661ca7';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_9'] = $handler;

  return $export;
}
