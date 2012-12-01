api = 2
core = 7.x

; Modules =====================================================================

projects[admin_menu][subdir] = contrib
projects[admin_menu][version] = 3.0-rc1

projects[amazons3][subdir] = contrib
projects[amazons3][version] = 1.0-beta6

projects[awssdk][subdir] = contrib
projects[awssdk][version] = 4.8

projects[context][subdir] = contrib
projects[context][version] = 3.0-beta2

projects[ctools][subdir] = contrib
projects[ctools][version] = 1.2

projects[date][subdir] = contrib
projects[date][version] = 2.3

projects[devel][subdir] = contrib
projects[devel][version] = 1.2

projects[diff][subdir] = contrib
projects[diff][version] = 3.2

projects[entity][subdir] = contrib
projects[entity][version] = 1.0-rc1

projects[fblikebutton][subdir] = contrib
projects[fblikebutton][version] = 2.0

projects[features][subdir] = contrib
projects[features][version] = 1.0-rc1

projects[field_group][subdir] = contrib
projects[field_group][version] = 1.1

projects[fivestar][subdir] = contrib
projects[fivestar][version] = 2.0-alpha2

projects[flag][subdir] = contrib
projects[flag][version] = 2.0-beta6

projects[flowplayer][subdir] = contrib
projects[flowplayer][version] = 1.0-alpha1

projects[google_plusone][subdir] = contrib
projects[google_plusone][version] = 1.3

projects[libraries][subdir] = contrib
projects[libraries][version] = 2.0-alpha2

projects[logintoboggan][subdir] = contrib
projects[logintoboggan][version] = 1.3

projects[og][subdir] = contrib
projects[og][version] = 1.5

projects[openidadmin][subdir] = contrib
projects[openidadmin][version] = 1.0

projects[panels][subdir] = contrib
projects[panels][version] = 3.2

projects[pathauto][subdir] = contrib
projects[pathauto][version] = 1.0

projects[quicktabs][subdir] = contrib
projects[quicktabs][version] = 3.4

projects[rules][subdir] = contrib
projects[rules][version] = 2.1

projects[strongarm][subdir] = contrib
projects[strongarm][version] = 2.0-rc1

projects[token][subdir] = contrib
projects[token][version] = 1.4

projects[tweetbutton][subdir] = contrib
projects[tweetbutton][version] = 1.1

projects[video][subdir] = contrib
projects[video][version] = 2.5

projects[video_presets][subdir] = contrib
projects[video_presets][version] = 2.1

projects[videojs][subdir] = contrib
projects[videojs][version] = 2.0

projects[views][subdir] = contrib
projects[views][version] = 3.3

projects[views_slideshow][subdir] = contrib
projects[views_slideshow][version] = 3.0

projects[votingapi][subdir] = contrib
projects[votingapi][version] = 2.6

projects[wysiwyg][subdir] = contrib
projects[wysiwyg][version] = 2.1

; Themes ======================================================================

projects[omega][version] = 3.1

; Libraries ======================================================================

;videojs
libraries[video-js][type] = "libraries"
libraries[video-js][download][type] = "get"
libraries[video-js][download][url] = "https://github.com/downloads/zencoder/video-js/video-js-3.2.0.zip"

;ckeditor
libraries[ckeditor][type] = "libraries"
libraries[ckeditor][download][type] = "get"
libraries[ckeditor][download][url] = "http://download.cksource.com/CKEditor/CKEditor/CKEditor%203.6.2/ckeditor_3.6.2.tar.gz"

;jquery cycle
libraries[jquery.cycle][type] = "libraries"
libraries[jquery.cycle][download][type] = "file"
libraries[jquery.cycle][download][url] = "https://raw.github.com/malsup/cycle/master/jquery.cycle.all.js"

;zencoder
libraries[zencoder][download][type] = git
libraries[zencoder][download][url] = https://github.com/zencoder/zencoder-php.git
libraries[zencoder][download][tag] = v2.0.2