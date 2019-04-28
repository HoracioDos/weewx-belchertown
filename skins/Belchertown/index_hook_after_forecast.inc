<html>
  <head>
  </head>
  <body>
  <div class="row satelliterow">
      <div class="col-lg-12 satellite">
          <div class="satellite-title">
              #if $Extras.has_key("sat_title") and $Extras.sat_title != ""
                 $Extras.sat_title <span class="satellite-subtitle">$Extras.sat_subtitle</span>
              #end if
          </div>
      </div>
  </div>
<table>
  <tr>
    <td>
        <img src=$Extras.sat_url_image1 width="595" height="500" title="Goes16-Argentina Infrarojo" alt="Goes16-Argentina Infrarojo">
    </td>
    <td>
        <img src=$Extras.sat_url_image2 width="595" height="500" title="Goes16-Argentina Visible" alt="Goes16-Argentina Visible">
    </td>
  </tr>
</table>
  <div class="satellite-subtitle">
       <a href="https://www.meteored.com.ar" target="_blank">Meteored.com</a> - <a href="https://www.smn.gob.ar" target="_blank">SMN - Argentina</a>
  </div>
  </body>
</html>
