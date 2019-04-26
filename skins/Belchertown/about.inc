## sensors module for weewx skins
## Copyright Tom Keffer, Matthew Wall
## See LICENSE.txt for your rights
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

<p>Estación meteorológica modelo: $station.hardware situada en el barrio de <a href="https://es.wikipedia.org/wiki/Colegiales_(Buenos_Aires)" target="_blank"> Colegiales</a> , CABA - Argentina ($station.latitude[0]&deg;$station.latitude[1]' $station.latitude[2], $station.longitude[0]&deg;$station.longitude[1]' $station.longitude[2] a $station.altitude de altura.)</p>

<div class="col-sm-4">
    #if $Extras.has_key("station_photo") and $Extras.station_photo != ''
      <img src="$Extras.station_photo" alt="$station.location" title="$station.location">
    #end if
    <br>
    <br>
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
<p>Esta estación sube datos a los siguientes sitios:</p>
<ul>
    <li><a href="http://www.wunderground.com/personal-weather-station/dashboard?ID=KMABELCH13" target="_blank">TEST123 </a>en Weather Underground utilizando rapid fire.</li>
    <li><a href="http://www.wunderground.com/personal-weather-station/dashboard?ID=KMABELCH13" target="_blank">TEST123 </a>en Windy.com.</li>
    <li><a href="http://www.findu.com/cgi-bin/wxpage.cgi?last=24&amp;call=EW8484" target="_blank">TEST123</a> en CWOP</li>
    <li><a href="http://pwsweather.com/obs/KMABELCH13.html" target="_blank">TEST123</a> en PWSWeather.com</li>
    <li><a href="https://openweathermap.org/city" target="_blank">TEST123</a> en OpenWeatherMap.org</li>
    <li><a href="https://app.weathercloud.net/d0882834506" target="_blank">TEST123</a> en Weathercloud.net</li>
</ul>

<p>Recursos utilizados y Créditos:</p>
<ul>
    <li><a href="http://www.weewx.com/" target="_blank">Weewx - Weather Station Software Version $station.version</a> - Thanks to Tom Keffer and Matthew Wall for making it available for everyone.</li>
    <li><a href="https://github.com/poblabs/weewx-belchertown" target="_blank">Belchertown Skin Version $belchertown_version</a> - Thanks to Pat O'Brien for creating such a wonderful skin.</li>
    <li><a href="http://www.highcharts.com/" target="_blank">HighCharts</a> - Interactive JavaScript charts for web pages.</li>
    <li><a href="https://windy.com/" target="_blank">Windy radar map.</a> - Interactive Weather forecasting services.</li>
    <li><a href="https://darksky.net/poweredby/" target="_blank">Darksky forecast data and maps</a> - Weather forecasting and visualization services.</li>
    <li><a href="https://www.meteored.com.ar" target="_blank">Meteored Weather Services</a> - Thanks for providing an easy way to access SMN Images.</li>
    <li><a href="https://www.smn.gob.ar" target="_blank">Radar and Satellite Images</a> - Servicio Meteorologico Nacional - Argentina.</li>
    <li>Earthquake data from <a href="http://earthquake.usgs.gov/fdsnws/event/1/" target="_blank">USGS.gov</a> - Earthquake Catalog Developer API.</li>
</ul>
</div>
