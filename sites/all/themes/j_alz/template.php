<?php

/**
 * @file
 * This file is empty by default because the base theme chain (Alpha & Omega) provides
 * all the basic functionality. However, in case you wish to customize the output that Drupal
 * generates through Alpha & Omega this file is a good place to do so.
 * 
 * Alpha comes with a neat solution for keeping this file as clean as possible while the code
 * for your subtheme grows. Please read the README.txt in the /preprocess and /process subfolders
 * for more information on this topic.
 */
 
 function j_alz_preprocess_views_view_fields(&$vars) {
  // Custom display of the members directory. Profile2 does not seems to expose
  // its fields to views. @todo not true anymore, fix it.
  $view = &$vars['view'];
  
  
  if($view->name == 'members2') {
   // dsm($vars['row']->field_field_xfp_firstname[0]['raw']['value']);
    //$vars['name'] = $vars['row']->field_field_xfp_firstname[0]['raw']['value'];
  }
  
}