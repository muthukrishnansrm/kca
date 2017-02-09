<?php
/**
 * @file
 * alz.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function alz_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'home-page';
  $context->description = 'Home page';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-clinical_trials-block' => array(
          'module' => 'views',
          'delta' => 'clinical_trials-block',
          'region' => 'content',
          'weight' => '-20',
        ),
        'views-paper_alert-block_3' => array(
          'module' => 'views',
          'delta' => 'paper_alert-block_3',
          'region' => 'content',
          'weight' => '-19',
        ),
        'block-15' => array(
          'module' => 'block',
          'delta' => '15',
          'region' => 'user_first',
          'weight' => '-10',
        ),
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'user_second',
          'weight' => '-10',
        ),
        'scfmembers-scfmembers_user_top_menu' => array(
          'module' => 'scfmembers',
          'delta' => 'scfmembers_user_top_menu',
          'region' => 'user_second',
          'weight' => '-9',
        ),
        'block-25' => array(
          'module' => 'block',
          'delta' => '25',
          'region' => 'sidebar_first',
          'weight' => '-20',
        ),
        'views-meetings-block' => array(
          'module' => 'views',
          'delta' => 'meetings-block',
          'region' => 'sidebar_first',
          'weight' => '-19',
        ),
        'block-17' => array(
          'module' => 'block',
          'delta' => '17',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'block-3' => array(
          'module' => 'block',
          'delta' => '3',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'nivo_slider-nivo_slider' => array(
          'module' => 'nivo_slider',
          'delta' => 'nivo_slider',
          'region' => 'header_first',
          'weight' => '-10',
        ),
        'block-16' => array(
          'module' => 'block',
          'delta' => '16',
          'region' => 'footer_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Home page');
  $export['home-page'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'interior';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'default' => array(
      'values' => array(
        'context_condition_default' => 'context_condition_default',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-15' => array(
          'module' => 'block',
          'delta' => '15',
          'region' => 'user_first',
          'weight' => '-10',
        ),
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'user_second',
          'weight' => '-10',
        ),
        'scfmembers-scfmembers_user_top_menu' => array(
          'module' => 'scfmembers',
          'delta' => 'scfmembers_user_top_menu',
          'region' => 'user_second',
          'weight' => '-9',
        ),
        'block-17' => array(
          'module' => 'block',
          'delta' => '17',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'block-3' => array(
          'module' => 'block',
          'delta' => '3',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'block-16' => array(
          'module' => 'block',
          'delta' => '16',
          'region' => 'footer_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['interior'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'manuscript';
  $context->description = 'Manuscript page blocks';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'manuscript' => 'manuscript',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-manuscript-block' => array(
          'module' => 'views',
          'delta' => 'manuscript-block',
          'region' => 'content',
          'weight' => '10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Manuscript page blocks');
  $export['manuscript'] = $context;

  return $export;
}
