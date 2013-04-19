<?php
/**
 * @file
 * video_video.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function video_video_default_rules_configuration() {
  $items = array();
  $items['rules_video_node_creation'] = entity_import('rules_config', '{ "rules_video_node_creation" : {
      "LABEL" : "Video node creation",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules" ],
      "ON" : [ "node_insert" ],
      "IF" : [
        { "node_is_of_type" : { "node" : [ "node" ], "type" : { "value" : { "video" : "video" } } } }
      ],
      "DO" : [ { "node_unpublish" : { "node" : [ "node" ] } } ]
    }
  }');
  $items['rules_video_process'] = entity_import('rules_config', '{ "rules_video_process" : {
      "LABEL" : "Video process",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules", "video" ],
      "ON" : [ "video_success" ],
      "DO" : [ { "node_publish" : { "node" : [ "node" ] } } ]
    }
  }');
  return $items;
}
