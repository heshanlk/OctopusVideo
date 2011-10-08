<?php
/**
 * @file
 * video_user.views_default.inc
 */

/**
 * Implementation of hook_views_default_views().
 */
function video_user_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'taxonomy_users';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Taxonomy users';
  $view->core = 7;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Followers';
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
  $handler->display->display_options['fields']['field_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_image']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '80x80',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_image']['field_api_classes'] = 0;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['link_to_user'] = 1;
  $handler->display->display_options['fields']['name']['overwrite_anonymous'] = 0;
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['relationship'] = 'field_books_tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['term_page'] = 1;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['node'] = 0;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['limit'] = 0;
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
  $handler->display->display_options['arguments']['tid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['tid']['not'] = 0;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Telivision */
  $handler = $view->new_display('panel_pane', 'Telivision', 'panel_pane_1');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: User: Television (field_television) */
  $handler->display->display_options['relationships']['field_television_tid']['id'] = 'field_television_tid';
  $handler->display->display_options['relationships']['field_television_tid']['table'] = 'field_data_field_television';
  $handler->display->display_options['relationships']['field_television_tid']['field'] = 'field_television_tid';
  $handler->display->display_options['relationships']['field_television_tid']['required'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['relationship'] = 'field_television_tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['term_page'] = 1;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['node'] = 0;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['limit'] = 0;
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
  $handler->display->display_options['arguments']['tid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['tid']['not'] = 0;

  /* Display: Religion */
  $handler = $view->new_display('panel_pane', 'Religion', 'panel_pane_2');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: User: Religion (field_religion) */
  $handler->display->display_options['relationships']['field_religion_tid']['id'] = 'field_religion_tid';
  $handler->display->display_options['relationships']['field_religion_tid']['table'] = 'field_data_field_religion';
  $handler->display->display_options['relationships']['field_religion_tid']['field'] = 'field_religion_tid';
  $handler->display->display_options['relationships']['field_religion_tid']['required'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['relationship'] = 'field_religion_tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['term_page'] = 1;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['node'] = 0;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['limit'] = 0;
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
  $handler->display->display_options['arguments']['tid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['tid']['not'] = 0;

  /* Display: People who inspire you */
  $handler = $view->new_display('panel_pane', 'People who inspire you', 'panel_pane_3');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: User: People who inspire you (field_people_who_inspire_you) */
  $handler->display->display_options['relationships']['field_people_who_inspire_you_tid']['id'] = 'field_people_who_inspire_you_tid';
  $handler->display->display_options['relationships']['field_people_who_inspire_you_tid']['table'] = 'field_data_field_people_who_inspire_you';
  $handler->display->display_options['relationships']['field_people_who_inspire_you_tid']['field'] = 'field_people_who_inspire_you_tid';
  $handler->display->display_options['relationships']['field_people_who_inspire_you_tid']['required'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['relationship'] = 'field_people_who_inspire_you_tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['term_page'] = 1;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['node'] = 0;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['limit'] = 0;
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
  $handler->display->display_options['arguments']['tid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['tid']['not'] = 0;

  /* Display: Music */
  $handler = $view->new_display('panel_pane', 'Music', 'panel_pane_4');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: User: Music (field_music) */
  $handler->display->display_options['relationships']['field_music_tid']['id'] = 'field_music_tid';
  $handler->display->display_options['relationships']['field_music_tid']['table'] = 'field_data_field_music';
  $handler->display->display_options['relationships']['field_music_tid']['field'] = 'field_music_tid';
  $handler->display->display_options['relationships']['field_music_tid']['required'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['relationship'] = 'field_music_tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['term_page'] = 1;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['node'] = 0;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['limit'] = 0;
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
  $handler->display->display_options['arguments']['tid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['tid']['not'] = 0;

  /* Display: Movies */
  $handler = $view->new_display('panel_pane', 'Movies', 'panel_pane_5');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: User: Movies (field_movies) */
  $handler->display->display_options['relationships']['field_movies_tid']['id'] = 'field_movies_tid';
  $handler->display->display_options['relationships']['field_movies_tid']['table'] = 'field_data_field_movies';
  $handler->display->display_options['relationships']['field_movies_tid']['field'] = 'field_movies_tid';
  $handler->display->display_options['relationships']['field_movies_tid']['required'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['relationship'] = 'field_movies_tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['term_page'] = 1;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['node'] = 0;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['limit'] = 0;
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
  $handler->display->display_options['arguments']['tid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['tid']['not'] = 0;

  /* Display: Interests */
  $handler = $view->new_display('panel_pane', 'Interests', 'panel_pane_6');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: User: Interests (field_interests) */
  $handler->display->display_options['relationships']['field_interests_tid']['id'] = 'field_interests_tid';
  $handler->display->display_options['relationships']['field_interests_tid']['table'] = 'field_data_field_interests';
  $handler->display->display_options['relationships']['field_interests_tid']['field'] = 'field_interests_tid';
  $handler->display->display_options['relationships']['field_interests_tid']['required'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['relationship'] = 'field_interests_tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['term_page'] = 1;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['node'] = 0;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['limit'] = 0;
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
  $handler->display->display_options['arguments']['tid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['tid']['not'] = 0;

  /* Display: Hometown */
  $handler = $view->new_display('panel_pane', 'Hometown', 'panel_pane_7');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: User: Hometown (field_hometown) */
  $handler->display->display_options['relationships']['field_hometown_tid']['id'] = 'field_hometown_tid';
  $handler->display->display_options['relationships']['field_hometown_tid']['table'] = 'field_data_field_hometown';
  $handler->display->display_options['relationships']['field_hometown_tid']['field'] = 'field_hometown_tid';
  $handler->display->display_options['relationships']['field_hometown_tid']['required'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['relationship'] = 'field_hometown_tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['term_page'] = 1;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['node'] = 0;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['limit'] = 0;
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
  $handler->display->display_options['arguments']['tid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['tid']['not'] = 0;

  /* Display: Games */
  $handler = $view->new_display('panel_pane', 'Games', 'panel_pane_8');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: User: Games (field_games) */
  $handler->display->display_options['relationships']['field_games_tid']['id'] = 'field_games_tid';
  $handler->display->display_options['relationships']['field_games_tid']['table'] = 'field_data_field_games';
  $handler->display->display_options['relationships']['field_games_tid']['field'] = 'field_games_tid';
  $handler->display->display_options['relationships']['field_games_tid']['required'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['relationship'] = 'field_games_tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['term_page'] = 1;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['node'] = 0;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['limit'] = 0;
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
  $handler->display->display_options['arguments']['tid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['tid']['not'] = 0;

  /* Display: Favourite teams */
  $handler = $view->new_display('panel_pane', 'Favourite teams', 'panel_pane_9');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: User: Favourite teams (field_favourite_teams) */
  $handler->display->display_options['relationships']['field_favourite_teams_tid']['id'] = 'field_favourite_teams_tid';
  $handler->display->display_options['relationships']['field_favourite_teams_tid']['table'] = 'field_data_field_favourite_teams';
  $handler->display->display_options['relationships']['field_favourite_teams_tid']['field'] = 'field_favourite_teams_tid';
  $handler->display->display_options['relationships']['field_favourite_teams_tid']['required'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['relationship'] = 'field_favourite_teams_tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['term_page'] = 1;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['node'] = 0;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['limit'] = 0;
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
  $handler->display->display_options['arguments']['tid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['tid']['not'] = 0;

  /* Display: Favourite sports */
  $handler = $view->new_display('panel_pane', 'Favourite sports', 'panel_pane_10');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: User: Favourite sports (field_favourite_sports) */
  $handler->display->display_options['relationships']['field_favourite_sports_tid']['id'] = 'field_favourite_sports_tid';
  $handler->display->display_options['relationships']['field_favourite_sports_tid']['table'] = 'field_data_field_favourite_sports';
  $handler->display->display_options['relationships']['field_favourite_sports_tid']['field'] = 'field_favourite_sports_tid';
  $handler->display->display_options['relationships']['field_favourite_sports_tid']['required'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['relationship'] = 'field_favourite_sports_tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['term_page'] = 1;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['node'] = 0;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['limit'] = 0;
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
  $handler->display->display_options['arguments']['tid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['tid']['not'] = 0;

  /* Display: Favourite athletes */
  $handler = $view->new_display('panel_pane', 'Favourite athletes', 'panel_pane_11');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: User: Favourite athletes (field_favourite_athletes) */
  $handler->display->display_options['relationships']['field_favourite_athletes_tid']['id'] = 'field_favourite_athletes_tid';
  $handler->display->display_options['relationships']['field_favourite_athletes_tid']['table'] = 'field_data_field_favourite_athletes';
  $handler->display->display_options['relationships']['field_favourite_athletes_tid']['field'] = 'field_favourite_athletes_tid';
  $handler->display->display_options['relationships']['field_favourite_athletes_tid']['required'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['relationship'] = 'field_favourite_athletes_tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['term_page'] = 1;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['node'] = 0;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['limit'] = 0;
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
  $handler->display->display_options['arguments']['tid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['tid']['not'] = 0;

  /* Display: User location */
  $handler = $view->new_display('panel_pane', 'User location', 'panel_pane_12');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: User: Current location (field_current_location) */
  $handler->display->display_options['relationships']['field_current_location_tid']['id'] = 'field_current_location_tid';
  $handler->display->display_options['relationships']['field_current_location_tid']['table'] = 'field_data_field_current_location';
  $handler->display->display_options['relationships']['field_current_location_tid']['field'] = 'field_current_location_tid';
  $handler->display->display_options['relationships']['field_current_location_tid']['required'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['relationship'] = 'field_current_location_tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['term_page'] = 1;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['node'] = 0;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['limit'] = 0;
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
  $handler->display->display_options['arguments']['tid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['tid']['not'] = 0;

  /* Display: Books */
  $handler = $view->new_display('panel_pane', 'Books', 'panel_pane_13');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: User: Books (field_books) */
  $handler->display->display_options['relationships']['field_books_tid']['id'] = 'field_books_tid';
  $handler->display->display_options['relationships']['field_books_tid']['table'] = 'field_data_field_books';
  $handler->display->display_options['relationships']['field_books_tid']['field'] = 'field_books_tid';
  $handler->display->display_options['relationships']['field_books_tid']['required'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['relationship'] = 'field_books_tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['term_page'] = 1;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['node'] = 0;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['limit'] = 0;
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
  $handler->display->display_options['arguments']['tid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['tid']['not'] = 0;

  /* Display: Activities */
  $handler = $view->new_display('panel_pane', 'Activities', 'panel_pane_14');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: User: Activities (field_activities) */
  $handler->display->display_options['relationships']['field_activities_tid']['id'] = 'field_activities_tid';
  $handler->display->display_options['relationships']['field_activities_tid']['table'] = 'field_data_field_activities';
  $handler->display->display_options['relationships']['field_activities_tid']['field'] = 'field_activities_tid';
  $handler->display->display_options['relationships']['field_activities_tid']['required'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['relationship'] = 'field_activities_tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['term_page'] = 1;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['node'] = 0;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['limit'] = 0;
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
  $handler->display->display_options['arguments']['tid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['tid']['not'] = 0;
  $export['taxonomy_users'] = $view;

  $view = new view;
  $view->name = 'video_by_user';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Video by user';
  $view->core = 7;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Video by user';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = FALSE;
  $handler->display->display_options['empty']['area']['content'] = 'No videos has been added yet by this user.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['empty']['area']['tokenize'] = 0;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['required'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Video */
  $handler->display->display_options['fields']['field_video']['id'] = 'field_video';
  $handler->display->display_options['fields']['field_video']['table'] = 'field_data_field_video';
  $handler->display->display_options['fields']['field_video']['field'] = 'field_video';
  $handler->display->display_options['fields']['field_video']['label'] = '';
  $handler->display->display_options['fields']['field_video']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_video']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_video']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_video']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_video']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_video']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_video']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_video']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_video']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_video']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_video']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_video']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_video']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_video']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_video']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_video']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_video']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_video']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_video']['type'] = 'video_formatter_thumbnail';
  $handler->display->display_options['fields']['field_video']['settings'] = array(
    'image_style' => '96x54',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_video']['field_api_classes'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['uid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['uid']['not'] = 0;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'video' => 'video',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['video_by_user'] = $view;

  return $export;
}
