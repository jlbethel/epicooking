<?php
/**
 * @file
 * header_fonts.features.inc
 */

/**
 * Implements hook_fontyourface_features_default_font().
 */
function header_fonts_fontyourface_features_default_font() {
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
