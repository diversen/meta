<?php

// non master domains are always visible for robots
// because those domains are often domains added in a multi hosting
// environment
$master = config::getMainIni('master');
if ($master) {
    $_MODULE_MENU[] = array(
        'title' => lang::translate('meta_meta_title'),
        'url' => '/meta/index',
        'auth' => 'admin',
    );
}