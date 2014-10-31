<?php

/**
 * @file
 * Administrative settings for the Chute API module.
 */

/**
 * Administrative settings for the Chute API module.
 *
 */
function chute_api_settings_form($form, &$form_state) {

  // @TODO: Add fieldset and help text.

  $form['chute_api_app_id'] = array(
    '#type' => 'textfield',
    '#title' => t('Chute API Application ID'),
    '#default_value' => variable_get('chute_api_app_id', ''),
  );

  $form['chute_api_app_secret'] = array(
    '#type' => 'textfield',
    '#title' => t('Chute API Application Secret'),
    '#default_value' => variable_get('chute_api_app_secret', ''),
  );

  $form['chute_api_app_token'] = array(
    '#type' => 'textfield',
    '#title' => t('Chute API Application Token'),
    '#default_value' => variable_get('chute_api_app_token', ''),
  );

  return system_settings_form($form);
}