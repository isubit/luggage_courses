<?php
/**
 * @file
 * luggage_courses.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function luggage_courses_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "multifield" && $api == "multifield") {
    return array("version" => "1");
  }
  if ($module == "relation" && $api == "relation_type_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function luggage_courses_node_info() {
  $items = array(
    'course' => array(
      'name' => t('Course'),
      'base' => 'node_content',
      'description' => t('Defines a course'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'course_instructor' => array(
      'name' => t('Course Instructor'),
      'base' => 'node_content',
      'description' => t('Describes an instructor for courses'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'course_location' => array(
      'name' => t('Course Location'),
      'base' => 'node_content',
      'description' => t('Describes a location where a course is given'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
