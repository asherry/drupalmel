<?php
/**
 * @file
 * Variable info autoload hooks.
 */
function drupalmel_core_variable_info() {
  $variables['github_fork_account'] = array(
    'type' => 'string',
    'title' => t('Github account'),
    'default' => 'Drupal',
    'description' => t('Github account associated with the fork link.'),
    'required' => TRUE,
  );

  return $variables;
}
