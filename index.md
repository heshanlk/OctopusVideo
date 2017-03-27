### Octopus video 1.x for Drupal 7.x
The open source video transcoding and delivering platform based on Drupal. This will provide you ability to quickly set up a video platform like Youtube using self hosted Ffmpge or using Zencoder video transcoder. This will provide a great implementation with Amazon S3 so your videos will deliver from S3 cloud.

### Demo
Click [here](http://simplytest.me/project/octopus_video) for the demo.

### Requirements
In addition to the standard Drupal requirements you will need the following to make use of Octopus video:

* drush - http://drupal.org/project/drush
* drush make - http://drupal.org/project/drush_make (This comes with Drush core)
* git - http://git-scm.com

### Getting started
Octopus video for 7.x requires several patches to be applied to Drupal core. It provides a `build-octopus-video.make` file for building a full Drupal distro including core patches as well as a copy of the `Octopus video` install profile. So run following.

```
$ drush make https://raw.githubusercontent.com/heidisoft/OctopusVideo/master/build-octopus-video.make [directory]
```

This will download all the required files for the distribution, so now access your site from the browser and choose "Octopus video" as the distribution then follow the steps.

### Authors and Contributors
@heshanlk - Heshan Wanigasooriya (heshan@heidisoft.com)

### Support or Contact
Having trouble with setting up? Please contact support@heidisoft.com and we’ll help you sort it out.
