<?php
/**
 * @file
 * video_styles.features.inc
 */

/**
 * Implementation of hook_image_default_styles().
 */
function video_styles_image_default_styles() {
  $styles = array();

  // Exported image style: video_thumbnail_210x118
  $styles['video_thumbnail_210x118'] = array(
    'name' => 'video_thumbnail_210x118',
    'effects' => array(
      1 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '210',
          'height' => '118',
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: video_thumbnail_80sq
  $styles['video_thumbnail_80sq'] = array(
    'name' => 'video_thumbnail_80sq',
    'effects' => array(
      3 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '80',
          'height' => '80',
        ),
        'weight' => '1',
      ),
    ),
  );

  return $styles;
}
