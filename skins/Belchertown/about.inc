## sensors module for weewx skins
## Copyright Tom Keffer, Matthew Wall
## See LICENSE.txt for your rights

#encoding UTF-8
#errorCatcher Echo

## this is a conditional display of sensor data, including connectivity,
## battery status, and various voltages.  if there are no data available,
## then this degenerates to nothing displayed.

#def get_battery_status($x)
   #if $x == 0
     <span class="status_ok">OK</span>
   #else
     <span class="status_low">LOW</span>
   #end if
#end def

## first see what sensor data are available

#set $have_conn = 0
#for $x in [$day.rxCheckPercent]
  #if $x.has_data
    #set $have_conn = 1
  #end if
#end for

#set $have_battery_status = 0
#for $x in [$day.txBatteryStatus, $day.windBatteryStatus, $day.rainBatteryStatus, $day.outTempBatteryStatus, $day.inTempBatteryStatus]
  #if $x.has_data
    #set $have_battery_status = 1
  #end if
#end for

#set $have_voltage = 0
#for $x in [$day.consBatteryVoltage, $day.heatingVoltage, $day.supplyVoltage, $day.referenceVoltage]
  #if $x.has_data
    #set $have_voltage = 1
  #end if
#end for
<div class="about-title">
     <p>Ubicación:</p>
</div>
#if $Extras.has_key("show_gps_location") and $Extras.show_gps_location == '1'
 Estación meteorológica experimental modelo: $station.hardware situada en el barrio de <a href="https://es.wikipedia.org/wiki/Colegiales_(Buenos_Aires)" target="_blank"> Colegiales</a> , CABA - Argentina ($station.latitude[0]&deg;$station.latitude[1]' $station.latitude[2], $station.longitude[0]&deg;$station.longitude[1]' $station.longitude[2] a $station.altitude de altura.)
#else
 Estación meteorológica experimental modelo: $station.hardware situada en el barrio de <a href="https://es.wikipedia.org/wiki/Colegiales_(Buenos_Aires)" target="_blank"> Colegiales</a> , CABA - Argentina.
#end if  
#if $Extras.has_key("enable_news") and $Extras.enable_news == '1'
    <div class="about-title">
        <p>Noticias:</p>
    </div>
    <strong>$Extras.station_news<br></strong>
#end if
    <div class="about-title">
        <p>Descargo de Responsabilidad:</p>
    </div>
    <p>
    Debido a la geografia urbana donde se encuentra instalada la estación, la misma no adhiere completamente a las recomendaciones establecidas por la WMO (World Meteorological Organization) para su emplazamiento. Las observaciones meteorológicas se obtienen y procesan con el fin de lograr la mayor exactitud posible.
    Este sitio es de libre acceso, no desarrolla ninguna actividad comercial y no tiene fin de lucro alguno. Tampoco realiza ninguna explotación comercial sobre la información de las visitas recibidas.
    <br><span class="boxed">Se recuerda a los visitantes que no deben tomar ninguna decisión basada en este sitio que pueda poner en riesgo vidas humanas o bienes materiales.</span></br>
    </p>

<div class="col-sm-4">
    #if $Extras.has_key("station_photo") and $Extras.station_photo != ''
       <div class="about-title">
          <p>Estación:</p>
       </div>
       <img class="station-photo" src="$Extras.station_photo" alt=$station.hardware title=$station.hardware>
    #end if
    <br><br>
    <div class="about-title">
      <p>Estado:</p>
    </div>
    <table>
    #if $have_conn
      <tr><th>Conectividad</th><th></th></tr>
      #if $day.rxCheckPercent.has_data
        <tr>
          <td>$obs.label.rxCheckPercent</td>
          <td>$current.rxCheckPercent</td>
        </tr>
      #end if
    #end if

    #if $have_battery_status
      <tr><th>Estado de las Baterias</th><th></th></tr>
      #if $day.txBatteryStatus.has_data
        <tr>
          <td>$obs.label.txBatteryStatus</td>
          <td>$get_battery_status($current.txBatteryStatus.raw)</td>
        </tr>
      #end if

      #if $day.windBatteryStatus.has_data
        <tr>
          <td>$obs.label.windBatteryStatus</td>
          <td>$get_battery_status($current.windBatteryStatus.raw)</td>
        </tr>
      #end if

      #if $day.rainBatteryStatus.has_data
        <tr>
          <td>$obs.label.rainBatteryStatus</td>
          <td>$get_battery_status($current.rainBatteryStatus.raw)</td>
        </tr>
      #end if

      #if $day.outTempBatteryStatus.has_data
        <tr>
          <td>$obs.label.outTempBatteryStatus</td>
          <td>$get_battery_status($current.outTempBatteryStatus.raw)</td>
        </tr>
      #end if

      #if $day.inTempBatteryStatus.has_data
        <tr>
          <td>$obs.label.inTempBatteryStatus</td>
          <td>$get_battery_status($current.inTempBatteryStatus.raw)</td>
        </tr>
      #end if
    #end if
    
    #if $have_voltage
      <tr><th>Tensiones</th><th></th></tr>
      #if $day.consBatteryVoltage.has_data
        <tr>
          <td>$obs.label.consBatteryVoltage</td>
          <td>$current.consBatteryVoltage</td>
        </tr>
      #end if

      #if $day.heatingVoltage.has_data
        <tr>
          <td>$obs.label.heatingVoltage</td>
          <td>$current.heatingVoltage</td>
        </tr>
      #end if

      #if $day.supplyVoltage.has_data
        <tr>
          <td>$obs.label.supplyVoltage</td>
          <td>$current.supplyVoltage</td>
        </tr>
      #end if

      #if $day.referenceVoltage.has_data
        <tr>
          <td>$obs.label.referenceVoltage</td>
          <td>$current.referenceVoltage</td>
        </tr>
      #end if
    #end if
    </table>
