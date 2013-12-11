<?php
/**
 * @file
 * content_page.features.inc
 */

/**
 * Implements hook_node_info().
 */
function content_page_node_info() {
  $items = array(
    'content_page' => array(
      'name' => t('Page de contenu'),
      'base' => 'node_content',
      'description' => t('Page de contenu permettant de créer une route bien simple'),
      'has_title' => '1',
      'title_label' => t('Titre'),
      'help' => '',
    ),
  );
  return $items;
}
