<?php
// $Id: color.inc,v 1.4 2007/12/14 17:00:14 goba Exp $

$info = array(
  /** Allow color module to utilize as many colors as you need.
   * The order specified here will directly correlate to the order
   * of the colors specified in the schemes portion of the $info array.
   */
  'names' => array(
    'base' => t('Base color'),
    'link' => t('Link color'),
    'top' => t('Header top'),
    'bottom' => t('Header bottom'),
    'text' => t('Text color'),
    'extra' => t('Extra Color'),
  ),
  // Pre-defined color schemes.
  'schemes' => array(
    '#0072b9,#027ac6,#2385c2,#5ab5ee,#494949,#ffffff' => t('Blue Lagoon (Default)'),
    '#464849,#2f416f,#2a2b2d,#5d6779,#494949,#ffffff' => t('Ash'),
    '#d0cb9a,#917803,#efde01,#e6fb2d,#494949,#ffffff' => t('Citrus Blast'),
    '#b7a0ba,#c70000,#a1443a,#f21107,#515d52,#ffffff' => t('Shiny Tomato'),
  ),

  // Images to copy over.
  'copy' => array(
    'images/menu-collapsed.gif',
    'images/menu-collapsed-rtl.gif',
    'images/menu-expanded.gif',
    'images/menu-leaf.gif',
  ),

  // CSS files (excluding @import) to rewrite with new color scheme.
  'css' => array(
    'css/style.css',
  ),

  // Color areas to fill (x, y, width, height).
  'fill' => array(
    'top' => array(0, 160, 1200, 350),
    'bottom' => array(120, 1427, 960, 134),
    'base' => array(0, 0, 1200, 160), //, array(0, 0, 1200, 1090)
  ),

  // Coordinates of all the theme slices (x, y, width, height)
  // with their filename as used in the stylesheet.
  'slices' => array(
  ),

  // Reference color used for blending. Matches the base.png's colors.
  'blend_target' => '#ffffff',

  // Preview files.
  'preview_image' => 'color/preview.png',
  'preview_css' => 'color/preview.css',

  // Base file for image generation.
  'base_image' => 'color/base.png',
);
