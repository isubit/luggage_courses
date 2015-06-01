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
  $handler->display->display_options['fields']['field_course_section_location']['settings'] = array(
    'link' => 1,
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
  $handler->display->display_options['fields']['field_course_section_instructor']['label'] = '';
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
  $view->name = 'related_courses';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Related courses';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Related courses';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_course_related_target_id']['id'] = 'field_course_related_target_id';
  $handler->display->display_options['relationships']['field_course_related_target_id']['table'] = 'field_data_field_course_related';
  $handler->display->display_options['relationships']['field_course_related_target_id']['field'] = 'field_course_related_target_id';
  $handler->display->display_options['relationships']['field_course_related_target_id']['required'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_course_section_target_id']['id'] = 'field_course_section_target_id';
  $handler->display->display_options['relationships']['field_course_section_target_id']['table'] = 'field_data_field_course_section';
  $handler->display->display_options['relationships']['field_course_section_target_id']['field'] = 'field_course_section_target_id';
  $handler->display->display_options['relationships']['field_course_section_target_id']['relationship'] = 'field_course_related_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_course_section_instructor_target_id']['id'] = 'field_course_section_instructor_target_id';
  $handler->display->display_options['relationships']['field_course_section_instructor_target_id']['table'] = 'field_data_field_course_section_instructor';
  $handler->display->display_options['relationships']['field_course_section_instructor_target_id']['field'] = 'field_course_section_instructor_target_id';
  $handler->display->display_options['relationships']['field_course_section_instructor_target_id']['relationship'] = 'field_course_section_target_id';
  /* Field: Content: Rendered Content */
  $handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['relationship'] = 'field_course_related_target_id';
  $handler->display->display_options['fields']['rendered_entity']['label'] = '';
  $handler->display->display_options['fields']['rendered_entity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['rendered_entity']['display'] = 'view';
  $handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'teaser';
  $handler->display->display_options['fields']['rendered_entity']['bypass_access'] = 0;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'course' => 'course',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['related_courses'] = $view;

  return $export;
}
