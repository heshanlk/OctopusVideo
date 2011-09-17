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

  // Exported image style: 128x72
  $styles['128x72'] = array(
    'name' => '128x72',
    'effects' => array(
      2 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '128',
          'height' => '72',
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: 180x295
  $styles['180x295'] = array(
    'name' => '180x295',
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
          'width' => '180',
          'height' => '295',
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: 200x104
  $styles['200x104'] = array(
    'name' => '200x104',
    'effects' => array(
      7 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '200',
          'height' => '104',
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: 288x162
  $styles['288x162'] = array(
    'name' => '288x162',
    'effects' => array(
      5 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '288',
          'height' => '162',
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: 300x100
  $styles['300x100'] = array(
    'name' => '300x100',
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
          'width' => '300',
          'height' => '100',
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: 96x54
  $styles['96x54'] = array(
    'name' => '96x54',
    'effects' => array(
      6 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '96',
          'height' => '54',
        ),
        'weight' => '1',
      ),
    ),
  );

  return $styles;
}
