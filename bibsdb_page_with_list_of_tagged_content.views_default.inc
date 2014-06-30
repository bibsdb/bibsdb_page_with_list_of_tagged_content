<?php
/**
 * @file
 * bibsdb_page_with_list_of_tagged_content.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function bibsdb_page_with_list_of_tagged_content_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'bibsdb_tags_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Bibsdb Tags list';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'view-node-search-result';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'bibsdb-taglist-item';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['class'] = 'list bibsdb-taglist';
  $handler->display->display_options['style_options']['wrapper_class'] = 'view-content';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_ding_page_list_image' => 'field_ding_page_list_image',
  );
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Content: List image */
  $handler->display->display_options['fields']['field_ding_page_list_image']['id'] = 'field_ding_page_list_image';
  $handler->display->display_options['fields']['field_ding_page_list_image']['table'] = 'field_data_field_ding_page_list_image';
  $handler->display->display_options['fields']['field_ding_page_list_image']['field'] = 'field_ding_page_list_image';
  $handler->display->display_options['fields']['field_ding_page_list_image']['label'] = '';
  $handler->display->display_options['fields']['field_ding_page_list_image']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_ding_page_list_image']['element_class'] = 'bibsdb-taglist-image-wrapper';
  $handler->display->display_options['fields']['field_ding_page_list_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_page_list_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_ding_page_list_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ding_page_list_image']['type'] = 'cs_adaptive_image';
  $handler->display->display_options['fields']['field_ding_page_list_image']['settings'] = array(
    'image_link' => 'content',
    'styles' => array(
      'breakpoint_1' => '768',
      'style_1' => 'bibsdb_list_medium',
      'breakpoint_2' => '500',
      'style_2' => 'bibsdb_list_small',
      'max_style' => 'bibsdb_list_large',
      'fallback_style' => 'bibsdb_list_large',
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_class'] = 'bibsdb-taglist-heading';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Lead */
  $handler->display->display_options['fields']['field_ding_page_lead']['id'] = 'field_ding_page_lead';
  $handler->display->display_options['fields']['field_ding_page_lead']['table'] = 'field_data_field_ding_page_lead';
  $handler->display->display_options['fields']['field_ding_page_lead']['field'] = 'field_ding_page_lead';
  $handler->display->display_options['fields']['field_ding_page_lead']['label'] = '';
  $handler->display->display_options['fields']['field_ding_page_lead']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_ding_page_lead']['element_class'] = 'bibsdb-taglist-content';
  $handler->display->display_options['fields']['field_ding_page_lead']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_page_lead']['element_default_classes'] = FALSE;
  /* Field: Link (arrow) */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['ui_name'] = 'Link (arrow)';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['view_node']['alter']['text'] = '<i class="icon-chevron-right"></i>';
  $handler->display->display_options['fields']['view_node']['element_type'] = 'div';
  $handler->display->display_options['fields']['view_node']['element_class'] = 'arrow-link';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Læs mere';
  /* Sort criterion: Content: Weight (field_bibsdb_weight) */
  $handler->display->display_options['sorts']['field_bibsdb_weight_value']['id'] = 'field_bibsdb_weight_value';
  $handler->display->display_options['sorts']['field_bibsdb_weight_value']['table'] = 'field_data_field_bibsdb_weight';
  $handler->display->display_options['sorts']['field_bibsdb_weight_value']['field'] = 'field_bibsdb_weight_value';
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['validate']['type'] = 'numeric';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Tagged content in rows */
  $handler = $view->new_display('panel_pane', 'Tagged content in rows', 'ding_content_tags');
  $handler->display->display_options['pane_title'] = 'Bibsdb - Nodes based on tag in rows';
  $handler->display->display_options['pane_category']['name'] = 'Taxonomy term';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['argument_input'] = array(
    'tid' => array(
      'type' => 'context',
      'context' => 'entity:node.field-bibsdb-tag-to-expand',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Tag to expand',
    ),
  );

  /* Display: Tagged content in squares */
  $handler = $view->new_display('panel_pane', 'Tagged content in squares', 'panel_pane_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'responsive_grid';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['style_options']['wrapper_classes'] = 'content-blocks--wrapper';
  $handler->display->display_options['style_options']['column_classes'] = '';
  $handler->display->display_options['style_options']['first_column_classes'] = '';
  $handler->display->display_options['style_options']['last_column_classes'] = '';
  $handler->display->display_options['style_options']['row_classes'] = 'content-blocks--inner  content-blocks--three';
  $handler->display->display_options['style_options']['first_row_classes'] = '';
  $handler->display->display_options['style_options']['last_row_classes'] = 'last';
  $handler->display->display_options['style_options']['default_classes'] = 1;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_class'] = 'bibsdb-taglist-heading';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Title image */
  $handler->display->display_options['fields']['field_ding_page_title_image']['id'] = 'field_ding_page_title_image';
  $handler->display->display_options['fields']['field_ding_page_title_image']['table'] = 'field_data_field_ding_page_title_image';
  $handler->display->display_options['fields']['field_ding_page_title_image']['field'] = 'field_ding_page_title_image';
  $handler->display->display_options['fields']['field_ding_page_title_image']['label'] = '';
  $handler->display->display_options['fields']['field_ding_page_title_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_page_title_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ding_page_title_image']['type'] = 'cs_adaptive_image';
  $handler->display->display_options['fields']['field_ding_page_title_image']['settings'] = array(
    'image_link' => 'content',
    'styles' => array(
      'breakpoint_1' => '768',
      'style_1' => 'ding_panorama_primary_small',
      'breakpoint_2' => '512',
      'style_2' => 'ding_panorama_primary_small',
      'max_style' => 'ding_panorama_primary_small',
      'fallback_style' => 'ding_panorama_primary_small',
    ),
  );
  /* Field: Content: Lead */
  $handler->display->display_options['fields']['field_ding_page_lead']['id'] = 'field_ding_page_lead';
  $handler->display->display_options['fields']['field_ding_page_lead']['table'] = 'field_data_field_ding_page_lead';
  $handler->display->display_options['fields']['field_ding_page_lead']['field'] = 'field_ding_page_lead';
  $handler->display->display_options['fields']['field_ding_page_lead']['label'] = '';
  $handler->display->display_options['fields']['field_ding_page_lead']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_ding_page_lead']['element_class'] = 'bibsdb-taglist-content';
  $handler->display->display_options['fields']['field_ding_page_lead']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_page_lead']['element_default_classes'] = FALSE;
  /* Field: Link til siden */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['ui_name'] = 'Link til siden';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['text'] = 'Gå til [title]';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['pane_title'] = 'Bibsdb - Nodes based on tags in squares';
  $handler->display->display_options['pane_category']['name'] = 'Taxonomy term';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['argument_input'] = array(
    'tid' => array(
      'type' => 'context',
      'context' => 'entity:node.field-bibsdb-tag-to-expand',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Tag to expand',
    ),
  );

  /* Display: Facilities - library page */
  $handler = $view->new_display('panel_pane', 'Facilities - library page', 'panel_pane_2');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Tags (field_ding_page_tags) */
  $handler->display->display_options['filters']['field_ding_page_tags_tid']['id'] = 'field_ding_page_tags_tid';
  $handler->display->display_options['filters']['field_ding_page_tags_tid']['table'] = 'field_data_field_ding_page_tags';
  $handler->display->display_options['filters']['field_ding_page_tags_tid']['field'] = 'field_ding_page_tags_tid';
  $handler->display->display_options['filters']['field_ding_page_tags_tid']['value'] = array(
    0 => '85',
  );
  $handler->display->display_options['filters']['field_ding_page_tags_tid']['vocabulary'] = 'ding_content_tags';
  $handler->display->display_options['pane_title'] = 'Bibsdb - Facilities - Library Page';
  $handler->display->display_options['pane_category']['name'] = 'Taxonomy term';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['argument_input'] = array(
    'tid' => array(
      'type' => 'context',
      'context' => 'entity:node.field-bibsdb-tag-to-expand',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Tag to expand',
    ),
  );
  $translatables['bibsdb_tags_list'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('<i class="icon-chevron-right"></i>'),
    t('Læs mere'),
    t('All'),
    t('Tagged content in rows'),
    t('Bibsdb - Nodes based on tag in rows'),
    t('Taxonomy term'),
    t('Tagged content in squares'),
    t('Gå til [title]'),
    t('Bibsdb - Nodes based on tags in squares'),
    t('Facilities - library page'),
    t('Bibsdb - Facilities - Library Page'),
  );
  $export['bibsdb_tags_list'] = $view;

  return $export;
}