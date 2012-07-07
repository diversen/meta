<?php

/**
 * Install file for meta
 *
 * @package     menus
 */
$_INSTALL['MAIN_MENU_ITEM'] = array (
    'title' => 'meta_main_menu_title',
    'url' => '/meta/index',
    'auth' => 'admin',
    'module_name' => 'meta',
    'parent' => 0,
    'weight' => 3,
    'admin_only' => true,
    'section' => 'meta'
);

$_INSTALL['VERSION'] = 1.41;

$_INSTALL['PUBLIC_CLONE_URL'] = 'git://github.com/diversen/meta.git';
$_INSTALL['PRIVATE_CLONE_URL'] = 'git@github.com:diversen/meta.git';

