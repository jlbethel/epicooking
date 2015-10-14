<?php
/**
 * @file
 * product_reviews.features.inc
 */

/**
 * Implements hook_node_info().
 */
function product_reviews_node_info() {
  $items = array(
    'product_reviews' => array(
      'name' => t('Product Reviews'),
      'base' => 'node_content',
      'description' => t('Product Reviews'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
