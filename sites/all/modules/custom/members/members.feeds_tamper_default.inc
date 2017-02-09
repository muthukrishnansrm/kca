<?php
/**
 * @file
 * members.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function members_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'profile_import-affiliation-explode_affiliations';
  $feeds_tamper->importer = 'profile_import';
  $feeds_tamper->source = 'affiliation';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => '|',
    'limit' => '',
    'real_separator' => '|',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode affiliations';
  $export['profile_import-affiliation-explode_affiliations'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'profile_import-areas_of_interest-explode_aoi';
  $feeds_tamper->importer = 'profile_import';
  $feeds_tamper->source = 'areas_of_interest';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => '|',
    'limit' => '',
    'real_separator' => '|',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode aoi';
  $export['profile_import-areas_of_interest-explode_aoi'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'profile_import-degrees-explode_degrees';
  $feeds_tamper->importer = 'profile_import';
  $feeds_tamper->source = 'degrees';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => '|',
    'limit' => '',
    'real_separator' => '|',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode degrees';
  $export['profile_import-degrees-explode_degrees'] = $feeds_tamper;

  return $export;
}
