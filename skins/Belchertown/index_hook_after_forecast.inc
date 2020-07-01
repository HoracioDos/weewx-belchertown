<html>
  <head>
  </head>
  <body>
   #if $Extras.has_key("sat_img_enabled") and $Extras.sat_img_enabled != ""
      <div class="col-lg-12 satellite">
          <div class="satellite-title">
              #if $Extras.has_key("sat_title") and $Extras.sat_title != ""
                 $Extras.sat_title <span class="satellite-subtitle">$Extras.sat_subtitle</span>
              #end if
          </div>
      </div>
<table>
  <tr>
    <td>
        <img src="./sat/$Extras.sat_img_file1" width="597" height="500" style="float:left" title=$Extras.sat_img_title1 alt=$Extras.sat_img_title1>
    </td>
    <td>
        <img src="./sat/$Extras.sat_img_file2" width="597" height="500" style="float:right" title=$Extras.sat_img_title2 alt=$Extras.sat_img_title2>
    </td>
  </tr>
</table>
  <div class="satellite-subtitle">
     <!--  <a href="https://www.meteored.com.ar" target="_blank">Meteored.com</a> - <a href="https://www.smn.gob.ar" target="_blank">SMN - Argentina</a> -->
     <br>
  </div>
  #end if 
  </body>
</html>
