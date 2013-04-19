<?php
/**
 * @file
 * video_user.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function video_user_taxonomy_default_vocabularies() {
  return array(
    'activities' => array(
      'name' => 'Activities',
      'machine_name' => 'activities',
      'description' => 'Activities for user profiles.',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'books' => array(
      'name' => 'Books',
      'machine_name' => 'books',
      'description' => 'Books for user profile.',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'favourite_athletes' => array(
      'name' => 'Favourite athletes',
      'machine_name' => 'favourite_athletes',
      'description' => 'Favourite athletes for user profiles.',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'favourite_sports' => array(
      'name' => 'Favourite sports',
      'machine_name' => 'favourite_sports',
      'description' => 'Favourite sports for user profiles.',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'favourite_teams' => array(
      'name' => 'Favourite teams',
      'machine_name' => 'favourite_teams',
      'description' => 'Favourite teams for user profiles.',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'games' => array(
      'name' => 'Games',
      'machine_name' => 'games',
      'description' => 'Games for user profiles.',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'interests' => array(
      'name' => 'Interests',
      'machine_name' => 'interests',
      'description' => 'Interests for user profiles.',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'locations' => array(
      'name' => 'Locations',
      'machine_name' => 'locations',
      'description' => 'Hometown and current location in user profiles.',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'movies' => array(
      'name' => 'Movies',
      'machine_name' => 'movies',
      'description' => 'Movies for user profiles.',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'music' => array(
      'name' => 'Music',
      'machine_name' => 'music',
      'description' => 'Musics for user profile.',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'people_who_inspire_you' => array(
      'name' => 'People who inspire you',
      'machine_name' => 'people_who_inspire_you',
      'description' => 'People who inspire you for user profiles.',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'religion' => array(
      'name' => 'Religion',
      'machine_name' => 'religion',
      'description' => 'Religion in user profiles.',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'television' => array(
      'name' => 'Television',
      'machine_name' => 'television',
      'description' => 'Television for user profiles.',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
  );
}
