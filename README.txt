Octopus 1.x for Drupal 7.x
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
Octopus for 7.x requies several patches to be applied to Drupal core. It
provides a `distro.make` file for building a full Drupal distro including core
patches as well as a copy of the `videokit` install profile.

1. Grab the `distro.make` file from Build Kit and run:

        $ drush make distro.make [directory]

   or use its url on Drupal.org directly:

        $ drush make "http://drupalcode.org/project/videokit.git/blob_plain/refs/heads/7.x-1.x:/distro.make" [directory]

2. Choose the "Octopus" install profile when installing Drupal

Maintainers
-----------
- Heshan Wanigasooriya (heshan.lk)