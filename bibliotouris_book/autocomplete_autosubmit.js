
(function ($) {
    $.ajaxSetup( { type: "post" } );

    Drupal.jsAC.prototype.select = function (node) {
  this.input.value = $(node).data('autocompleteValue');
  if(jQuery(this.input).hasClass('auto_submit')){
     // this.input.form.submit();

     $(this.input.form).find('.ctools-auto-submit-click').click();

  }
};

})(jQuery);
