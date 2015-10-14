<?php
/**
 * @file
 * technique.features.inc
 */

/**
 * Implements hook_node_info().
 */
function technique_node_info() {
  $items = array(
    'technique' => array(
      'name' => t('Technique'),
      'base' => 'node_content',
      'description' => t('Cooking technique'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
