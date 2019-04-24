<div class="wx-stn-info-container">
    <div class="row">
            <div class="wx-stn-name">
		#if $page == "graphs"
                <h1>$Extras.graphs_page_header</h1>
		#else if $page == "records"
                <h1>$Extras.records_page_header</h1>
		#else if $page == "reports"
                <h1>$Extras.reports_page_header</h1>
		#else if $page == "about"
                <h1>$Extras.about_page_header</h1>
		#end if
            </div>
    </div>
    <div class="clear"></div>
</div>
