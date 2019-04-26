<div class="wx-stn-info-container">
    <div class="row">
        #if $Extras.has_key("enable_weather_icon") and $Extras.enable_weather_icon == '1'
           <div class="col-sm-1 wx-stn-info-current-obs">
               <span class="obs-header-icon">$current_obs_icon</span>
               <span class="obs-header-outtemp">$current.outTemp</span>
           </div>
        #end if
        #if $Extras.has_key("enable_unwrapped_titles") and $Extras.enable_unwrapped_titles == '1'
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
        #else
            <div class="col-sm-5">
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
        #end if
        #if $Extras.has_key("enable_powered_by") and $Extras.enable_powered_by == '1'
           <div class="col-sm-5" style="float:right;">
               <div class="wx-stn-info">
                   $Extras.powered_by
               </div>
           </div>
        #end if
        #if $social_html != ""
           <div class="col-sm-5" style="float:right;">
               <div class="col-sm-10 wx-stn-info-social" style="float:right;">
                  $social_html
               </div>
           </div>
        #end if
    </div>
    <div class="clear"></div>
</div>
