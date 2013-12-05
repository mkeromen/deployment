<?php
/**
 * @file
 * accueil.features.inc
 */

/**
 * Implements hook_node_info().
 */
function accueil_node_info() {
  $items = array(
    'page_d_accueil' => array(
      'name' => t('Page d\'accueil'),
      'base' => 'node_content',
      'description' => t('Type de contenu utilisé uniquement pour créer les pages d\'accueil du site'),
      'has_title' => '1',
      'title_label' => t('Titre'),
      'help' => '',
    ),
  );
  return $items;
}
