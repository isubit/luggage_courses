<?php

/**
 * @file
 * Display suite custom field callbacks.
 */

/**
 * Callback to render related courses.
 */
function _luggage_courses_related_courses($field) {
  $node = $field['entity'];
  $node_wrapper = entity_metadata_wrapper('node', $node);
  $courses = $node_wrapper->field_course_related->raw();
  if (empty($courses)) {
    return;
  }

  $output = '<h2>Related courses</h2>';
  foreach ($node_wrapper->field_course_related->getIterator() as $delta => $related_course_wrapper) {
    $output .= '<h3><a href="/node/' . $related_course_wrapper->getIdentifier() . '">' . $related_course_wrapper->title->value(array('sanitize' => TRUE)) . '</a></h3>';
    $output .= views_embed_view('course_sections', 'block', $related_course_wrapper->getIdentifier());
  }

  return $output;
}

/**
 * Callback to render section title.
 *
 * Returns the title wrapped by the URL field if it was set.
 */
function _luggage_courses_section_title($field) {
  $node = $field['entity'];
  $wrapper = entity_metadata_wrapper('node', $node);
  $url_data = $wrapper->field_course_location_url->value();
  if (!empty($url_data)) {
    $output = l($wrapper->title->value(), $url_data['url'], array('absolute' => TRUE));
  }
  else {
    $output = $wrapper->title->value();
  }

  return $output;
}

