<?php
/**
 * @file
 * luggage_courses.default_cer_presets.inc
 */

/**
 * Implements hook_default_cer().
 */
function luggage_courses_default_cer() {
  $export = array();

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'node*course*field_course_related*node*course*field_course_related';
  $cnr_obj->enabled = 1;
  $export['node*course*field_course_related*node*course*field_course_related'] = $cnr_obj;

  return $export;
}
