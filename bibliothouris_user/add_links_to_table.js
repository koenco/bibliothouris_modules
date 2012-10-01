$(document).ready(function() {
    alert("test");
    var $rows = $("table.views-table tbody tr");
    $rows.children("td:nth-child(1)").each(function() {
        var $anchor = $(this).children("a");
        var linkElements = $anchor.attr("href").split("/");
        var userId = linkElements[linkElements.length - 1];
        $anchor.attr("href","/user/" + userId);
        alert(userId);
    });
});
