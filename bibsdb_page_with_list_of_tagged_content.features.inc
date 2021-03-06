<?php
/**
 * @file
 * bibsdb_page_with_list_of_tagged_content.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function bibsdb_page_with_list_of_tagged_content_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function bibsdb_page_with_list_of_tagged_content_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_page_manager_handlers_alter().
 */
function bibsdb_page_with_list_of_tagged_content_default_page_manager_handlers_alter(&$data) {
  if (isset($data['node_view_panel_context_3'])) {
    $data['node_view_panel_context_3']->weight = -26; /* WAS: -27 */
  }
  if (isset($data['node_view_panel_context_4'])) {
    $data['node_view_panel_context_4']->weight = 29; /* WAS: -26 */
  }
  if (isset($data['node_view_panel_context_5'])) {
    $data['node_view_panel_context_5']->weight = -8; /* WAS: -25 */
  }
}

/**
 * Implements hook_image_default_styles().
 */
function bibsdb_page_with_list_of_tagged_content_image_default_styles() {
  $styles = array();

  // Exported image style: bibsdb_list_large.
  $styles['bibsdb_list_large'] = array(
    'name' => 'bibsdb_list_large',
    'label' => 'bibsdb_list_large',
    'effects' => array(
      1 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 150,
          'height' => 150,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: bibsdb_list_medium.
  $styles['bibsdb_list_medium'] = array(
    'name' => 'bibsdb_list_medium',
    'label' => 'bibsdb_list_medium',
    'effects' => array(
      3 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 120,
          'height' => 120,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: bibsdb_list_small.
  $styles['bibsdb_list_small'] = array(
    'name' => 'bibsdb_list_small',
    'label' => 'bibsdb_list_small',
    'effects' => array(
      2 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 100,
          'height' => 100,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: bibsdb_list_tiny.
  $styles['bibsdb_list_tiny'] = array(
    'name' => 'bibsdb_list_tiny',
    'label' => 'bibsdb_list_tiny',
    'effects' => array(
      1 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 70,
          'height' => 70,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
