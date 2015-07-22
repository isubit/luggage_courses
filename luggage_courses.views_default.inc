<?php
/**
 * @file
 * luggage_courses.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function luggage_courses_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'course_sections';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Course sections';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Course sections';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_course_section_node']['id'] = 'reverse_field_course_section_node';
  $handler->display->display_options['relationships']['reverse_field_course_section_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_course_section_node']['field'] = 'reverse_field_course_section_node';
  $handler->display->display_options['relationships']['reverse_field_course_section_node']['required'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Time */
  $handler->display->display_options['fields']['field_course_section_time']['id'] = 'field_course_section_time';
  $handler->display->display_options['fields']['field_course_section_time']['table'] = 'field_data_field_course_section_time';
  $handler->display->display_options['fields']['field_course_section_time']['field'] = 'field_course_section_time';
  $handler->display->display_options['fields']['field_course_section_time']['settings'] = array(
    'display_format' => array(
      'hour' => 'g',
      'minute' => 'i',
      'separator' => ':',
      'period' => 'a',
      'period_separator' => '',
    ),
  );
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_course_section_location']['id'] = 'field_course_section_location';
  $handler->display->display_options['fields']['field_course_section_location']['table'] = 'field_data_field_course_section_location';
  $handler->display->display_options['fields']['field_course_section_location']['field'] = 'field_course_section_location';
  $handler->display->display_options['fields']['field_course_section_location']['label'] = 'Location';
  $handler->display->display_options['fields']['field_course_section_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_course_section_location']['type'] = 'entityreference_entity_view';
  $handler->display->display_options['fields']['field_course_section_location']['settings'] = array(
    'view_mode' => 'teaser',
    'links' => 1,
  );
  /* Field: Content: Syllabus */
  $handler->display->display_options['fields']['field_course_section_syllabus']['id'] = 'field_course_section_syllabus';
  $handler->display->display_options['fields']['field_course_section_syllabus']['table'] = 'field_data_field_course_section_syllabus';
  $handler->display->display_options['fields']['field_course_section_syllabus']['field'] = 'field_course_section_syllabus';
  $handler->display->display_options['fields']['field_course_section_syllabus']['click_sort_column'] = 'fid';
  /* Field: Content: Instructor */
  $handler->display->display_options['fields']['field_course_section_instructor']['id'] = 'field_course_section_instructor';
  $handler->display->display_options['fields']['field_course_section_instructor']['table'] = 'field_data_field_course_section_instructor';
  $handler->display->display_options['fields']['field_course_section_instructor']['field'] = 'field_course_section_instructor';
  $handler->display->display_options['fields']['field_course_section_instructor']['label'] = 'Instructor';
  $handler->display->display_options['fields']['field_course_section_instructor']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_course_section_instructor']['type'] = 'entityreference_entity_view';
  $handler->display->display_options['fields']['field_course_section_instructor']['settings'] = array(
    'view_mode' => 'teaser',
    'links' => 0,
  );
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_course_section_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
    'course_section' => 'course_section',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['course_sections'] = $view;

  $view = new view();
  $view->name = 'course_suggestions';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Course suggestions';
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
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Identifer */
  $handler->display->display_options['fields']['field_course_id']['id'] = 'field_course_id';
  $handler->display->display_options['fields']['field_course_id']['table'] = 'field_data_field_course_id';
  $handler->display->display_options['fields']['field_course_id']['field'] = 'field_course_id';
  $handler->display->display_options['fields']['field_course_id']['label'] = '';
  $handler->display->display_options['fields']['field_course_id']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Identifer (field_course_id) */
  $handler->display->display_options['sorts']['field_course_id_value']['id'] = 'field_course_id_value';
  $handler->display->display_options['sorts']['field_course_id_value']['table'] = 'field_data_field_course_id';
  $handler->display->display_options['sorts']['field_course_id_value']['field'] = 'field_course_id_value';
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
    'course' => 'course',
  );

  /* Display: Entity Reference */
  $handler = $view->new_display('entityreference', 'Entity Reference', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'field_course_id' => 'field_course_id',
    'title' => 'title',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $export['course_suggestions'] = $view;

  $view = new view();
  $view->name = 'courses';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Courses';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Courses';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Identifer */
  $handler->display->display_options['fields']['field_course_id']['id'] = 'field_course_id';
  $handler->display->display_options['fields']['field_course_id']['table'] = 'field_data_field_course_id';
  $handler->display->display_options['fields']['field_course_id']['field'] = 'field_course_id';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Year */
  $handler->display->display_options['fields']['field_course_year']['id'] = 'field_course_year';
  $handler->display->display_options['fields']['field_course_year']['table'] = 'field_data_field_course_year';
  $handler->display->display_options['fields']['field_course_year']['field'] = 'field_course_year';
  $handler->display->display_options['fields']['field_course_year']['settings'] = array(
    'format_type' => 'year',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Semester */
  $handler->display->display_options['fields']['field_course_semester']['id'] = 'field_course_semester';
  $handler->display->display_options['fields']['field_course_semester']['table'] = 'field_data_field_course_semester';
  $handler->display->display_options['fields']['field_course_semester']['field'] = 'field_course_semester';
  /* Sort criterion: Content: Identifer (field_course_id) */
  $handler->display->display_options['sorts']['field_course_id_value']['id'] = 'field_course_id_value';
  $handler->display->display_options['sorts']['field_course_id_value']['table'] = 'field_data_field_course_id';
  $handler->display->display_options['sorts']['field_course_id_value']['field'] = 'field_course_id_value';
  /* Contextual filter: Content: Year (field_course_year) */
  $handler->display->display_options['arguments']['field_course_year_value']['id'] = 'field_course_year_value';
  $handler->display->display_options['arguments']['field_course_year_value']['table'] = 'field_data_field_course_year';
  $handler->display->display_options['arguments']['field_course_year_value']['field'] = 'field_course_year_value';
  $handler->display->display_options['arguments']['field_course_year_value']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['field_course_year_value']['title'] = 'Courses in %1';
  $handler->display->display_options['arguments']['field_course_year_value']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['field_course_year_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_course_year_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_course_year_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_course_year_value']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_course_year_value']['validate']['type'] = 'numeric';
  $handler->display->display_options['arguments']['field_course_year_value']['validate']['fail'] = 'ignore';
  $handler->display->display_options['arguments']['field_course_year_value']['granularity'] = 'year';
  $handler->display->display_options['arguments']['field_course_year_value']['use_fromto'] = 'no';
  /* Contextual filter: Content: Semester (field_course_semester) */
  $handler->display->display_options['arguments']['field_course_semester_value']['id'] = 'field_course_semester_value';
  $handler->display->display_options['arguments']['field_course_semester_value']['table'] = 'field_data_field_course_semester';
  $handler->display->display_options['arguments']['field_course_semester_value']['field'] = 'field_course_semester_value';
  $handler->display->display_options['arguments']['field_course_semester_value']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['field_course_semester_value']['title'] = 'Courses in %2 %1';
  $handler->display->display_options['arguments']['field_course_semester_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_course_semester_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_course_semester_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_course_semester_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_course_semester_value']['limit'] = '0';
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
    'course' => 'course',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'courses';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Courses';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['courses'] = $view;

  return $export;
}
