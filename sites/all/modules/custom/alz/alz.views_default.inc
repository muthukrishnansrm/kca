<?php
/**
 * @file
 * alz.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function alz_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'authors';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Authors';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Authors';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'authors' => 'authors',
  );
  $handler->display->display_options['path'] = 'authors';
  $export['authors'] = $view;

  $view = new view();
  $view->name = 'authors_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Authors List';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_author_id_target_id']['id'] = 'field_author_id_target_id';
  $handler->display->display_options['relationships']['field_author_id_target_id']['table'] = 'field_data_field_author_id';
  $handler->display->display_options['relationships']['field_author_id_target_id']['field'] = 'field_author_id_target_id';
  $handler->display->display_options['relationships']['field_author_id_target_id']['required'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_author_id_target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['authors_list'] = $view;

  $view = new view();
  $view->name = 'disclosures_in_manuscript';
  $view->description = 'This view is nested in the manusctipts list view';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Disclosures in manuscript';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Disclosures in manuscript';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_author' => 'field_author',
    'field_checked' => 'field_checked',
  );
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_manuscript_target_id']['id'] = 'field_manuscript_target_id';
  $handler->display->display_options['relationships']['field_manuscript_target_id']['table'] = 'field_data_field_manuscript';
  $handler->display->display_options['relationships']['field_manuscript_target_id']['field'] = 'field_manuscript_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_author_target_id']['id'] = 'field_author_target_id';
  $handler->display->display_options['relationships']['field_author_target_id']['table'] = 'field_data_field_author';
  $handler->display->display_options['relationships']['field_author_target_id']['field'] = 'field_author_target_id';
  $handler->display->display_options['relationships']['field_author_target_id']['label'] = 'field_author';
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_author']['id'] = 'field_author';
  $handler->display->display_options['fields']['field_author']['table'] = 'field_data_field_author';
  $handler->display->display_options['fields']['field_author']['field'] = 'field_author';
  $handler->display->display_options['fields']['field_author']['label'] = '';
  $handler->display->display_options['fields']['field_author']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_author']['settings'] = array(
    'link' => 1,
  );
  /* Sort criterion: Content: Last name (field_last_name) */
  $handler->display->display_options['sorts']['field_last_name_value']['id'] = 'field_last_name_value';
  $handler->display->display_options['sorts']['field_last_name_value']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['sorts']['field_last_name_value']['field'] = 'field_last_name_value';
  $handler->display->display_options['sorts']['field_last_name_value']['relationship'] = 'field_author_target_id';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_manuscript_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['fail'] = 'empty';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'disclosure' => 'disclosure',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'disclosures-in-manuscript';
  $export['disclosures_in_manuscript'] = $view;

  $view = new view();
  $view->name = 'editor_s_pick';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Editor\'s Pick';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Editor\'s Pick';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'full';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Date Published Numeric (field_date_published_numeric) */
  $handler->display->display_options['sorts']['field_date_published_numeric_value']['id'] = 'field_date_published_numeric_value';
  $handler->display->display_options['sorts']['field_date_published_numeric_value']['table'] = 'field_data_field_date_published_numeric';
  $handler->display->display_options['sorts']['field_date_published_numeric_value']['field'] = 'field_date_published_numeric_value';
  $handler->display->display_options['sorts']['field_date_published_numeric_value']['order'] = 'DESC';
  /* Contextual filter: Content: Created year */
  $handler->display->display_options['arguments']['created_year']['id'] = 'created_year';
  $handler->display->display_options['arguments']['created_year']['table'] = 'node';
  $handler->display->display_options['arguments']['created_year']['field'] = 'created_year';
  $handler->display->display_options['arguments']['created_year']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['created_year']['summary']['format'] = 'default_summary';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'biblio' => 'biblio',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Editors Pick (field_editors_pick) */
  $handler->display->display_options['filters']['field_editors_pick_value']['id'] = 'field_editors_pick_value';
  $handler->display->display_options['filters']['field_editors_pick_value']['table'] = 'field_data_field_editors_pick';
  $handler->display->display_options['filters']['field_editors_pick_value']['field'] = 'field_editors_pick_value';
  $handler->display->display_options['filters']['field_editors_pick_value']['value'] = array(
    1 => '1',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Created year */
  $handler->display->display_options['arguments']['created_year']['id'] = 'created_year';
  $handler->display->display_options['arguments']['created_year']['table'] = 'node';
  $handler->display->display_options['arguments']['created_year']['field'] = 'created_year';
  $handler->display->display_options['arguments']['created_year']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['created_year']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['created_year']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['created_year']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['created_year']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['created_year']['validate']['type'] = 'numeric';
  $handler->display->display_options['arguments']['created_year']['validate']['fail'] = 'empty';
  $handler->display->display_options['path'] = 'editors-pick';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'VIEW MORE';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $export['editor_s_pick'] = $view;

  $view = new view();
  $view->name = 'latest_articles';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'aggregator_item';
  $view->human_name = 'Latest Articles';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Latest Articles';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'View More';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<div class="more-link"><a href="http://iospress.metapress.com/content/105656/">VIEW MORE</a></div>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  /* Field: Aggregator: Link */
  $handler->display->display_options['fields']['link']['id'] = 'link';
  $handler->display->display_options['fields']['link']['table'] = 'aggregator_item';
  $handler->display->display_options['fields']['link']['field'] = 'link';
  $handler->display->display_options['fields']['link']['label'] = '';
  $handler->display->display_options['fields']['link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['link']['display_as_link'] = FALSE;
  /* Field: Aggregator: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'aggregator_item';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[link]';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Aggregator: Body */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'aggregator_item';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['label'] = '';
  $handler->display->display_options['fields']['description']['alter']['max_length'] = '100';
  $handler->display->display_options['fields']['description']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  /* Sort criterion: Aggregator: Timestamp */
  $handler->display->display_options['sorts']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['table'] = 'aggregator_item';
  $handler->display->display_options['sorts']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['order'] = 'DESC';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['empty'] = TRUE;
  $handler->display->display_options['footer']['area']['content'] = '<div class="more-link"><a href="http://iospress.metapress.com/content/105656/">VIEW MORE</a></div>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Aggregator: Link */
  $handler->display->display_options['fields']['link']['id'] = 'link';
  $handler->display->display_options['fields']['link']['table'] = 'aggregator_item';
  $handler->display->display_options['fields']['link']['field'] = 'link';
  $handler->display->display_options['fields']['link']['label'] = '';
  $handler->display->display_options['fields']['link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['link']['display_as_link'] = FALSE;
  /* Field: Aggregator: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'aggregator_item';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[link]';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $export['latest_articles'] = $view;

  $view = new view();
  $view->name = 'latest_news';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Latest News';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Latest News';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'rss';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  /* Sort criterion: Content: Sticky */
  $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['table'] = 'node';
  $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['order'] = 'DESC';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );
  /* Filter criterion: Content: Tags (field_tags) */
  $handler->display->display_options['filters']['field_tags_tid']['id'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['table'] = 'field_data_field_tags';
  $handler->display->display_options['filters']['field_tags_tid']['field'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['value'] = array(
    0 => '3',
  );
  $handler->display->display_options['filters']['field_tags_tid']['vocabulary'] = 'tags';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
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
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'latest-news';
  $handler->display->display_options['menu']['title'] = 'Latest News';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['path'] = 'latest-news.xml';
  $handler->display->display_options['displays'] = array(
    'default' => 'default',
    'page' => 'page',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'News';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'VIEW MORE';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'jad_thumbnail',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $export['latest_news'] = $view;

  $view = new view();
  $view->name = 'letters_to_the_editor';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Letters to the Editor';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Letters to the Editor';
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
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'rss';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );
  /* Filter criterion: Content: Tags (field_tags) */
  $handler->display->display_options['filters']['field_tags_tid']['id'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['table'] = 'field_data_field_tags';
  $handler->display->display_options['filters']['field_tags_tid']['field'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['value'] = array(
    0 => '2',
  );
  $handler->display->display_options['filters']['field_tags_tid']['vocabulary'] = 'tags';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'ltte';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Letters to the Editor';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['path'] = 'latest-news.xml';
  $handler->display->display_options['displays'] = array(
    'default' => 'default',
    'page' => 'page',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Featured';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $export['letters_to_the_editor'] = $view;

  $view = new view();
  $view->name = 'manuscript';
  $view->description = 'This view is displayed on the individual manuscript page';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Disclosures';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Disclosures';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'manuscript' => 'manuscript',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_author',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_manuscript_target_id']['id'] = 'field_manuscript_target_id';
  $handler->display->display_options['relationships']['field_manuscript_target_id']['table'] = 'field_data_field_manuscript';
  $handler->display->display_options['relationships']['field_manuscript_target_id']['field'] = 'field_manuscript_target_id';
  $handler->display->display_options['relationships']['field_manuscript_target_id']['label'] = 'field_manuscript_id';
  $handler->display->display_options['relationships']['field_manuscript_target_id']['required'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_author_target_id']['id'] = 'field_author_target_id';
  $handler->display->display_options['relationships']['field_author_target_id']['table'] = 'field_data_field_author';
  $handler->display->display_options['relationships']['field_author_target_id']['field'] = 'field_author_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_author']['id'] = 'field_author';
  $handler->display->display_options['fields']['field_author']['table'] = 'field_data_field_author';
  $handler->display->display_options['fields']['field_author']['field'] = 'field_author';
  $handler->display->display_options['fields']['field_author']['label'] = '';
  $handler->display->display_options['fields']['field_author']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_author']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_author']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Nothing to Disclose */
  $handler->display->display_options['fields']['field_nothing_to_disclose']['id'] = 'field_nothing_to_disclose';
  $handler->display->display_options['fields']['field_nothing_to_disclose']['table'] = 'field_data_field_nothing_to_disclose';
  $handler->display->display_options['fields']['field_nothing_to_disclose']['field'] = 'field_nothing_to_disclose';
  $handler->display->display_options['fields']['field_nothing_to_disclose']['label'] = '';
  $handler->display->display_options['fields']['field_nothing_to_disclose']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nothing_to_disclose']['hide_empty'] = TRUE;
  /* Field: Content: Please indicate the type and extent of any consulting fees or paid advisory boards: */
  $handler->display->display_options['fields']['field_consulting_fees_desc']['id'] = 'field_consulting_fees_desc';
  $handler->display->display_options['fields']['field_consulting_fees_desc']['table'] = 'field_data_field_consulting_fees_desc';
  $handler->display->display_options['fields']['field_consulting_fees_desc']['field'] = 'field_consulting_fees_desc';
  $handler->display->display_options['fields']['field_consulting_fees_desc']['label'] = 'Consulting Fees';
  $handler->display->display_options['fields']['field_consulting_fees_desc']['hide_empty'] = TRUE;
  /* Field: Content: Please indicate the type and extent of any equity ownership/stock options: */
  $handler->display->display_options['fields']['field_equity_stock_desc']['id'] = 'field_equity_stock_desc';
  $handler->display->display_options['fields']['field_equity_stock_desc']['table'] = 'field_data_field_equity_stock_desc';
  $handler->display->display_options['fields']['field_equity_stock_desc']['field'] = 'field_equity_stock_desc';
  $handler->display->display_options['fields']['field_equity_stock_desc']['label'] = 'Equity';
  $handler->display->display_options['fields']['field_equity_stock_desc']['hide_empty'] = TRUE;
  /* Field: Content: Please indicate the type and extent of any lecture fees: */
  $handler->display->display_options['fields']['field_lecture_fees_desc']['id'] = 'field_lecture_fees_desc';
  $handler->display->display_options['fields']['field_lecture_fees_desc']['table'] = 'field_data_field_lecture_fees_desc';
  $handler->display->display_options['fields']['field_lecture_fees_desc']['field'] = 'field_lecture_fees_desc';
  $handler->display->display_options['fields']['field_lecture_fees_desc']['label'] = 'Lecture Fees';
  $handler->display->display_options['fields']['field_lecture_fees_desc']['hide_empty'] = TRUE;
  /* Field: Content: Please describe employment: */
  $handler->display->display_options['fields']['field_industry_sponsor']['id'] = 'field_industry_sponsor';
  $handler->display->display_options['fields']['field_industry_sponsor']['table'] = 'field_data_field_industry_sponsor';
  $handler->display->display_options['fields']['field_industry_sponsor']['field'] = 'field_industry_sponsor';
  $handler->display->display_options['fields']['field_industry_sponsor']['label'] = 'Sponsors';
  $handler->display->display_options['fields']['field_industry_sponsor']['hide_empty'] = TRUE;
  /* Field: Content: Please describe patents and/or royalties, expert witness role, and/or other activities for a commercial sponsor.  */
  $handler->display->display_options['fields']['field_patent_royalties']['id'] = 'field_patent_royalties';
  $handler->display->display_options['fields']['field_patent_royalties']['table'] = 'field_data_field_patent_royalties';
  $handler->display->display_options['fields']['field_patent_royalties']['field'] = 'field_patent_royalties';
  $handler->display->display_options['fields']['field_patent_royalties']['label'] = 'Patents/Royalties';
  $handler->display->display_options['fields']['field_patent_royalties']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_patent_royalties']['hide_empty'] = TRUE;
  /* Field: Content: Grant(s) */
  $handler->display->display_options['fields']['field_disclosure_grants']['id'] = 'field_disclosure_grants';
  $handler->display->display_options['fields']['field_disclosure_grants']['table'] = 'field_data_field_disclosure_grants';
  $handler->display->display_options['fields']['field_disclosure_grants']['field'] = 'field_disclosure_grants';
  $handler->display->display_options['fields']['field_disclosure_grants']['label'] = 'Grants';
  $handler->display->display_options['fields']['field_disclosure_grants']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_disclosure_grants']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_disclosure_grants']['settings'] = array(
    'edit' => '',
    'delete' => '',
    'add' => '',
    'description' => 1,
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_disclosure_grants']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_disclosure_grants']['multi_type'] = 'ul';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Last name (field_last_name) */
  $handler->display->display_options['sorts']['field_last_name_value']['id'] = 'field_last_name_value';
  $handler->display->display_options['sorts']['field_last_name_value']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['sorts']['field_last_name_value']['field'] = 'field_last_name_value';
  $handler->display->display_options['sorts']['field_last_name_value']['relationship'] = 'field_author_target_id';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_manuscript_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'disclosure' => 'disclosure',
  );
  $export['manuscript'] = $view;

  $view = new view();
  $view->name = 'manuscript_reference';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Manuscript Reference';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Manuscript Reference';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Manuscript Number A */
  $handler->display->display_options['fields']['field_number_a']['id'] = 'field_number_a';
  $handler->display->display_options['fields']['field_number_a']['table'] = 'field_data_field_number_a';
  $handler->display->display_options['fields']['field_number_a']['field'] = 'field_number_a';
  $handler->display->display_options['fields']['field_number_a']['label'] = '';
  $handler->display->display_options['fields']['field_number_a']['element_label_colon'] = FALSE;
  /* Field: Content: Manuscript Number B */
  $handler->display->display_options['fields']['field_number_b']['id'] = 'field_number_b';
  $handler->display->display_options['fields']['field_number_b']['table'] = 'field_data_field_number_b';
  $handler->display->display_options['fields']['field_number_b']['field'] = 'field_number_b';
  $handler->display->display_options['fields']['field_number_b']['label'] = '';
  $handler->display->display_options['fields']['field_number_b']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'manuscript' => 'manuscript',
  );
  /* Filter criterion: Content: Closed (field_closed) */
  $handler->display->display_options['filters']['field_closed_value']['id'] = 'field_closed_value';
  $handler->display->display_options['filters']['field_closed_value']['table'] = 'field_data_field_closed';
  $handler->display->display_options['filters']['field_closed_value']['field'] = 'field_closed_value';
  $handler->display->display_options['filters']['field_closed_value']['value'] = array(
    0 => '0',
  );

  /* Display: Entity Reference */
  $handler = $view->new_display('entityreference', 'Entity Reference', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'field_number_b' => 'field_number_b',
    'title' => 0,
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_number_b' => 'field_number_b',
    'field_number_a' => 'field_number_a',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $export['manuscript_reference'] = $view;

  $view = new view();
  $view->name = 'meetings';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Meetings';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Upcoming Meetings';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'VIEW MORE';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '15';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_meeting_image' => 'field_meeting_image',
    'nothing' => 'nothing',
  );
  /* Field: Content: Meeting Image */
  $handler->display->display_options['fields']['field_meeting_image']['id'] = 'field_meeting_image';
  $handler->display->display_options['fields']['field_meeting_image']['table'] = 'field_data_field_meeting_image';
  $handler->display->display_options['fields']['field_meeting_image']['field'] = 'field_meeting_image';
  $handler->display->display_options['fields']['field_meeting_image']['label'] = '';
  $handler->display->display_options['fields']['field_meeting_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_meeting_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_meeting_image']['settings'] = array(
    'image_style' => 'jad_thumbnail',
    'image_link' => '',
  );
  /* Field: Content: Meeting Name */
  $handler->display->display_options['fields']['field_meeting_link']['id'] = 'field_meeting_link';
  $handler->display->display_options['fields']['field_meeting_link']['table'] = 'field_data_field_meeting_link';
  $handler->display->display_options['fields']['field_meeting_link']['field'] = 'field_meeting_link';
  $handler->display->display_options['fields']['field_meeting_link']['label'] = '';
  $handler->display->display_options['fields']['field_meeting_link']['element_type'] = 'strong';
  $handler->display->display_options['fields']['field_meeting_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_meeting_link']['click_sort_column'] = 'url';
  /* Field: Content: Meeting Date */
  $handler->display->display_options['fields']['field_meeting_dates']['id'] = 'field_meeting_dates';
  $handler->display->display_options['fields']['field_meeting_dates']['table'] = 'field_data_field_meeting_dates';
  $handler->display->display_options['fields']['field_meeting_dates']['field'] = 'field_meeting_dates';
  $handler->display->display_options['fields']['field_meeting_dates']['label'] = '';
  $handler->display->display_options['fields']['field_meeting_dates']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_meeting_dates']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_meeting_location']['id'] = 'field_meeting_location';
  $handler->display->display_options['fields']['field_meeting_location']['table'] = 'field_data_field_meeting_location';
  $handler->display->display_options['fields']['field_meeting_location']['field'] = 'field_meeting_location';
  $handler->display->display_options['fields']['field_meeting_location']['label'] = '';
  $handler->display->display_options['fields']['field_meeting_location']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  /* Sort criterion: Content: Meeting Date (field_meeting_dates) */
  $handler->display->display_options['sorts']['field_meeting_dates_value']['id'] = 'field_meeting_dates_value';
  $handler->display->display_options['sorts']['field_meeting_dates_value']['table'] = 'field_data_field_meeting_dates';
  $handler->display->display_options['sorts']['field_meeting_dates_value']['field'] = 'field_meeting_dates_value';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'meetings' => 'meetings',
  );

  /* Display: Upcoming Meetings Page */
  $handler = $view->new_display('page', 'Upcoming Meetings Page', 'page');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Meeting Image */
  $handler->display->display_options['fields']['field_meeting_image']['id'] = 'field_meeting_image';
  $handler->display->display_options['fields']['field_meeting_image']['table'] = 'field_data_field_meeting_image';
  $handler->display->display_options['fields']['field_meeting_image']['field'] = 'field_meeting_image';
  $handler->display->display_options['fields']['field_meeting_image']['label'] = '';
  $handler->display->display_options['fields']['field_meeting_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_meeting_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_meeting_image']['settings'] = array(
    'image_style' => 'jad_thumbnail',
    'image_link' => '',
  );
  /* Field: Content: Meeting Name */
  $handler->display->display_options['fields']['field_meeting_link']['id'] = 'field_meeting_link';
  $handler->display->display_options['fields']['field_meeting_link']['table'] = 'field_data_field_meeting_link';
  $handler->display->display_options['fields']['field_meeting_link']['field'] = 'field_meeting_link';
  $handler->display->display_options['fields']['field_meeting_link']['label'] = '';
  $handler->display->display_options['fields']['field_meeting_link']['element_type'] = 'strong';
  $handler->display->display_options['fields']['field_meeting_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_meeting_link']['click_sort_column'] = 'url';
  /* Field: Content: Meeting Date */
  $handler->display->display_options['fields']['field_meeting_dates']['id'] = 'field_meeting_dates';
  $handler->display->display_options['fields']['field_meeting_dates']['table'] = 'field_data_field_meeting_dates';
  $handler->display->display_options['fields']['field_meeting_dates']['field'] = 'field_meeting_dates';
  $handler->display->display_options['fields']['field_meeting_dates']['label'] = '';
  $handler->display->display_options['fields']['field_meeting_dates']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_meeting_dates']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_meeting_location']['id'] = 'field_meeting_location';
  $handler->display->display_options['fields']['field_meeting_location']['table'] = 'field_data_field_meeting_location';
  $handler->display->display_options['fields']['field_meeting_location']['field'] = 'field_meeting_location';
  $handler->display->display_options['fields']['field_meeting_location']['label'] = '';
  $handler->display->display_options['fields']['field_meeting_location']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_meeting_location']['alter']['preserve_tags'] = '<br>';
  $handler->display->display_options['fields']['field_meeting_location']['element_type'] = '0';
  $handler->display->display_options['fields']['field_meeting_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_meeting_location']['settings'] = array(
    'trim_length' => '600',
  );
  $handler->display->display_options['path'] = 'upcoming-meetings';

  /* Display: Upcoming Meetings Block */
  $handler = $view->new_display('block', 'Upcoming Meetings Block', 'block');
  $handler->display->display_options['display_description'] = 'Upcoming Meetings Block';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Meeting Image */
  $handler->display->display_options['fields']['field_meeting_image']['id'] = 'field_meeting_image';
  $handler->display->display_options['fields']['field_meeting_image']['table'] = 'field_data_field_meeting_image';
  $handler->display->display_options['fields']['field_meeting_image']['field'] = 'field_meeting_image';
  $handler->display->display_options['fields']['field_meeting_image']['label'] = '';
  $handler->display->display_options['fields']['field_meeting_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_meeting_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_meeting_image']['settings'] = array(
    'image_style' => 'jad_thumbnail',
    'image_link' => '',
  );
  /* Field: Content: Meeting Name */
  $handler->display->display_options['fields']['field_meeting_link']['id'] = 'field_meeting_link';
  $handler->display->display_options['fields']['field_meeting_link']['table'] = 'field_data_field_meeting_link';
  $handler->display->display_options['fields']['field_meeting_link']['field'] = 'field_meeting_link';
  $handler->display->display_options['fields']['field_meeting_link']['label'] = '';
  $handler->display->display_options['fields']['field_meeting_link']['element_type'] = 'strong';
  $handler->display->display_options['fields']['field_meeting_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_meeting_link']['click_sort_column'] = 'url';
  /* Field: Content: Meeting Date */
  $handler->display->display_options['fields']['field_meeting_dates']['id'] = 'field_meeting_dates';
  $handler->display->display_options['fields']['field_meeting_dates']['table'] = 'field_data_field_meeting_dates';
  $handler->display->display_options['fields']['field_meeting_dates']['field'] = 'field_meeting_dates';
  $handler->display->display_options['fields']['field_meeting_dates']['label'] = '';
  $handler->display->display_options['fields']['field_meeting_dates']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_meeting_dates']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_meeting_location']['id'] = 'field_meeting_location';
  $handler->display->display_options['fields']['field_meeting_location']['table'] = 'field_data_field_meeting_location';
  $handler->display->display_options['fields']['field_meeting_location']['field'] = 'field_meeting_location';
  $handler->display->display_options['fields']['field_meeting_location']['label'] = '';
  $handler->display->display_options['fields']['field_meeting_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['block_description'] = 'Upcoming Meetings';
  $export['meetings'] = $view;

  $view = new view();
  $view->name = 'papers';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Papers';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Papers';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'biblio' => 'biblio',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'papers';
  $export['papers'] = $view;

  $view = new view();
  $view->name = 'view_manuscripts';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'View Manuscripts';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Manuscripts';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_number_a' => 'field_number_a',
    'field_number_b' => 'field_number_b',
    'title' => 'title',
    'field_author_id' => 'title',
    'field_closed' => 'field_closed',
    'nid' => 'nid',
    'view' => 'view',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_number_a' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_number_b' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_author_id' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_closed' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'view' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Manuscript Number A */
  $handler->display->display_options['fields']['field_number_a']['id'] = 'field_number_a';
  $handler->display->display_options['fields']['field_number_a']['table'] = 'field_data_field_number_a';
  $handler->display->display_options['fields']['field_number_a']['field'] = 'field_number_a';
  $handler->display->display_options['fields']['field_number_a']['label'] = '';
  $handler->display->display_options['fields']['field_number_a']['element_label_colon'] = FALSE;
  /* Field: Content: Manuscript Number B */
  $handler->display->display_options['fields']['field_number_b']['id'] = 'field_number_b';
  $handler->display->display_options['fields']['field_number_b']['table'] = 'field_data_field_number_b';
  $handler->display->display_options['fields']['field_number_b']['field'] = 'field_number_b';
  $handler->display->display_options['fields']['field_number_b']['label'] = '';
  $handler->display->display_options['fields']['field_number_b']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Author(s) */
  $handler->display->display_options['fields']['field_author_id']['id'] = 'field_author_id';
  $handler->display->display_options['fields']['field_author_id']['table'] = 'field_data_field_author_id';
  $handler->display->display_options['fields']['field_author_id']['field'] = 'field_author_id';
  $handler->display->display_options['fields']['field_author_id']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_author_id']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_author_id']['multi_type'] = 'ul';
  /* Field: Content: Closed */
  $handler->display->display_options['fields']['field_closed']['id'] = 'field_closed';
  $handler->display->display_options['fields']['field_closed']['table'] = 'field_data_field_closed';
  $handler->display->display_options['fields']['field_closed']['field'] = 'field_closed';
  $handler->display->display_options['fields']['field_closed']['element_label_colon'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  /* Sort criterion: Content: Manuscript Number A (field_number_a) */
  $handler->display->display_options['sorts']['field_number_a_value']['id'] = 'field_number_a_value';
  $handler->display->display_options['sorts']['field_number_a_value']['table'] = 'field_data_field_number_a';
  $handler->display->display_options['sorts']['field_number_a_value']['field'] = 'field_number_a_value';
  $handler->display->display_options['sorts']['field_number_a_value']['order'] = 'DESC';
  /* Sort criterion: Content: Manuscript Number B (field_number_b) */
  $handler->display->display_options['sorts']['field_number_b_value']['id'] = 'field_number_b_value';
  $handler->display->display_options['sorts']['field_number_b_value']['table'] = 'field_data_field_number_b';
  $handler->display->display_options['sorts']['field_number_b_value']['field'] = 'field_number_b_value';
  $handler->display->display_options['sorts']['field_number_b_value']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'manuscript' => 'manuscript',
  );
  /* Filter criterion: Content: Closed (field_closed) */
  $handler->display->display_options['filters']['field_closed_value']['id'] = 'field_closed_value';
  $handler->display->display_options['filters']['field_closed_value']['table'] = 'field_data_field_closed';
  $handler->display->display_options['filters']['field_closed_value']['field'] = 'field_closed_value';
  $handler->display->display_options['filters']['field_closed_value']['value'] = array(
    0 => '0',
  );
  $handler->display->display_options['filters']['field_closed_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_closed_value']['expose']['operator_id'] = 'field_closed_value_op';
  $handler->display->display_options['filters']['field_closed_value']['expose']['label'] = 'Closed';
  $handler->display->display_options['filters']['field_closed_value']['expose']['operator'] = 'field_closed_value_op';
  $handler->display->display_options['filters']['field_closed_value']['expose']['identifier'] = 'field_closed_value';
  $handler->display->display_options['filters']['field_closed_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_closed_value']['group_info']['label'] = 'Closed (field_closed)';
  $handler->display->display_options['filters']['field_closed_value']['group_info']['identifier'] = 'field_closed_value';
  $handler->display->display_options['filters']['field_closed_value']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['field_closed_value']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_author_target_id']['id'] = 'field_author_target_id';
  $handler->display->display_options['relationships']['field_author_target_id']['table'] = 'field_data_field_author';
  $handler->display->display_options['relationships']['field_author_target_id']['field'] = 'field_author_target_id';
  $handler->display->display_options['relationships']['field_author_target_id']['label'] = 'field_author';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Manuscript Number A */
  $handler->display->display_options['fields']['field_number_a']['id'] = 'field_number_a';
  $handler->display->display_options['fields']['field_number_a']['table'] = 'field_data_field_number_a';
  $handler->display->display_options['fields']['field_number_a']['field'] = 'field_number_a';
  $handler->display->display_options['fields']['field_number_a']['label'] = '';
  $handler->display->display_options['fields']['field_number_a']['element_label_colon'] = FALSE;
  /* Field: Content: Manuscript Number B */
  $handler->display->display_options['fields']['field_number_b']['id'] = 'field_number_b';
  $handler->display->display_options['fields']['field_number_b']['table'] = 'field_data_field_number_b';
  $handler->display->display_options['fields']['field_number_b']['field'] = 'field_number_b';
  $handler->display->display_options['fields']['field_number_b']['label'] = '';
  $handler->display->display_options['fields']['field_number_b']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Closed */
  $handler->display->display_options['fields']['field_closed']['id'] = 'field_closed';
  $handler->display->display_options['fields']['field_closed']['table'] = 'field_data_field_closed';
  $handler->display->display_options['fields']['field_closed']['field'] = 'field_closed';
  $handler->display->display_options['fields']['field_closed']['element_label_colon'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Global: View */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['label'] = 'Disclosures';
  $handler->display->display_options['fields']['view']['view'] = 'disclosures_in_manuscript';
  $handler->display->display_options['fields']['view']['arguments'] = '[!nid]';
  $handler->display->display_options['path'] = 'manuscripts';
  $export['view_manuscripts'] = $view;

  return $export;
}
