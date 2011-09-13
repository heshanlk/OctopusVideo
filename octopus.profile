<?php

/**
 * Implements hook_install_tasks().
 */
function octopus_install_tasks($install_state) {
  $country_is_us = !empty($install_state['parameters']['country']) && $install_state['parameters']['country'] = 'US';
  $country_is_ca = !empty($install_state['parameters']['country']) && $install_state['parameters']['country'] = 'CA';
  $tasks = array(
    'geo_country' => array(
      'display_name' => st('Choose a country'),
    ),
    'geo_state' => array(
      'display_name' => st('Choose a state or province'),
      'display' => $country_is_us || $country_is_ca,
      'type' => 'form',
      'run' => $country_is_us || $country_is_ca ? INSTALL_TASK_RUN_IF_NOT_COMPLETED : INSTALL_TASK_SKIP,
      'function' => $country_is_us ? 'geo_state_form' : 'geo_province_form',
    ),
  );
  return $tasks;
}

/**
 * Implements hook_form_FORM_ID_alter().
 *
 * Allows the profile to alter the site configuration form.
 */
function octopus_form_install_configure_form_alter(&$form, $form_state) {
  // Pre-populate the site name with the server name.
  $form['site_information']['site_name']['#default_value'] = 'Octopus';
}