<?php

if (!session::checkAccessControl('meta_allow_edit')){
    moduleLoader::setStatus(403);
    return;
}

$master = config::getMainIni('master');
if (!$master) {
    moduleLoader::setStatus(403);
    return;
}

$m = new meta();
$m->form();

if (isset($_POST['robots_submit'])) {
    if (empty($m->errors)) {
        $m->update();
        session::setActionMessage(lang::translate('meta_meta_updated_action'));
        http::locationHeader('/meta/index');
    }
}
