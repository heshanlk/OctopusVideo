

(function($) {
  /**
   * @todo
   */
  Drupal.behaviors.omegaEqualHeights = {
    attach: function (context) {
      $('body', context).once('ebook-equalheights', function () {
        $(window).bind('load', function () {
          $($('.view-list-products-home .view-content, .view-list-products .view-content').get().reverse()).each(function () {
            var elements = $(this).children('.views-row').css('height', '');
            
            if (!Drupal.behaviors.hasOwnProperty('omegaMediaQueries') || Drupal.omega.getCurrentLayout() != 'mobile') {
              var tallest = 0;

              elements.each(function () {    
                if ($(this).height() > tallest) {
                  tallest = $(this).height();
                }
              }).each(function() {
                if ($(this).height() < tallest) {
                  $(this).css('height', tallest);
                }
              });
            }
          });
        });
      });
    }
  };
})(jQuery);