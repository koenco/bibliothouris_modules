(function ($) {
Drupal.jsAC.prototype.select = function (node) {
  this.input.value = $(node).data('autocompleteValue');
  if(jQuery(this.input).hasClass('auto_submit')){
     // this submits the form and adds the values in the url, which breaks the form
     // this.input.form.submit();

    // this triggers the correct autosubmit
    $(this.input.form).find('.ctools-auto-submit-click').click();

  }
};

})(jQuery);   
