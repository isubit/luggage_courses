<?php
/**
 * @file
 * luggage_courses.multifield.inc
 */

/**
 * Implements hook_multifield_default_multifield().
 */
function luggage_courses_multifield_default_multifield() {
  $export = array();

  $multifield = new stdClass();
  $multifield->disabled = FALSE; /* Edit this to true to make a default multifield disabled initially */
  $multifield->api_version = 1;
  $multifield->machine_name = 'course_section';
  $multifield->label = 'Course Section';
  $multifield->description = '';
  $export['course_section'] = $multifield;

  return $export;
}
