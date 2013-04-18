Octopus video 1.x for Drupal 7.x
----------------------------
Social video platform.

Requirements
------------
In addition to the standard Drupal requirements you will need the following to
make use of Octopus:

- drush 3.1 - http://drupal.org/project/drush
- drush make 2.0 beta 9 - http://drupal.org/project/drush_make
- git - http://git-scm.com


Getting started
---------------
Octopus video for 7.x requires several patches to be applied to Drupal core. It
provides a `build-octopus-video.make` file for building a full Drupal distro including core
patches as well as a copy of the `Octopus video` install profile.

1. Grab the `build-octopus-video.make.make` file from Octopus Video and run:

        $ drush make build-octopus-video.make [directory]

   or use its url on Drupal.org directly:

        $ drush make https://raw.github.com/heidisoft/Octopus/master/build-octopus-video.make [directory]

2. Choose the "Octopus Video" install profile when installing Drupal

Maintainers
-----------
- Heshan Wanigasooriya (heshand@heidisoft.com)