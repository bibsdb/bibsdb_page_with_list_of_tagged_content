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
  $handler->display->display_options['css_class'] = 'bibsdb-facilities-list';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
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
  /* Field: Content: Body */
  $handler->display->display_options['fields']['field_ding_page_body']['id'] = 'field_ding_page_body';
  $handler->display->display_options['fields']['field_ding_page_body']['table'] = 'field_data_field_ding_page_body';
  $handler->display->display_options['fields']['field_ding_page_body']['field'] = 'field_ding_page_body';
  /* Sort criterion: Content: Weight (field_bibsdb_weight) */
  $handler->display->display_options['sorts']['field_bibsdb_weight_value']['id'] = 'field_bibsdb_weight_value';
  $handler->display->display_options['sorts']['field_bibsdb_weight_value']['table'] = 'field_data_field_bibsdb_weight';
  $handler->display->display_options['sorts']['field_bibsdb_weight_value']['field'] = 'field_bibsdb_weight_value';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Taxonomy term id from pane config */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['ui_name'] = 'Taxonomy term id from pane config';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['validate']['type'] = 'numeric';
  $handler->display->display_options['arguments']['tid']['break_phrase'] = TRUE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Tagged content in rows with argument from node */
  $handler = $view->new_display('panel_pane', 'Tagged content in rows with argument from node', 'ding_content_tags');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'bibsdb-rowlist-item';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['class'] = 'list bibsdb-rowlist';
  $handler->display->display_options['style_options']['wrapper_class'] = 'view-content';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_ding_page_list_image' => 'field_ding_page_list_image',
  );
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: List image */
  $handler->display->display_options['fields']['field_ding_page_list_image']['id'] = 'field_ding_page_list_image';
  $handler->display->display_options['fields']['field_ding_page_list_image']['table'] = 'field_data_field_ding_page_list_image';
  $handler->display->display_options['fields']['field_ding_page_list_image']['field'] = 'field_ding_page_list_image';
  $handler->display->display_options['fields']['field_ding_page_list_image']['label'] = '';
  $handler->display->display_options['fields']['field_ding_page_list_image']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_ding_page_list_image']['element_class'] = 'bibsdb-rowlist-image-wrapper';
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
  $handler->display->display_options['fields']['title']['element_class'] = 'bibsdb-rowlist-heading';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Lead - hidden */
  $handler->display->display_options['fields']['field_ding_page_lead']['id'] = 'field_ding_page_lead';
  $handler->display->display_options['fields']['field_ding_page_lead']['table'] = 'field_data_field_ding_page_lead';
  $handler->display->display_options['fields']['field_ding_page_lead']['field'] = 'field_ding_page_lead';
  $handler->display->display_options['fields']['field_ding_page_lead']['ui_name'] = 'Content: Lead - hidden';
  $handler->display->display_options['fields']['field_ding_page_lead']['label'] = '';
  $handler->display->display_options['fields']['field_ding_page_lead']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ding_page_lead']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_ding_page_lead']['element_class'] = 'bibsdb-taglist-content';
  $handler->display->display_options['fields']['field_ding_page_lead']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_page_lead']['element_default_classes'] = FALSE;
  /* Field: Content: Body - hidden */
  $handler->display->display_options['fields']['field_ding_page_body']['id'] = 'field_ding_page_body';
  $handler->display->display_options['fields']['field_ding_page_body']['table'] = 'field_data_field_ding_page_body';
  $handler->display->display_options['fields']['field_ding_page_body']['field'] = 'field_ding_page_body';
  $handler->display->display_options['fields']['field_ding_page_body']['ui_name'] = 'Content: Body - hidden';
  $handler->display->display_options['fields']['field_ding_page_body']['label'] = '';
  $handler->display->display_options['fields']['field_ding_page_body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ding_page_body']['element_label_colon'] = FALSE;
  /* Field: Lead or body */
  $handler->display->display_options['fields']['field_bibsdb_redirect_url']['id'] = 'field_bibsdb_redirect_url';
  $handler->display->display_options['fields']['field_bibsdb_redirect_url']['table'] = 'field_data_field_bibsdb_redirect_url';
  $handler->display->display_options['fields']['field_bibsdb_redirect_url']['field'] = 'field_bibsdb_redirect_url';
  $handler->display->display_options['fields']['field_bibsdb_redirect_url']['ui_name'] = 'Lead or body';
  $handler->display->display_options['fields']['field_bibsdb_redirect_url']['label'] = '';
  $handler->display->display_options['fields']['field_bibsdb_redirect_url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_bibsdb_redirect_url']['alter']['text'] = '[field_ding_page_body]';
  $handler->display->display_options['fields']['field_bibsdb_redirect_url']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_bibsdb_redirect_url']['element_class'] = 'bibsdb-rowlist-content-wrapper';
  $handler->display->display_options['fields']['field_bibsdb_redirect_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_bibsdb_redirect_url']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_bibsdb_redirect_url']['empty'] = '[field_ding_page_lead]';
  /* Field: Content: Tags */
  $handler->display->display_options['fields']['field_ding_page_tags']['id'] = 'field_ding_page_tags';
  $handler->display->display_options['fields']['field_ding_page_tags']['table'] = 'field_data_field_ding_page_tags';
  $handler->display->display_options['fields']['field_ding_page_tags']['field'] = 'field_ding_page_tags';
  $handler->display->display_options['fields']['field_ding_page_tags']['label'] = '';
  $handler->display->display_options['fields']['field_ding_page_tags']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_ding_page_tags']['element_class'] = 'bibsdb-rowlist-tags';
  $handler->display->display_options['fields']['field_ding_page_tags']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_page_tags']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_ding_page_tags']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_ding_page_tags']['separator'] = '   ';
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
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term ids from node */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['ui_name'] = 'Taxonomy term ids from node';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['break_phrase'] = TRUE;
  $handler->display->display_options['pane_title'] = 'Tagged content in rows with argument from node';
  $handler->display->display_options['pane_category']['name'] = 'Bibsdb';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'tid' => array(
      'type' => 'context',
      'context' => 'entity:node.field-bibsdb-tags-to-expand',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Tag to expand',
    ),
  );

  /* Display: Teaser in 3-col-grid with argument from node */
  $handler = $view->new_display('panel_pane', 'Teaser in 3-col-grid with argument from node', 'panel_pane_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'bibsdb-tagged-teasers-in-squares';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
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
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Title image */
  $handler->display->display_options['fields']['field_ding_page_title_image']['id'] = 'field_ding_page_title_image';
  $handler->display->display_options['fields']['field_ding_page_title_image']['table'] = 'field_data_field_ding_page_title_image';
  $handler->display->display_options['fields']['field_ding_page_title_image']['field'] = 'field_ding_page_title_image';
  $handler->display->display_options['fields']['field_ding_page_title_image']['label'] = '';
  $handler->display->display_options['fields']['field_ding_page_title_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_page_title_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_ding_page_title_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ding_page_title_image']['type'] = 'cs_adaptive_image';
  $handler->display->display_options['fields']['field_ding_page_title_image']['settings'] = array(
    'image_link' => 'content',
    'styles' => array(
      'breakpoint_1' => '768',
      'style_1' => 'ding_panorama_primary_small',
      'breakpoint_2' => '500',
      'style_2' => 'ding_panorama_primary_small',
      'max_style' => 'ding_panorama_primary_small',
      'fallback_style' => '',
    ),
  );
  /* Field: Content: Lead - hidden */
  $handler->display->display_options['fields']['field_ding_page_lead']['id'] = 'field_ding_page_lead';
  $handler->display->display_options['fields']['field_ding_page_lead']['table'] = 'field_data_field_ding_page_lead';
  $handler->display->display_options['fields']['field_ding_page_lead']['field'] = 'field_ding_page_lead';
  $handler->display->display_options['fields']['field_ding_page_lead']['ui_name'] = 'Content: Lead - hidden';
  $handler->display->display_options['fields']['field_ding_page_lead']['label'] = '';
  $handler->display->display_options['fields']['field_ding_page_lead']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ding_page_lead']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_ding_page_lead']['element_class'] = 'bibsdb-taglist-content';
  $handler->display->display_options['fields']['field_ding_page_lead']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_page_lead']['element_default_classes'] = FALSE;
  /* Field: Content: Body - hidden */
  $handler->display->display_options['fields']['field_ding_page_body']['id'] = 'field_ding_page_body';
  $handler->display->display_options['fields']['field_ding_page_body']['table'] = 'field_data_field_ding_page_body';
  $handler->display->display_options['fields']['field_ding_page_body']['field'] = 'field_ding_page_body';
  $handler->display->display_options['fields']['field_ding_page_body']['ui_name'] = 'Content: Body - hidden';
  $handler->display->display_options['fields']['field_ding_page_body']['label'] = '';
  $handler->display->display_options['fields']['field_ding_page_body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ding_page_body']['element_label_colon'] = FALSE;
  /* Field: Body or lead  */
  $handler->display->display_options['fields']['field_bibsdb_redirect_url']['id'] = 'field_bibsdb_redirect_url';
  $handler->display->display_options['fields']['field_bibsdb_redirect_url']['table'] = 'field_data_field_bibsdb_redirect_url';
  $handler->display->display_options['fields']['field_bibsdb_redirect_url']['field'] = 'field_bibsdb_redirect_url';
  $handler->display->display_options['fields']['field_bibsdb_redirect_url']['ui_name'] = 'Body or lead ';
  $handler->display->display_options['fields']['field_bibsdb_redirect_url']['label'] = '';
  $handler->display->display_options['fields']['field_bibsdb_redirect_url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_bibsdb_redirect_url']['alter']['text'] = '[field_ding_page_body]';
  $handler->display->display_options['fields']['field_bibsdb_redirect_url']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_bibsdb_redirect_url']['element_class'] = 'bibsdb-taglist-content-wrapper';
  $handler->display->display_options['fields']['field_bibsdb_redirect_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_bibsdb_redirect_url']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_bibsdb_redirect_url']['empty'] = '[field_ding_page_lead]';
  /* Field: Link til siden */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['ui_name'] = 'Link til siden';
  $handler->display->display_options['fields']['title_1']['label'] = 'Gå til';
  $handler->display->display_options['fields']['title_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['text'] = '[title]';
  $handler->display->display_options['fields']['title_1']['element_type'] = '0';
  $handler->display->display_options['fields']['title_1']['element_label_type'] = '0';
  $handler->display->display_options['fields']['title_1']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['title_1']['element_wrapper_class'] = 'bibsdb-taglist-link-wrapper';
  $handler->display->display_options['fields']['title_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term ids from node */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['ui_name'] = 'Taxonomy term ids from node';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['break_phrase'] = TRUE;
  $handler->display->display_options['pane_title'] = 'Teaser in 3-col-grid with argument from node';
  $handler->display->display_options['pane_category']['name'] = 'Bibsdb';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'tid' => array(
      'type' => 'context',
      'context' => 'entity:node.field-bibsdb-tags-to-expand',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Tag to expand',
    ),
  );

  /* Display: Facilities - library page */
  $handler = $view->new_display('panel_pane', 'Facilities - library page', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Facilities';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'bibsdb-rowlist-item';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['class'] = 'list bibsdb-rowlist';
  $handler->display->display_options['style_options']['wrapper_class'] = 'view-content';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_ding_page_list_image' => 'field_ding_page_list_image',
  );
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
  $handler->display->display_options['fields']['title']['element_type'] = 'div';
  $handler->display->display_options['fields']['title']['element_class'] = 'bibsdb-library-facility';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Link (arrow) */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['ui_name'] = 'Link (arrow)';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['view_node']['alter']['text'] = '<i class="icon-chevron-right"></i>';
  $handler->display->display_options['fields']['view_node']['element_type'] = 'div';
  $handler->display->display_options['fields']['view_node']['element_class'] = 'arrow-link-small';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Læs mere';
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
  $handler->display->display_options['pane_category']['name'] = 'Bibsdb';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['argument_input'] = array(
    'tid' => array(
      'type' => 'context',
      'context' => 'node_edit_form.field_bibsdb_tags_to_expand',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Tag to expand',
    ),
  );

  /* Display: Teaser in 3-col-grid with argument from pane */
  $handler = $view->new_display('panel_pane', 'Teaser in 3-col-grid with argument from pane', 'panel_pane_3');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'bibsdb-tagged-teasers-in-squares';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
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
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Title image */
  $handler->display->display_options['fields']['field_ding_page_title_image']['id'] = 'field_ding_page_title_image';
  $handler->display->display_options['fields']['field_ding_page_title_image']['table'] = 'field_data_field_ding_page_title_image';
  $handler->display->display_options['fields']['field_ding_page_title_image']['field'] = 'field_ding_page_title_image';
  $handler->display->display_options['fields']['field_ding_page_title_image']['label'] = '';
  $handler->display->display_options['fields']['field_ding_page_title_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_page_title_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_ding_page_title_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ding_page_title_image']['type'] = 'cs_adaptive_image';
  $handler->display->display_options['fields']['field_ding_page_title_image']['settings'] = array(
    'image_link' => 'content',
    'styles' => array(
      'breakpoint_1' => '768',
      'style_1' => 'ding_panorama_primary_small',
      'breakpoint_2' => '500',
      'style_2' => 'ding_panorama_primary_small',
      'max_style' => 'ding_panorama_primary_small',
      'fallback_style' => '',
    ),
  );
  /* Field: Content: Lead - hidden */
  $handler->display->display_options['fields']['field_ding_page_lead']['id'] = 'field_ding_page_lead';
  $handler->display->display_options['fields']['field_ding_page_lead']['table'] = 'field_data_field_ding_page_lead';
  $handler->display->display_options['fields']['field_ding_page_lead']['field'] = 'field_ding_page_lead';
  $handler->display->display_options['fields']['field_ding_page_lead']['ui_name'] = 'Content: Lead - hidden';
  $handler->display->display_options['fields']['field_ding_page_lead']['label'] = '';
  $handler->display->display_options['fields']['field_ding_page_lead']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ding_page_lead']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_ding_page_lead']['element_class'] = 'bibsdb-taglist-content';
  $handler->display->display_options['fields']['field_ding_page_lead']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_page_lead']['element_default_classes'] = FALSE;
  /* Field: Content: Body - hidden */
  $handler->display->display_options['fields']['field_ding_page_body']['id'] = 'field_ding_page_body';
  $handler->display->display_options['fields']['field_ding_page_body']['table'] = 'field_data_field_ding_page_body';
  $handler->display->display_options['fields']['field_ding_page_body']['field'] = 'field_ding_page_body';
  $handler->display->display_options['fields']['field_ding_page_body']['ui_name'] = 'Content: Body - hidden';
  $handler->display->display_options['fields']['field_ding_page_body']['label'] = '';
  $handler->display->display_options['fields']['field_ding_page_body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ding_page_body']['element_label_colon'] = FALSE;
  /* Field: Body or lead  */
  $handler->display->display_options['fields']['field_bibsdb_redirect_url']['id'] = 'field_bibsdb_redirect_url';
  $handler->display->display_options['fields']['field_bibsdb_redirect_url']['table'] = 'field_data_field_bibsdb_redirect_url';
  $handler->display->display_options['fields']['field_bibsdb_redirect_url']['field'] = 'field_bibsdb_redirect_url';
  $handler->display->display_options['fields']['field_bibsdb_redirect_url']['ui_name'] = 'Body or lead ';
  $handler->display->display_options['fields']['field_bibsdb_redirect_url']['label'] = '';
  $handler->display->display_options['fields']['field_bibsdb_redirect_url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_bibsdb_redirect_url']['alter']['text'] = '[field_ding_page_body]';
  $handler->display->display_options['fields']['field_bibsdb_redirect_url']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_bibsdb_redirect_url']['element_class'] = 'bibsdb-taglist-content-wrapper';
  $handler->display->display_options['fields']['field_bibsdb_redirect_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_bibsdb_redirect_url']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_bibsdb_redirect_url']['empty'] = '[field_ding_page_lead]';
  /* Field: Link til siden */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['ui_name'] = 'Link til siden';
  $handler->display->display_options['fields']['title_1']['label'] = 'Gå til';
  $handler->display->display_options['fields']['title_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['text'] = '[title]';
  $handler->display->display_options['fields']['title_1']['element_type'] = '0';
  $handler->display->display_options['fields']['title_1']['element_label_type'] = '0';
  $handler->display->display_options['fields']['title_1']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['title_1']['element_wrapper_class'] = 'bibsdb-taglist-link-wrapper';
  $handler->display->display_options['fields']['title_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term id from pane config */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['ui_name'] = 'Taxonomy term id from pane config';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['break_phrase'] = TRUE;
  $handler->display->display_options['pane_title'] = 'Teaser in 3-col-grid with argument from pane';
  $handler->display->display_options['pane_category']['name'] = 'Bibsdb';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'tid' => array(
      'type' => 'user',
      'context' => 'entity:node.field-bibsdb-tag-to-expand',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Tag to expand',
    ),
  );

  /* Display: Img + title - 3 col - with argument from pane */
  $handler = $view->new_display('panel_pane', 'Img + title - 3 col - with argument from pane', 'panel_pane_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'bibsdb-titles-in-squares';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'Se flere lister over nyindkøbte titler >>';
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['link_url'] = 'indhold/nyhedslister';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
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
  /* Field: Content: List Image (hidden) */
  $handler->display->display_options['fields']['field_ding_page_list_image']['id'] = 'field_ding_page_list_image';
  $handler->display->display_options['fields']['field_ding_page_list_image']['table'] = 'field_data_field_ding_page_list_image';
  $handler->display->display_options['fields']['field_ding_page_list_image']['field'] = 'field_ding_page_list_image';
  $handler->display->display_options['fields']['field_ding_page_list_image']['ui_name'] = 'Content: List Image (hidden)';
  $handler->display->display_options['fields']['field_ding_page_list_image']['label'] = '';
  $handler->display->display_options['fields']['field_ding_page_list_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ding_page_list_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_page_list_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ding_page_list_image']['type'] = 'cs_adaptive_image';
  $handler->display->display_options['fields']['field_ding_page_list_image']['settings'] = array(
    'image_link' => 'content',
    'styles' => array(
      'breakpoint_1' => '768',
      'style_1' => 'bibsdb_list_tiny',
      'breakpoint_2' => '500',
      'style_2' => 'bibsdb_list_tiny',
      'max_style' => 'bibsdb_list_tiny',
      'fallback_style' => '',
    ),
  );
  /* Field: Content: Title (hidden) */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['ui_name'] = 'Content: Title (hidden)';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Link (arrow) (hidden) */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['ui_name'] = 'Link (arrow) (hidden)';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['view_node']['alter']['text'] = '<div class="grid-arrow-link-small"><i class="icon-chevron-right"></i></div>
';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Læs mere';
  /* Field: Img + (Title + Arrow) with div-wrappers */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['ui_name'] = 'Img + (Title + Arrow) with div-wrappers';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['text'] = '<div class="item-wrapper">
[field_ding_page_list_image]
<div>
[title] 
[view_node] 
</div>

</div>';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Weight (field_bibsdb_weight) */
  $handler->display->display_options['sorts']['field_bibsdb_weight_value']['id'] = 'field_bibsdb_weight_value';
  $handler->display->display_options['sorts']['field_bibsdb_weight_value']['table'] = 'field_data_field_bibsdb_weight';
  $handler->display->display_options['sorts']['field_bibsdb_weight_value']['field'] = 'field_bibsdb_weight_value';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term id from pane config */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['ui_name'] = 'Taxonomy term id from pane config';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['break_phrase'] = TRUE;
  $handler->display->display_options['pane_title'] = 'Img + title - 3 col - with argument from pane';
  $handler->display->display_options['pane_category']['name'] = 'Bibsdb';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'tid' => array(
      'type' => 'user',
      'context' => 'entity:node.field-bibsdb-tag-to-expand',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Tag to expand',
    ),
  );

  /* Display: Teaser in 4-col-grid with argument from pane */
  $handler = $view->new_display('panel_pane', 'Teaser in 4-col-grid with argument from pane', 'panel_pane_6');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'bibsdb-tagged-teasers-in-squares';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'responsive_grid';
  $handler->display->display_options['style_options']['wrapper_classes'] = 'content-blocks--wrapper';
  $handler->display->display_options['style_options']['column_classes'] = '';
  $handler->display->display_options['style_options']['first_column_classes'] = '';
  $handler->display->display_options['style_options']['last_column_classes'] = '';
  $handler->display->display_options['style_options']['row_classes'] = 'content-blocks--inner  content-blocks--four';
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
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Title image */
  $handler->display->display_options['fields']['field_ding_page_title_image']['id'] = 'field_ding_page_title_image';
  $handler->display->display_options['fields']['field_ding_page_title_image']['table'] = 'field_data_field_ding_page_title_image';
  $handler->display->display_options['fields']['field_ding_page_title_image']['field'] = 'field_ding_page_title_image';
  $handler->display->display_options['fields']['field_ding_page_title_image']['label'] = '';
  $handler->display->display_options['fields']['field_ding_page_title_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_page_title_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_ding_page_title_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ding_page_title_image']['type'] = 'cs_adaptive_image';
  $handler->display->display_options['fields']['field_ding_page_title_image']['settings'] = array(
    'image_link' => 'content',
    'styles' => array(
      'breakpoint_1' => '768',
      'style_1' => 'ding_panorama_primary_small',
      'breakpoint_2' => '500',
      'style_2' => 'ding_panorama_primary_small',
      'max_style' => 'ding_panorama_primary_small',
      'fallback_style' => '',
    ),
  );
  /* Field: Content: Lead - hidden */
  $handler->display->display_options['fields']['field_ding_page_lead']['id'] = 'field_ding_page_lead';
  $handler->display->display_options['fields']['field_ding_page_lead']['table'] = 'field_data_field_ding_page_lead';
  $handler->display->display_options['fields']['field_ding_page_lead']['field'] = 'field_ding_page_lead';
  $handler->display->display_options['fields']['field_ding_page_lead']['ui_name'] = 'Content: Lead - hidden';
  $handler->display->display_options['fields']['field_ding_page_lead']['label'] = '';
  $handler->display->display_options['fields']['field_ding_page_lead']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ding_page_lead']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_ding_page_lead']['element_class'] = 'bibsdb-taglist-content';
  $handler->display->display_options['fields']['field_ding_page_lead']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_page_lead']['element_default_classes'] = FALSE;
  /* Field: Content: Body - hidden */
  $handler->display->display_options['fields']['field_ding_page_body']['id'] = 'field_ding_page_body';
  $handler->display->display_options['fields']['field_ding_page_body']['table'] = 'field_data_field_ding_page_body';
  $handler->display->display_options['fields']['field_ding_page_body']['field'] = 'field_ding_page_body';
  $handler->display->display_options['fields']['field_ding_page_body']['ui_name'] = 'Content: Body - hidden';
  $handler->display->display_options['fields']['field_ding_page_body']['label'] = '';
  $handler->display->display_options['fields']['field_ding_page_body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ding_page_body']['element_label_colon'] = FALSE;
  /* Field: Body or lead  */
  $handler->display->display_options['fields']['field_bibsdb_redirect_url']['id'] = 'field_bibsdb_redirect_url';
  $handler->display->display_options['fields']['field_bibsdb_redirect_url']['table'] = 'field_data_field_bibsdb_redirect_url';
  $handler->display->display_options['fields']['field_bibsdb_redirect_url']['field'] = 'field_bibsdb_redirect_url';
  $handler->display->display_options['fields']['field_bibsdb_redirect_url']['ui_name'] = 'Body or lead ';
  $handler->display->display_options['fields']['field_bibsdb_redirect_url']['label'] = '';
  $handler->display->display_options['fields']['field_bibsdb_redirect_url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_bibsdb_redirect_url']['alter']['text'] = '[field_ding_page_body]';
  $handler->display->display_options['fields']['field_bibsdb_redirect_url']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_bibsdb_redirect_url']['element_class'] = 'bibsdb-taglist-content-wrapper';
  $handler->display->display_options['fields']['field_bibsdb_redirect_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_bibsdb_redirect_url']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_bibsdb_redirect_url']['empty'] = '[field_ding_page_lead]';
  /* Field: Link til siden */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['ui_name'] = 'Link til siden';
  $handler->display->display_options['fields']['title_1']['label'] = 'Gå til';
  $handler->display->display_options['fields']['title_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['text'] = '[title]';
  $handler->display->display_options['fields']['title_1']['element_type'] = '0';
  $handler->display->display_options['fields']['title_1']['element_label_type'] = '0';
  $handler->display->display_options['fields']['title_1']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['title_1']['element_wrapper_class'] = 'bibsdb-taglist-link-wrapper';
  $handler->display->display_options['fields']['title_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term id from pane config */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['ui_name'] = 'Taxonomy term id from pane config';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['break_phrase'] = TRUE;
  $handler->display->display_options['pane_title'] = 'Teaser in 4-col-grid with argument from pane';
  $handler->display->display_options['pane_category']['name'] = 'Bibsdb';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'tid' => array(
      'type' => 'user',
      'context' => 'entity:node.field-bibsdb-tag-to-expand',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Tag to expand',
    ),
  );

  /* Display: Inspirationslister in 6-col-grid with argument from pane */
  $handler = $view->new_display('panel_pane', 'Inspirationslister in 6-col-grid with argument from pane', 'panel_pane_7');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'bibsdb-inspirationslister-6-col';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'Se alle inspirationsfoldere >>';
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['link_url'] = 'indhold/inspirationslister';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '12';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'responsive_grid';
  $handler->display->display_options['style_options']['columns'] = '6';
  $handler->display->display_options['style_options']['wrapper_classes'] = 'content-blocks--wrapper';
  $handler->display->display_options['style_options']['column_classes'] = '';
  $handler->display->display_options['style_options']['first_column_classes'] = '';
  $handler->display->display_options['style_options']['last_column_classes'] = 'last-col';
  $handler->display->display_options['style_options']['row_classes'] = 'content-blocks--inner  content-blocks--six';
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
  /* Field: Content: List image */
  $handler->display->display_options['fields']['field_ding_page_list_image']['id'] = 'field_ding_page_list_image';
  $handler->display->display_options['fields']['field_ding_page_list_image']['table'] = 'field_data_field_ding_page_list_image';
  $handler->display->display_options['fields']['field_ding_page_list_image']['field'] = 'field_ding_page_list_image';
  $handler->display->display_options['fields']['field_ding_page_list_image']['label'] = '';
  $handler->display->display_options['fields']['field_ding_page_list_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_page_list_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ding_page_list_image']['type'] = 'cs_adaptive_image';
  $handler->display->display_options['fields']['field_ding_page_list_image']['settings'] = array(
    'image_link' => 'content',
    'styles' => array(
      'breakpoint_1' => '768',
      'style_1' => 'bibsdb_list_large',
      'breakpoint_2' => '512',
      'style_2' => 'bibsdb_list_small',
      'max_style' => 'ding_primary_large',
      'fallback_style' => '',
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h4';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Lead - hidden */
  $handler->display->display_options['fields']['field_ding_page_lead']['id'] = 'field_ding_page_lead';
  $handler->display->display_options['fields']['field_ding_page_lead']['table'] = 'field_data_field_ding_page_lead';
  $handler->display->display_options['fields']['field_ding_page_lead']['field'] = 'field_ding_page_lead';
  $handler->display->display_options['fields']['field_ding_page_lead']['ui_name'] = 'Content: Lead - hidden';
  $handler->display->display_options['fields']['field_ding_page_lead']['label'] = '';
  $handler->display->display_options['fields']['field_ding_page_lead']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ding_page_lead']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_ding_page_lead']['element_class'] = 'bibsdb-taglist-content';
  $handler->display->display_options['fields']['field_ding_page_lead']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_page_lead']['element_default_classes'] = FALSE;
  /* Field: Content: Body - hidden */
  $handler->display->display_options['fields']['field_ding_page_body']['id'] = 'field_ding_page_body';
  $handler->display->display_options['fields']['field_ding_page_body']['table'] = 'field_data_field_ding_page_body';
  $handler->display->display_options['fields']['field_ding_page_body']['field'] = 'field_ding_page_body';
  $handler->display->display_options['fields']['field_ding_page_body']['ui_name'] = 'Content: Body - hidden';
  $handler->display->display_options['fields']['field_ding_page_body']['label'] = '';
  $handler->display->display_options['fields']['field_ding_page_body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ding_page_body']['element_label_colon'] = FALSE;
  /* Field: Body or lead  */
  $handler->display->display_options['fields']['field_bibsdb_redirect_url']['id'] = 'field_bibsdb_redirect_url';
  $handler->display->display_options['fields']['field_bibsdb_redirect_url']['table'] = 'field_data_field_bibsdb_redirect_url';
  $handler->display->display_options['fields']['field_bibsdb_redirect_url']['field'] = 'field_bibsdb_redirect_url';
  $handler->display->display_options['fields']['field_bibsdb_redirect_url']['ui_name'] = 'Body or lead ';
  $handler->display->display_options['fields']['field_bibsdb_redirect_url']['label'] = '';
  $handler->display->display_options['fields']['field_bibsdb_redirect_url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_bibsdb_redirect_url']['alter']['text'] = '[field_ding_page_body]';
  $handler->display->display_options['fields']['field_bibsdb_redirect_url']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_bibsdb_redirect_url']['element_class'] = 'bibsdb-taglist-content-wrapper';
  $handler->display->display_options['fields']['field_bibsdb_redirect_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_bibsdb_redirect_url']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_bibsdb_redirect_url']['empty'] = '[field_ding_page_lead]';
  /* Field: Link til siden */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['ui_name'] = 'Link til siden';
  $handler->display->display_options['fields']['title_1']['label'] = 'Hent folder';
  $handler->display->display_options['fields']['title_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['text'] = '[title]';
  $handler->display->display_options['fields']['title_1']['element_type'] = '0';
  $handler->display->display_options['fields']['title_1']['element_label_type'] = '0';
  $handler->display->display_options['fields']['title_1']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['title_1']['element_wrapper_class'] = 'bibsdb-taglist-link-wrapper';
  $handler->display->display_options['fields']['title_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term id from pane config */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['ui_name'] = 'Taxonomy term id from pane config';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['break_phrase'] = TRUE;
  $handler->display->display_options['pane_title'] = 'Inspirationslister in 6-col-grid with argument from pane';
  $handler->display->display_options['pane_category']['name'] = 'Bibsdb';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'tid' => array(
      'type' => 'user',
      'context' => 'entity:node.field-bibsdb-tag-to-expand',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Tag to expand',
    ),
  );

  /* Display: Tagged content in rows with argument from pane */
  $handler = $view->new_display('panel_pane', 'Tagged content in rows with argument from pane', 'panel_pane_9');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'bibsdb-rowlist-item';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['class'] = 'list bibsdb-rowlist';
  $handler->display->display_options['style_options']['wrapper_class'] = 'view-content';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_ding_page_list_image' => 'field_ding_page_list_image',
  );
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: List image */
  $handler->display->display_options['fields']['field_ding_page_list_image']['id'] = 'field_ding_page_list_image';
  $handler->display->display_options['fields']['field_ding_page_list_image']['table'] = 'field_data_field_ding_page_list_image';
  $handler->display->display_options['fields']['field_ding_page_list_image']['field'] = 'field_ding_page_list_image';
  $handler->display->display_options['fields']['field_ding_page_list_image']['label'] = '';
  $handler->display->display_options['fields']['field_ding_page_list_image']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_ding_page_list_image']['element_class'] = 'bibsdb-rowlist-image-wrapper';
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
  $handler->display->display_options['fields']['title']['element_class'] = 'bibsdb-rowlist-heading';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Lead - hidden */
  $handler->display->display_options['fields']['field_ding_page_lead']['id'] = 'field_ding_page_lead';
  $handler->display->display_options['fields']['field_ding_page_lead']['table'] = 'field_data_field_ding_page_lead';
  $handler->display->display_options['fields']['field_ding_page_lead']['field'] = 'field_ding_page_lead';
  $handler->display->display_options['fields']['field_ding_page_lead']['ui_name'] = 'Content: Lead - hidden';
  $handler->display->display_options['fields']['field_ding_page_lead']['label'] = '';
  $handler->display->display_options['fields']['field_ding_page_lead']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ding_page_lead']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_ding_page_lead']['element_class'] = 'bibsdb-taglist-content';
  $handler->display->display_options['fields']['field_ding_page_lead']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_page_lead']['element_default_classes'] = FALSE;
  /* Field: Content: Body - hidden */
  $handler->display->display_options['fields']['field_ding_page_body']['id'] = 'field_ding_page_body';
  $handler->display->display_options['fields']['field_ding_page_body']['table'] = 'field_data_field_ding_page_body';
  $handler->display->display_options['fields']['field_ding_page_body']['field'] = 'field_ding_page_body';
  $handler->display->display_options['fields']['field_ding_page_body']['ui_name'] = 'Content: Body - hidden';
  $handler->display->display_options['fields']['field_ding_page_body']['label'] = '';
  $handler->display->display_options['fields']['field_ding_page_body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ding_page_body']['element_label_colon'] = FALSE;
  /* Field: Lead or body */
  $handler->display->display_options['fields']['field_bibsdb_redirect_url']['id'] = 'field_bibsdb_redirect_url';
  $handler->display->display_options['fields']['field_bibsdb_redirect_url']['table'] = 'field_data_field_bibsdb_redirect_url';
  $handler->display->display_options['fields']['field_bibsdb_redirect_url']['field'] = 'field_bibsdb_redirect_url';
  $handler->display->display_options['fields']['field_bibsdb_redirect_url']['ui_name'] = 'Lead or body';
  $handler->display->display_options['fields']['field_bibsdb_redirect_url']['label'] = '';
  $handler->display->display_options['fields']['field_bibsdb_redirect_url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_bibsdb_redirect_url']['alter']['text'] = '[field_ding_page_body]';
  $handler->display->display_options['fields']['field_bibsdb_redirect_url']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_bibsdb_redirect_url']['element_class'] = 'bibsdb-rowlist-content-wrapper';
  $handler->display->display_options['fields']['field_bibsdb_redirect_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_bibsdb_redirect_url']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_bibsdb_redirect_url']['empty'] = '[field_ding_page_lead]';
  /* Field: Content: Tags */
  $handler->display->display_options['fields']['field_ding_page_tags']['id'] = 'field_ding_page_tags';
  $handler->display->display_options['fields']['field_ding_page_tags']['table'] = 'field_data_field_ding_page_tags';
  $handler->display->display_options['fields']['field_ding_page_tags']['field'] = 'field_ding_page_tags';
  $handler->display->display_options['fields']['field_ding_page_tags']['label'] = '';
  $handler->display->display_options['fields']['field_ding_page_tags']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_ding_page_tags']['element_class'] = 'bibsdb-rowlist-tags';
  $handler->display->display_options['fields']['field_ding_page_tags']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_page_tags']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_ding_page_tags']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_ding_page_tags']['separator'] = ' ';
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
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term ids from pane config */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['ui_name'] = 'Taxonomy term ids from pane config';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['break_phrase'] = TRUE;
  $handler->display->display_options['pane_title'] = 'Tagged content in rows with argument from pane';
  $handler->display->display_options['pane_category']['name'] = 'Bibsdb';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'tid' => array(
      'type' => 'user',
      'context' => 'entity:node.field-bibsdb-tag-to-expand',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Tag to expand',
    ),
  );

  /* Display: Teaser in 2-col-grid with argument from pane */
  $handler = $view->new_display('panel_pane', 'Teaser in 2-col-grid with argument from pane', 'panel_pane_5');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'bibsdb-tagged-teasers-in-squares';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'responsive_grid';
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['style_options']['wrapper_classes'] = 'content-blocks--wrapper';
  $handler->display->display_options['style_options']['column_classes'] = '';
  $handler->display->display_options['style_options']['first_column_classes'] = '';
  $handler->display->display_options['style_options']['last_column_classes'] = '';
  $handler->display->display_options['style_options']['row_classes'] = 'content-blocks--inner  content-blocks--two';
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
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Title image */
  $handler->display->display_options['fields']['field_ding_page_title_image']['id'] = 'field_ding_page_title_image';
  $handler->display->display_options['fields']['field_ding_page_title_image']['table'] = 'field_data_field_ding_page_title_image';
  $handler->display->display_options['fields']['field_ding_page_title_image']['field'] = 'field_ding_page_title_image';
  $handler->display->display_options['fields']['field_ding_page_title_image']['label'] = '';
  $handler->display->display_options['fields']['field_ding_page_title_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_page_title_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_ding_page_title_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ding_page_title_image']['type'] = 'cs_adaptive_image';
  $handler->display->display_options['fields']['field_ding_page_title_image']['settings'] = array(
    'image_link' => 'content',
    'styles' => array(
      'breakpoint_1' => '768',
      'style_1' => 'ding_panorama_primary_small',
      'breakpoint_2' => '500',
      'style_2' => 'ding_panorama_primary_small',
      'max_style' => 'ding_panorama_primary_small',
      'fallback_style' => '',
    ),
  );
  /* Field: Content: Lead - hidden */
  $handler->display->display_options['fields']['field_ding_page_lead']['id'] = 'field_ding_page_lead';
  $handler->display->display_options['fields']['field_ding_page_lead']['table'] = 'field_data_field_ding_page_lead';
  $handler->display->display_options['fields']['field_ding_page_lead']['field'] = 'field_ding_page_lead';
  $handler->display->display_options['fields']['field_ding_page_lead']['ui_name'] = 'Content: Lead - hidden';
  $handler->display->display_options['fields']['field_ding_page_lead']['label'] = '';
  $handler->display->display_options['fields']['field_ding_page_lead']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ding_page_lead']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_ding_page_lead']['element_class'] = 'bibsdb-taglist-content';
  $handler->display->display_options['fields']['field_ding_page_lead']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_page_lead']['element_default_classes'] = FALSE;
  /* Field: Content: Body - hidden */
  $handler->display->display_options['fields']['field_ding_page_body']['id'] = 'field_ding_page_body';
  $handler->display->display_options['fields']['field_ding_page_body']['table'] = 'field_data_field_ding_page_body';
  $handler->display->display_options['fields']['field_ding_page_body']['field'] = 'field_ding_page_body';
  $handler->display->display_options['fields']['field_ding_page_body']['ui_name'] = 'Content: Body - hidden';
  $handler->display->display_options['fields']['field_ding_page_body']['label'] = '';
  $handler->display->display_options['fields']['field_ding_page_body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ding_page_body']['element_label_colon'] = FALSE;
  /* Field: Body or lead  */
  $handler->display->display_options['fields']['field_bibsdb_redirect_url']['id'] = 'field_bibsdb_redirect_url';
  $handler->display->display_options['fields']['field_bibsdb_redirect_url']['table'] = 'field_data_field_bibsdb_redirect_url';
  $handler->display->display_options['fields']['field_bibsdb_redirect_url']['field'] = 'field_bibsdb_redirect_url';
  $handler->display->display_options['fields']['field_bibsdb_redirect_url']['ui_name'] = 'Body or lead ';
  $handler->display->display_options['fields']['field_bibsdb_redirect_url']['label'] = '';
  $handler->display->display_options['fields']['field_bibsdb_redirect_url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_bibsdb_redirect_url']['alter']['text'] = '[field_ding_page_body]';
  $handler->display->display_options['fields']['field_bibsdb_redirect_url']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_bibsdb_redirect_url']['element_class'] = 'bibsdb-taglist-content-wrapper';
  $handler->display->display_options['fields']['field_bibsdb_redirect_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_bibsdb_redirect_url']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_bibsdb_redirect_url']['empty'] = '[field_ding_page_lead]';
  /* Field: Link til siden */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['ui_name'] = 'Link til siden';
  $handler->display->display_options['fields']['title_1']['label'] = 'Gå til';
  $handler->display->display_options['fields']['title_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['text'] = '[title]';
  $handler->display->display_options['fields']['title_1']['element_type'] = '0';
  $handler->display->display_options['fields']['title_1']['element_label_type'] = '0';
  $handler->display->display_options['fields']['title_1']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['title_1']['element_wrapper_class'] = 'bibsdb-taglist-link-wrapper';
  $handler->display->display_options['fields']['title_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term id from pane config */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['ui_name'] = 'Taxonomy term id from pane config';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['break_phrase'] = TRUE;
  $handler->display->display_options['pane_title'] = 'Teaser in 2-col-grid with argument from pane';
  $handler->display->display_options['pane_category']['name'] = 'Bibsdb';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'tid' => array(
      'type' => 'user',
      'context' => 'entity:node.field-bibsdb-tag-to-expand',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Tag to expand',
    ),
  );

  /* Display: Teaser in 1-col-grid with argument from pane */
  $handler = $view->new_display('panel_pane', 'Teaser in 1-col-grid with argument from pane', 'panel_pane_8');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'bibsdb-tagged-teasers-in-squares';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'responsive_grid';
  $handler->display->display_options['style_options']['columns'] = '1';
  $handler->display->display_options['style_options']['wrapper_classes'] = 'content-blocks--wrapper';
  $handler->display->display_options['style_options']['column_classes'] = '';
  $handler->display->display_options['style_options']['first_column_classes'] = '';
  $handler->display->display_options['style_options']['last_column_classes'] = '';
  $handler->display->display_options['style_options']['row_classes'] = 'content-blocks--inner  content-blocks--one';
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
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Title image */
  $handler->display->display_options['fields']['field_ding_page_title_image']['id'] = 'field_ding_page_title_image';
  $handler->display->display_options['fields']['field_ding_page_title_image']['table'] = 'field_data_field_ding_page_title_image';
  $handler->display->display_options['fields']['field_ding_page_title_image']['field'] = 'field_ding_page_title_image';
  $handler->display->display_options['fields']['field_ding_page_title_image']['label'] = '';
  $handler->display->display_options['fields']['field_ding_page_title_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_page_title_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_ding_page_title_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ding_page_title_image']['type'] = 'cs_adaptive_image';
  $handler->display->display_options['fields']['field_ding_page_title_image']['settings'] = array(
    'image_link' => 'content',
    'styles' => array(
      'breakpoint_1' => '768',
      'style_1' => 'ding_panorama_primary_medium',
      'breakpoint_2' => '500',
      'style_2' => 'ding_panorama_primary_small',
      'max_style' => 'ding_panorama_primary_large',
      'fallback_style' => '',
    ),
  );
  /* Field: Content: Lead - hidden */
  $handler->display->display_options['fields']['field_ding_page_lead']['id'] = 'field_ding_page_lead';
  $handler->display->display_options['fields']['field_ding_page_lead']['table'] = 'field_data_field_ding_page_lead';
  $handler->display->display_options['fields']['field_ding_page_lead']['field'] = 'field_ding_page_lead';
  $handler->display->display_options['fields']['field_ding_page_lead']['ui_name'] = 'Content: Lead - hidden';
  $handler->display->display_options['fields']['field_ding_page_lead']['label'] = '';
  $handler->display->display_options['fields']['field_ding_page_lead']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ding_page_lead']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_ding_page_lead']['element_class'] = 'bibsdb-taglist-content';
  $handler->display->display_options['fields']['field_ding_page_lead']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_page_lead']['element_default_classes'] = FALSE;
  /* Field: Content: Body - hidden */
  $handler->display->display_options['fields']['field_ding_page_body']['id'] = 'field_ding_page_body';
  $handler->display->display_options['fields']['field_ding_page_body']['table'] = 'field_data_field_ding_page_body';
  $handler->display->display_options['fields']['field_ding_page_body']['field'] = 'field_ding_page_body';
  $handler->display->display_options['fields']['field_ding_page_body']['ui_name'] = 'Content: Body - hidden';
  $handler->display->display_options['fields']['field_ding_page_body']['label'] = '';
  $handler->display->display_options['fields']['field_ding_page_body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ding_page_body']['element_label_colon'] = FALSE;
  /* Field: Body or lead  */
  $handler->display->display_options['fields']['field_bibsdb_redirect_url']['id'] = 'field_bibsdb_redirect_url';
  $handler->display->display_options['fields']['field_bibsdb_redirect_url']['table'] = 'field_data_field_bibsdb_redirect_url';
  $handler->display->display_options['fields']['field_bibsdb_redirect_url']['field'] = 'field_bibsdb_redirect_url';
  $handler->display->display_options['fields']['field_bibsdb_redirect_url']['ui_name'] = 'Body or lead ';
  $handler->display->display_options['fields']['field_bibsdb_redirect_url']['label'] = '';
  $handler->display->display_options['fields']['field_bibsdb_redirect_url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_bibsdb_redirect_url']['alter']['text'] = '[field_ding_page_body]';
  $handler->display->display_options['fields']['field_bibsdb_redirect_url']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_bibsdb_redirect_url']['element_class'] = 'bibsdb-taglist-content-wrapper';
  $handler->display->display_options['fields']['field_bibsdb_redirect_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_bibsdb_redirect_url']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_bibsdb_redirect_url']['empty'] = '[field_ding_page_lead]';
  /* Field: Link til siden */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['ui_name'] = 'Link til siden';
  $handler->display->display_options['fields']['title_1']['label'] = 'Gå til';
  $handler->display->display_options['fields']['title_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['text'] = '[title]';
  $handler->display->display_options['fields']['title_1']['element_type'] = '0';
  $handler->display->display_options['fields']['title_1']['element_label_type'] = '0';
  $handler->display->display_options['fields']['title_1']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['title_1']['element_wrapper_class'] = 'bibsdb-taglist-link-wrapper';
  $handler->display->display_options['fields']['title_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term id from pane config */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['ui_name'] = 'Taxonomy term id from pane config';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['break_phrase'] = TRUE;
  $handler->display->display_options['pane_title'] = 'Teaser in 1-col-grid with argument from pane';
  $handler->display->display_options['pane_category']['name'] = 'Bibsdb';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'tid' => array(
      'type' => 'user',
      'context' => 'entity:node.field-bibsdb-tag-to-expand',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Tag to expand',
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
    t('Body'),
    t('All'),
    t('Tagged content in rows with argument from node'),
    t('[field_ding_page_body]'),
    t('[field_ding_page_lead]'),
    t('Bibsdb'),
    t('Teaser in 3-col-grid with argument from node'),
    t('Gå til'),
    t('[title]'),
    t('Facilities - library page'),
    t('Facilities'),
    t('Bibsdb - Facilities - Library Page'),
    t('Teaser in 3-col-grid with argument from pane'),
    t('Img + title - 3 col - with argument from pane'),
    t('Se flere lister over nyindkøbte titler >>'),
    t('<div class="grid-arrow-link-small"><i class="icon-chevron-right"></i></div>
'),
    t('<div class="item-wrapper">
[field_ding_page_list_image]
<div>
[title] 
[view_node] 
</div>

</div>'),
    t('Teaser in 4-col-grid with argument from pane'),
    t('Inspirationslister in 6-col-grid with argument from pane'),
    t('Se alle inspirationsfoldere >>'),
    t('Hent folder'),
    t('Tagged content in rows with argument from pane'),
    t('Teaser in 2-col-grid with argument from pane'),
    t('Teaser in 1-col-grid with argument from pane'),
  );
  $export['bibsdb_tags_list'] = $view;

  return $export;
}
