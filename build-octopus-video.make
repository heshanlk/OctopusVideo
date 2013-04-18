api = 2
core = 7.x

; Include Drupal core and any core patches.
includes[] = drupal-org-core.make

; Download the Octopus video install profile
projects[octopus_video][type] = profile
projects[octopus_video][download][type] = git
projects[octopus_video][download][url] = https://github.com/heidisoft/Octopus.git
; projects[octopus_video][download][branch] = 7.x-2.x