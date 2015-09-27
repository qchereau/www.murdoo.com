<?php
/**
 * @file
 * murdoocore.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function murdoocore_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: management_responsive-menus:admin/config/user-interface/responsive_menus
  $menu_links['management_responsive-menus:admin/config/user-interface/responsive_menus'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/user-interface/responsive_menus',
    'router_path' => 'admin/config/user-interface/responsive_menus',
    'link_title' => 'Responsive Menus',
    'options' => array(
      'attributes' => array(
        'title' => 'Settings for Responsive Menus module',
      ),
      'identifier' => 'management_responsive-menus:admin/config/user-interface/responsive_menus',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_user-interface:admin/config/user-interface',
  );
  // Exported menu link: management_sticky-nav-settings:admin/config/user-interface/stickynav
  $menu_links['management_sticky-nav-settings:admin/config/user-interface/stickynav'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/user-interface/stickynav',
    'router_path' => 'admin/config/user-interface/stickynav',
    'link_title' => 'Sticky Nav Settings',
    'options' => array(
      'attributes' => array(
        'title' => 'Settings of sticky navigation on your website',
      ),
      'identifier' => 'management_sticky-nav-settings:admin/config/user-interface/stickynav',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_user-interface:admin/config/user-interface',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Responsive Menus');
  t('Sticky Nav Settings');

  return $menu_links;
}
