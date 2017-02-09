<?php
/**
 * @file
 * alz.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function alz_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  if ($module == "feeds_tamper" && $api == "feeds_tamper_default") {
    return array("version" => "2");
  }
  if ($module == "msnf" && $api == "msnf") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function alz_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_fontyourface_features_default_font().
 */
function alz_fontyourface_features_default_font() {
  return array(
    'Open Sans Condensed 300 (cyrillic)' => array(
      'name' => 'Open Sans Condensed 300 (cyrillic)',
      'enabled' => 1,
      'url' => 'http://www.google.com/webfonts/family?family=Open Sans Condensed&subset=cyrillic#300',
      'provider' => 'google_fonts_api',
      'css_selector' => 'h1, h2, h3, h4, h5, h6',
      'css_family' => 'Open Sans Condensed',
      'css_style' => 'normal',
      'css_weight' => 300,
      'css_fallbacks' => '',
      'foundry' => '',
      'foundry_url' => '',
      'license' => '',
      'license_url' => '',
      'designer' => '',
      'designer_url' => '',
      'metadata' => 'a:2:{s:4:"path";s:23:"Open Sans Condensed:300";s:6:"subset";s:8:"cyrillic";}',
    ),
  );
}

/**
 * Implements hook_image_default_styles().
 */
function alz_image_default_styles() {
  $styles = array();

  // Exported image style: feature.
  $styles['feature'] = array(
    'label' => 'feature',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 325,
          'height' => 150,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: jad_thumbnail.
  $styles['jad_thumbnail'] = array(
    'label' => 'JAD Thumbnail',
    'effects' => array(
      4 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 75,
          'height' => 75,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: profile_picture.
  $styles['profile_picture'] = array(
    'label' => 'Profile Picture',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 85,
          'height' => 115,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function alz_node_info() {
  $items = array(
    'authors' => array(
      'name' => t('Authors'),
      'base' => 'node_content',
      'description' => t('Manuscript authors form.'),
      'has_title' => '1',
      'title_label' => t('Full Name (FirstName Initial LastName)'),
      'help' => '',
    ),
    'disclosure' => array(
      'name' => t('Disclosure Statement'),
      'base' => 'node_content',
      'description' => t('Disclosure Statement: Each author is required to fill out this form upon acceptance of a manuscript to disclose any financial interests relevant to their work.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => t('<p><b>Disclosure Statement</b></p>
<p>Each author is required to fill out this form upon acceptance of a manuscript. The editors\' interest extends to those areas relevant to the article that, broadly viewed, could be construed as constituting a conflict of interest or the appearance thereof. A link to this information will be provided at the end of the published manuscript. If there is nothing to disclose, please indicate so in the box provided below. </p>'),
    ),
    'manuscript' => array(
      'name' => t('Manuscript'),
      'base' => 'node_content',
      'description' => t('Manuscript form.'),
      'has_title' => '1',
      'title_label' => t('Manuscript title'),
      'help' => '',
    ),
    'meetings' => array(
      'name' => t('Meetings'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
