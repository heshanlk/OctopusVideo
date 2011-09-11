/**
 * @file
 * Javascript for adding JWPlayer to the page.
 *
 * File is intentially named jwplayer_behaviors.js instead of following the
 * standard naming convention of jwplayer.js to avoid confusion between this
 * file and the jwplayer.js embedding library that comes with the JWPlayer
 * software.
 */
(function ($) {
  Drupal.behaviors.jwplayer = { 
    attach:function(context, settings) {
      var config = Drupal.settings.jwplayer;
      for (var field in config) {
        if ($('#' + field).length > 0) {
          $player = jwplayer(field).setup(config[field]);
          // Is error logging enabled?
          if (Drupal.settings.jwplayer.error_log && Drupal.settings.ajaxlog.key && Drupal.settings.ajaxlog.token) {
            $player.onError(Drupal.jwplayer.JWPlayerLog);
          }
        }
      }
    }
  }
  Drupal.jwplayer = {};
  Drupal.jwplayer.JWPlayerLog = function(e) {
    Drupal.ajaxlog('jwplayer', e.message);
  }
})(jQuery);