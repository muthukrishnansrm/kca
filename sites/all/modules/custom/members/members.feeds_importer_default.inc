<?php
/**
 * @file
 * members.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function members_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'affiliation_terms_importer';
  $feeds_importer->config = array(
    'name' => 'Affiliation_Terms_Importer',
    'description' => 'Import Affiliations',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => 0,
        'directory' => 'private://feeds',
        'allowed_schemes' => array(
          'public' => 'public',
          'private' => 'private',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => '|',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsTermProcessor',
      'config' => array(
        'vocabulary' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'Name',
            'target' => 'name',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '0',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'affiliation',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['affiliation_terms_importer'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'aoi_terms_importer';
  $feeds_importer->config = array(
    'name' => 'AOI_Terms_Importer',
    'description' => 'Import into Areas of Interest Taxonomy',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => 0,
        'directory' => 'private://feeds',
        'allowed_schemes' => array(
          'public' => 'public',
          'private' => 'private',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => '|',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsTermProcessor',
      'config' => array(
        'vocabulary' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'Name',
            'target' => 'name',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '0',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'areas_of_interest',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['aoi_terms_importer'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'degrees_terms_importer';
  $feeds_importer->config = array(
    'name' => 'Degrees_Terms_Importer',
    'description' => 'Import Degrees',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => 0,
        'directory' => 'private://feeds',
        'allowed_schemes' => array(
          'public' => 'public',
          'private' => 'private',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => '|',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsTermProcessor',
      'config' => array(
        'vocabulary' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'Name',
            'target' => 'name',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '0',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'degrees',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['degrees_terms_importer'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'membershiptypes_terms_importer';
  $feeds_importer->config = array(
    'name' => 'MembershipTypes_Terms_Importer',
    'description' => 'Import Membership Types',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => 0,
        'directory' => 'private://feeds',
        'allowed_schemes' => array(
          'public' => 'public',
          'private' => 'private',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => '|',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsTermProcessor',
      'config' => array(
        'vocabulary' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'Name',
            'target' => 'name',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '0',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'membership_type',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['membershiptypes_terms_importer'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'profile_import';
  $feeds_importer->config = array(
    'name' => 'Profile Import',
    'description' => 'Import JAD profile information',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'private://feeds',
        'allowed_schemes' => array(
          0 => 'public',
          1 => 'private',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ';',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsProfile2Processor',
      'config' => array(
        'mappings' => array(
          0 => array(
            'source' => 'email',
            'target' => 'user_mail',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'first_name',
            'target' => 'field_xfp_firstname',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'middle_name',
            'target' => 'field_xfp_middlename',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'last_name',
            'target' => 'field_xfp_lastname',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'degrees',
            'target' => 'field_xfp_degrees',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          5 => array(
            'source' => 'affiliation',
            'target' => 'field_xfp_affiliation',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          6 => array(
            'source' => 'member_type',
            'target' => 'field_xfp_member_type',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'lab_url',
            'target' => 'field_xfp_lab_url:url',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'orcid_url',
            'target' => 'field_xfp_orcid:url',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'biography',
            'target' => 'field_xfp_bio',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'areas_of_interest',
            'target' => 'field_xfp_aoi',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          11 => array(
            'source' => 'street_address',
            'target' => 'field_xfp_address:thoroughfare',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'apartment_suite',
            'target' => 'field_xfp_address:premise',
            'unique' => FALSE,
          ),
          13 => array(
            'source' => 'city',
            'target' => 'field_xfp_address:locality',
            'unique' => FALSE,
          ),
          14 => array(
            'source' => 'state_province',
            'target' => 'field_xfp_address:administrative_area',
            'unique' => FALSE,
          ),
          15 => array(
            'source' => 'postal_code',
            'target' => 'field_xfp_address:postal_code',
            'unique' => FALSE,
          ),
          16 => array(
            'source' => 'country',
            'target' => 'field_xfp_address:country',
            'unique' => FALSE,
          ),
          17 => array(
            'source' => 'photo',
            'target' => 'field_xfp_photo',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'xf_profile',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['profile_import'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'user_import';
  $feeds_importer->config = array(
    'name' => 'User Import',
    'description' => 'Import users',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'private://feeds',
        'allowed_schemes' => array(
          0 => 'public',
          1 => 'private',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ';',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsUserProcessor',
      'config' => array(
        'roles' => array(),
        'status' => 1,
        'defuse_mail' => FALSE,
        'mappings' => array(
          0 => array(
            'source' => 'email',
            'target' => 'mail',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'username',
            'target' => 'name',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'password',
            'target' => 'pass',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => '1active_0blocked',
            'target' => 'status',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => 0,
        'input_format' => NULL,
        'skip_hash_check' => FALSE,
        'bundle' => 'user',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['user_import'] = $feeds_importer;

  return $export;
}
