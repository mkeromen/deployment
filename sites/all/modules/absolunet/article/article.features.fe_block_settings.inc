<?php
/**
 * @file
 * article.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function article_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-article-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'article-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<?php return check_blocks_flag(\'block_list_articles\'); ?>',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => -8,
      ),
      'deployment' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'deployment',
        'weight' => -8,
      ),
    ),
    'title' => '',
    'visibility' => 2,
  );

  return $export;
}
