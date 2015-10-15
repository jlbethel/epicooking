<?php
/**
 * @file
 * wholesite.features.inc
 */

/**
 * Implements hook_views_api().
 */
function wholesite_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_fontyourface_features_default_font().
 */
function wholesite_fontyourface_features_default_font() {
  return array(
    'Raleway 300 (latin)' => array(
      'name' => 'Raleway 300 (latin)',
      'enabled' => 1,
      'url' => 'http://www.google.com/webfonts/family?family=Raleway&subset=latin#300',
      'provider' => 'google_fonts_api',
      'css_selector' => 'h1#site-title, h2.article-title, h1.page-title',
      'css_family' => 'Raleway',
      'css_style' => 'normal',
      'css_weight' => 300,
      'css_fallbacks' => '',
      'foundry' => '',
      'foundry_url' => '',
      'license' => '',
      'license_url' => '',
      'designer' => '',
      'designer_url' => '',
      'metadata' => 'a:2:{s:4:"path";s:11:"Raleway:300";s:6:"subset";s:5:"latin";}',
    ),
  );
}

/**
 * Implements hook_node_info().
 */
function wholesite_node_info() {
  $items = array(
    'article' => array(
      'name' => t('Article'),
      'base' => 'node_content',
      'description' => t('Use <em>articles</em> for time-sensitive content like news, press releases or blog posts.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Basic page'),
      'base' => 'node_content',
      'description' => t('Use <em>basic pages</em> for your static content, such as an \'About us\' page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
