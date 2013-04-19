<?php
/**
 * @file
 * video_user.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function video_user_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'taxonomy_users';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Taxonomy users';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Followers';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: User: Books (field_books) */
  $handler->display->display_options['relationships']['field_books_tid']['id'] = 'field_books_tid';
  $handler->display->display_options['relationships']['field_books_tid']['table'] = 'field_data_field_books';
  $handler->display->display_options['relationships']['field_books_tid']['field'] = 'field_books_tid';
  /* Field: Field: Picture */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '80x80',
    'image_link' => 'content',
  );
  /* Field: User: Name */
  $handler->display->display_options['fields']['field_name']['id'] = 'field_name';
  $handler->display->display_options['fields']['field_name']['table'] = 'field_data_field_name';
  $handler->display->display_options['fields']['field_name']['field'] = 'field_name';
  $handler->display->display_options['fields']['field_name']['label'] = '';
  $handler->display->display_options['fields']['field_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_name']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_name']['type'] = 'text_plain';
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['uid']['alter']['text'] = '[field_name]';
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['hide_alter_empty'] = FALSE;
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['relationship'] = 'field_books_tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['vocabularies'] = array(
    'activities' => 0,
    'books' => 0,
    'categories' => 0,
    'favourite_athletes' => 0,
    'favourite_sports' => 0,
    'favourite_teams' => 0,
    'games' => 0,
    'interests' => 0,
    'locations' => 0,
    'movies' => 0,
    'music' => 0,
    'people_who_inspire_you' => 0,
    'religion' => 0,
    'tags' => 0,
    'television' => 0,
  );
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Telivision */
  $handler = $view->new_display('panel_pane', 'Telivision', 'panel_pane_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: User: Television (field_television) */
  $handler->display->display_options['relationships']['field_television_tid']['id'] = 'field_television_tid';
  $handler->display->display_options['relationships']['field_television_tid']['table'] = 'field_data_field_television';
  $handler->display->display_options['relationships']['field_television_tid']['field'] = 'field_television_tid';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['relationship'] = 'field_television_tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['vocabularies'] = array(
    'activities' => 0,
    'books' => 0,
    'categories' => 0,
    'favourite_athletes' => 0,
    'favourite_sports' => 0,
    'favourite_teams' => 0,
    'games' => 0,
    'interests' => 0,
    'locations' => 0,
    'movies' => 0,
    'music' => 0,
    'people_who_inspire_you' => 0,
    'religion' => 0,
    'tags' => 0,
    'television' => 0,
  );
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';

  /* Display: Religion */
  $handler = $view->new_display('panel_pane', 'Religion', 'panel_pane_2');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: User: Religion (field_religion) */
  $handler->display->display_options['relationships']['field_religion_tid']['id'] = 'field_religion_tid';
  $handler->display->display_options['relationships']['field_religion_tid']['table'] = 'field_data_field_religion';
  $handler->display->display_options['relationships']['field_religion_tid']['field'] = 'field_religion_tid';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['relationship'] = 'field_religion_tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['vocabularies'] = array(
    'activities' => 0,
    'books' => 0,
    'categories' => 0,
    'favourite_athletes' => 0,
    'favourite_sports' => 0,
    'favourite_teams' => 0,
    'games' => 0,
    'interests' => 0,
    'locations' => 0,
    'movies' => 0,
    'music' => 0,
    'people_who_inspire_you' => 0,
    'religion' => 0,
    'tags' => 0,
    'television' => 0,
  );
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';

  /* Display: People who inspire you */
  $handler = $view->new_display('panel_pane', 'People who inspire you', 'panel_pane_3');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: User: People who inspire you (field_people_who_inspire_you) */
  $handler->display->display_options['relationships']['field_people_who_inspire_you_tid']['id'] = 'field_people_who_inspire_you_tid';
  $handler->display->display_options['relationships']['field_people_who_inspire_you_tid']['table'] = 'field_data_field_people_who_inspire_you';
  $handler->display->display_options['relationships']['field_people_who_inspire_you_tid']['field'] = 'field_people_who_inspire_you_tid';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['relationship'] = 'field_people_who_inspire_you_tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['vocabularies'] = array(
    'activities' => 0,
    'books' => 0,
    'categories' => 0,
    'favourite_athletes' => 0,
    'favourite_sports' => 0,
    'favourite_teams' => 0,
    'games' => 0,
    'interests' => 0,
    'locations' => 0,
    'movies' => 0,
    'music' => 0,
    'people_who_inspire_you' => 0,
    'religion' => 0,
    'tags' => 0,
    'television' => 0,
  );
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';

  /* Display: Music */
  $handler = $view->new_display('panel_pane', 'Music', 'panel_pane_4');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: User: Music (field_music) */
  $handler->display->display_options['relationships']['field_music_tid']['id'] = 'field_music_tid';
  $handler->display->display_options['relationships']['field_music_tid']['table'] = 'field_data_field_music';
  $handler->display->display_options['relationships']['field_music_tid']['field'] = 'field_music_tid';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['relationship'] = 'field_music_tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['vocabularies'] = array(
    'activities' => 0,
    'books' => 0,
    'categories' => 0,
    'favourite_athletes' => 0,
    'favourite_sports' => 0,
    'favourite_teams' => 0,
    'games' => 0,
    'interests' => 0,
    'locations' => 0,
    'movies' => 0,
    'music' => 0,
    'people_who_inspire_you' => 0,
    'religion' => 0,
    'tags' => 0,
    'television' => 0,
  );
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';

  /* Display: Movies */
  $handler = $view->new_display('panel_pane', 'Movies', 'panel_pane_5');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: User: Movies (field_movies) */
  $handler->display->display_options['relationships']['field_movies_tid']['id'] = 'field_movies_tid';
  $handler->display->display_options['relationships']['field_movies_tid']['table'] = 'field_data_field_movies';
  $handler->display->display_options['relationships']['field_movies_tid']['field'] = 'field_movies_tid';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['relationship'] = 'field_movies_tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['vocabularies'] = array(
    'activities' => 0,
    'books' => 0,
    'categories' => 0,
    'favourite_athletes' => 0,
    'favourite_sports' => 0,
    'favourite_teams' => 0,
    'games' => 0,
    'interests' => 0,
    'locations' => 0,
    'movies' => 0,
    'music' => 0,
    'people_who_inspire_you' => 0,
    'religion' => 0,
    'tags' => 0,
    'television' => 0,
  );
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';

  /* Display: Interests */
  $handler = $view->new_display('panel_pane', 'Interests', 'panel_pane_6');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: User: Interests (field_interests) */
  $handler->display->display_options['relationships']['field_interests_tid']['id'] = 'field_interests_tid';
  $handler->display->display_options['relationships']['field_interests_tid']['table'] = 'field_data_field_interests';
  $handler->display->display_options['relationships']['field_interests_tid']['field'] = 'field_interests_tid';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['relationship'] = 'field_interests_tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['vocabularies'] = array(
    'activities' => 0,
    'books' => 0,
    'categories' => 0,
    'favourite_athletes' => 0,
    'favourite_sports' => 0,
    'favourite_teams' => 0,
    'games' => 0,
    'interests' => 0,
    'locations' => 0,
    'movies' => 0,
    'music' => 0,
    'people_who_inspire_you' => 0,
    'religion' => 0,
    'tags' => 0,
    'television' => 0,
  );
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';

  /* Display: Hometown */
  $handler = $view->new_display('panel_pane', 'Hometown', 'panel_pane_7');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: User: Hometown (field_hometown) */
  $handler->display->display_options['relationships']['field_hometown_tid']['id'] = 'field_hometown_tid';
  $handler->display->display_options['relationships']['field_hometown_tid']['table'] = 'field_data_field_hometown';
  $handler->display->display_options['relationships']['field_hometown_tid']['field'] = 'field_hometown_tid';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['relationship'] = 'field_hometown_tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['vocabularies'] = array(
    'activities' => 0,
    'books' => 0,
    'categories' => 0,
    'favourite_athletes' => 0,
    'favourite_sports' => 0,
    'favourite_teams' => 0,
    'games' => 0,
    'interests' => 0,
    'locations' => 0,
    'movies' => 0,
    'music' => 0,
    'people_who_inspire_you' => 0,
    'religion' => 0,
    'tags' => 0,
    'television' => 0,
  );
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';

  /* Display: Games */
  $handler = $view->new_display('panel_pane', 'Games', 'panel_pane_8');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: User: Games (field_games) */
  $handler->display->display_options['relationships']['field_games_tid']['id'] = 'field_games_tid';
  $handler->display->display_options['relationships']['field_games_tid']['table'] = 'field_data_field_games';
  $handler->display->display_options['relationships']['field_games_tid']['field'] = 'field_games_tid';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['relationship'] = 'field_games_tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['vocabularies'] = array(
    'activities' => 0,
    'books' => 0,
    'categories' => 0,
    'favourite_athletes' => 0,
    'favourite_sports' => 0,
    'favourite_teams' => 0,
    'games' => 0,
    'interests' => 0,
    'locations' => 0,
    'movies' => 0,
    'music' => 0,
    'people_who_inspire_you' => 0,
    'religion' => 0,
    'tags' => 0,
    'television' => 0,
  );
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';

  /* Display: Favourite teams */
  $handler = $view->new_display('panel_pane', 'Favourite teams', 'panel_pane_9');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: User: Favourite teams (field_favourite_teams) */
  $handler->display->display_options['relationships']['field_favourite_teams_tid']['id'] = 'field_favourite_teams_tid';
  $handler->display->display_options['relationships']['field_favourite_teams_tid']['table'] = 'field_data_field_favourite_teams';
  $handler->display->display_options['relationships']['field_favourite_teams_tid']['field'] = 'field_favourite_teams_tid';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['relationship'] = 'field_favourite_teams_tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['vocabularies'] = array(
    'activities' => 0,
    'books' => 0,
    'categories' => 0,
    'favourite_athletes' => 0,
    'favourite_sports' => 0,
    'favourite_teams' => 0,
    'games' => 0,
    'interests' => 0,
    'locations' => 0,
    'movies' => 0,
    'music' => 0,
    'people_who_inspire_you' => 0,
    'religion' => 0,
    'tags' => 0,
    'television' => 0,
  );
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';

  /* Display: Favourite sports */
  $handler = $view->new_display('panel_pane', 'Favourite sports', 'panel_pane_10');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: User: Favourite sports (field_favourite_sports) */
  $handler->display->display_options['relationships']['field_favourite_sports_tid']['id'] = 'field_favourite_sports_tid';
  $handler->display->display_options['relationships']['field_favourite_sports_tid']['table'] = 'field_data_field_favourite_sports';
  $handler->display->display_options['relationships']['field_favourite_sports_tid']['field'] = 'field_favourite_sports_tid';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['relationship'] = 'field_favourite_sports_tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['vocabularies'] = array(
    'activities' => 0,
    'books' => 0,
    'categories' => 0,
    'favourite_athletes' => 0,
    'favourite_sports' => 0,
    'favourite_teams' => 0,
    'games' => 0,
    'interests' => 0,
    'locations' => 0,
    'movies' => 0,
    'music' => 0,
    'people_who_inspire_you' => 0,
    'religion' => 0,
    'tags' => 0,
    'television' => 0,
  );
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';

  /* Display: Favourite athletes */
  $handler = $view->new_display('panel_pane', 'Favourite athletes', 'panel_pane_11');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: User: Favourite athletes (field_favourite_athletes) */
  $handler->display->display_options['relationships']['field_favourite_athletes_tid']['id'] = 'field_favourite_athletes_tid';
  $handler->display->display_options['relationships']['field_favourite_athletes_tid']['table'] = 'field_data_field_favourite_athletes';
  $handler->display->display_options['relationships']['field_favourite_athletes_tid']['field'] = 'field_favourite_athletes_tid';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['relationship'] = 'field_favourite_athletes_tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['vocabularies'] = array(
    'activities' => 0,
    'books' => 0,
    'categories' => 0,
    'favourite_athletes' => 0,
    'favourite_sports' => 0,
    'favourite_teams' => 0,
    'games' => 0,
    'interests' => 0,
    'locations' => 0,
    'movies' => 0,
    'music' => 0,
    'people_who_inspire_you' => 0,
    'religion' => 0,
    'tags' => 0,
    'television' => 0,
  );
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';

  /* Display: User location */
  $handler = $view->new_display('panel_pane', 'User location', 'panel_pane_12');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: User: Current location (field_current_location) */
  $handler->display->display_options['relationships']['field_current_location_tid']['id'] = 'field_current_location_tid';
  $handler->display->display_options['relationships']['field_current_location_tid']['table'] = 'field_data_field_current_location';
  $handler->display->display_options['relationships']['field_current_location_tid']['field'] = 'field_current_location_tid';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['relationship'] = 'field_current_location_tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['vocabularies'] = array(
    'activities' => 0,
    'books' => 0,
    'categories' => 0,
    'favourite_athletes' => 0,
    'favourite_sports' => 0,
    'favourite_teams' => 0,
    'games' => 0,
    'interests' => 0,
    'locations' => 0,
    'movies' => 0,
    'music' => 0,
    'people_who_inspire_you' => 0,
    'religion' => 0,
    'tags' => 0,
    'television' => 0,
  );
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';

  /* Display: Books */
  $handler = $view->new_display('panel_pane', 'Books', 'panel_pane_13');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: User: Books (field_books) */
  $handler->display->display_options['relationships']['field_books_tid']['id'] = 'field_books_tid';
  $handler->display->display_options['relationships']['field_books_tid']['table'] = 'field_data_field_books';
  $handler->display->display_options['relationships']['field_books_tid']['field'] = 'field_books_tid';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['relationship'] = 'field_books_tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['vocabularies'] = array(
    'activities' => 0,
    'books' => 0,
    'categories' => 0,
    'favourite_athletes' => 0,
    'favourite_sports' => 0,
    'favourite_teams' => 0,
    'games' => 0,
    'interests' => 0,
    'locations' => 0,
    'movies' => 0,
    'music' => 0,
    'people_who_inspire_you' => 0,
    'religion' => 0,
    'tags' => 0,
    'television' => 0,
  );
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';

  /* Display: Activities */
  $handler = $view->new_display('panel_pane', 'Activities', 'panel_pane_14');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: User: Activities (field_activities) */
  $handler->display->display_options['relationships']['field_activities_tid']['id'] = 'field_activities_tid';
  $handler->display->display_options['relationships']['field_activities_tid']['table'] = 'field_data_field_activities';
  $handler->display->display_options['relationships']['field_activities_tid']['field'] = 'field_activities_tid';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['relationship'] = 'field_activities_tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['vocabularies'] = array(
    'activities' => 0,
    'books' => 0,
    'categories' => 0,
    'favourite_athletes' => 0,
    'favourite_sports' => 0,
    'favourite_teams' => 0,
    'games' => 0,
    'interests' => 0,
    'locations' => 0,
    'movies' => 0,
    'music' => 0,
    'people_who_inspire_you' => 0,
    'religion' => 0,
    'tags' => 0,
    'television' => 0,
  );
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $export['taxonomy_users'] = $view;

  return $export;
}
