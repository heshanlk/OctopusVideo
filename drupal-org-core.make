; This file describes the core project requirements for Octopus 7.x. Several
; patches against Drupal core and their associated issue numbers have been
; included here for reference.

api = 2
core = 7.x

projects[drupal][type] = core
projects[drupal][version] = 7.21

; Use vocabulary machine name for permissions
; http://drupal.org/node/995156
projects[drupal][patch][995156] = http://drupal.org/files/issues/995156-5_portable_taxonomy_permissions.patch