</div>

<div class="col-sm-8">
    <div class="about-title">
        <p>Especificaciones:</p>
    </div>
    <table>
      <tr><th>Temperatura:</th><th></th></tr>
        <tr>
          <td>Rango de Temperatura exterior:</td>
          <td>-40°C ~ 65°C</td>
        </tr>
        <tr>
          <td>Precisión de Temperatura:</td>
          <td>± 1,0°C</td>
        </tr>
      <tr><th>Humedad:</th><th></th></tr>
        <tr>
          <td>Rango de Humedad:</td>
          <td>1% RH-99%</td>
        </tr>        
        <tr>
          <td>Precisión de Humedad:</td>
          <td> ± 5% bajo -20°C a 65°C & 20%-98%</td>
        </tr>  
      <tr><th>Velocidad del Viento:</th><th></th></tr>
        <tr>
          <td>Rango de Velocidad del Viento:</td>
          <td>0 ~ 50,0 m/s</td>
        </tr>
        <tr>
          <td>Precisión de Velocidad del Viento:</td>
          <td>± 1 m/s (velocidad del viento <10 m/s), ± 10% (velocidad del viento >10 m/s)</td>
        </tr>
      <tr><th>Pluviosidad:</th><th></th></tr>
        <tr>
          <td>Rango de Pluviosidad:</td>
          <td>0 ~ 99,999 mm</td>
        </tr>
        <tr>
          <td>Precisión de Pluviosidad:</td>
          <td>± 1,5 mm</td>
        </tr>
    </table>  
<br>
#if $Extras.has_key("enable_ext_sites") and $Extras.enable_ext_sites == '1'
<div class="about-title">
  <p>Esta estación sube datos a los siguientes sitios:</p>
</div>
<ul>
    <li><a href="https://www.wunderground.com/dashboard/pws/ICOMUN25" target="_blank">Clima Colegiales - ICOMUN25</a> en Weather Underground utilizando rapid fire.</li>
    <li><a href="https://www.windy.com/station/pws-f079541c" target="_blank">Clima Colegiales</a> en Windy.com.</li>
    ## <li><a href="http://www.findu.com/cgi-bin/wxpage.cgi?last=24&amp;call=EW8484" target="_blank">TEST123</a> en CWOP</li>
    <li><a href="https://pwsweather.com/station/pws/colegiales" target="_blank">COLEGIALES</a> en PWSWeather.com</li>
    ## <li><a href="https://openweathermap.org/city" target="_blank">TEST123</a> en OpenWeatherMap.org</li>
    <li><a href="https://app.weathercloud.net/d1505859713" target="_blank">Clima Colegiales</a> en Weathercloud.net</li>
</ul>
#end if
<div class="about-title">
  <p>Créditos:</p>
</div>  
<ul>
    <li><a href="http://www.weewx.com/" target="_blank">Weewx - Weather Station Software Version $station.version</a> - Thanks to Tom Keffer and Matthew Wall for making it available for everyone.</li>
    <li><a href="https://github.com/poblabs/weewx-belchertown" target="_blank">Belchertown Skin Version $belchertown_version</a> - Thanks to Pat O'Brien for creating such a wonderful skin.</li><a href="https://obrienlabs.net/donate" rel="nofollow"><img src="https://camo.githubusercontent.com/4d7238795f7751518467c2fddc2efc1313e24dd3/68747470733a2f2f696d672e736869656c64732e696f2f62616467652f446f6e6174652d537570706f72742532306279253230446f6e6174696e672532306f72253230427579696e672532306d6525323061253230436f666665652d626c75652e737667" alt="Donate" data-canonical-src="https://img.shields.io/badge/Donate-Support%20by%20Donating%20or%20Buying%20me%20a%20Coffee-blue.svg" style="max-width:100%;"></a>
    <li><a href="http://www.highcharts.com/" target="_blank">HighCharts</a> - Interactive JavaScript charts for web pages.</li>
    <li><a href="https://windy.com/" target="_blank">Windy radar map.</a> - Interactive Weather forecasting services.</li>
    <li><a href="https://aerisweather.com" target="_blank">Aeris Weather forecast data and maps</a> - Weather forecasting and visualization services.</li>
    ## <li><a href="https://darksky.net/poweredby/" target="_blank">Darksky forecast data and maps</a> - Weather forecasting and visualization services.</li>
    ## <li><a href="https://www.meteored.com.ar" target="_blank">Meteored Weather Services</a> - Thanks for providing an easy way to access SMN Images.</li>
    <li><a href="https://www.smn.gob.ar" target="_blank">Alertas Meteorológicas</a> - Gracias al Servicio Meteorologico Nacional - Argentina.<br></li>
    <li>Earthquake data from <a href="http://earthquake.usgs.gov/fdsnws/event/1/" target="_blank">USGS.gov</a> - Earthquake Catalog Developer API.</li>
</ul>
</div>
