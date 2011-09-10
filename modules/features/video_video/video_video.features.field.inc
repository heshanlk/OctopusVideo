<?php
/**
 * @file
 * video_video.features.field.inc
 */

/**
 * Implementation of hook_field_default_fields().
 */
function video_video_field_default_fields() {
  $fields = array();

  // Exported field: 'node-video-body'
  $fields['node-video-body'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(
        0 => 'node',
      ),
      'field_name' => 'body',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'text_with_summary',
    ),
    'field_instance' => array(
      'bundle' => 'video',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '1',
        ),
        'teaser' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(
            'trim_length' => 600,
          ),
          'type' => 'text_summary_or_trimmed',
          'weight' => '0',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'body',
      'label' => 'Description',
      'required' => 0,
      'settings' => array(
        'display_summary' => 1,
        'text_processing' => '1',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '5',
          'summary_rows' => 5,
        ),
        'type' => 'text_textarea_with_summary',
        'weight' => '2',
      ),
    ),
  );

  // Exported field: 'node-video-field_video'
  $fields['node-video-field_video'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_video',
      'foreign keys' => array(
        'fid' => array(
          'columns' => array(
            'fid' => 'fid',
          ),
          'table' => 'file_managed',
        ),
      ),
      'indexes' => array(
        'fid' => array(
          0 => 'fid',
        ),
      ),
      'module' => 'video',
      'settings' => array(
        'autoconversion' => 1,
        'autothumbnail' => 'auto',
        'default_video_thumbnail' => array(
          'fid' => 0,
          'remove_button' => 'Remove',
          'upload' => '',
          'upload_button' => 'Upload',
        ),
        'preview_video_thumb_style' => 'thumbnail',
        'uri_scheme' => 'public',
      ),
      'translatable' => '0',
      'type' => 'video',
    ),
    'field_instance' => array(
      'bundle' => 'video',
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'video',
          'settings' => array(
            'image_link' => '',
            'image_style' => '',
            'widthxheight' => '640x360',
          ),
          'type' => 'video_formatter_player',
          'weight' => '0',
        ),
        'teaser' => array(
          'label' => 'hidden',
          'module' => 'video',
          'settings' => array(
            'image_link' => 'content',
            'image_style' => 'video_thumbnail_210x118',
          ),
          'type' => 'video_formatter_thumbnail',
          'weight' => '0',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_video',
      'label' => 'Video',
      'required' => 0,
      'settings' => array(
        'default_dimensions' => '640x360',
        'default_player_dimensions' => '640x360',
        'file_directory' => 'videos/original',
        'file_extensions' => 'mp4 ogg avi mov wmv flv ogv webm',
        'max_filesize' => '',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'video',
        'settings' => array(
          'progress_indicator' => 'throbber',
        ),
        'type' => 'video_upload',
        'weight' => '1',
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Description');
  t('Video');

  return $fields;
}
