<script type="text/javascript">
<!--
$(document).ready(function(){
        $("#ws-graph-searchform").submit(function() {
                perform_graph_search_add({ 'domid': '#ws-graphlist',
                                           'search': $("#ws-graph-searchinput").val(),
                                           'offset': 0,
                                           'limit': 25 });
                return false;
        });
});
-->
</script>
<h4 id="ws-graph-searchterms"></h4>
<div id="ws-graph-searchform-container" style="margin:.5em 0 2em 0;padding-bottom:1em;border-bottom: solid 1px #e6e4e5;">
<form id="ws-graph-searchform">
  <fieldset>
  <legend style="display:none;">Search</legend>
  <label for="keyword" style="display:none;">Keyword</label> <input type="text" id="ws-graph-searchinput" style="width:220px;" /> <input type="submit" value="Search" />
  </fieldset>
</form>
</div>
<div id="ws-graphlist" class="graphlist">
  <p class="search-summary"></p>
  <ul class="searchresults">
  </ul>
</div>