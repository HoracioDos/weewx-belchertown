## celestial module for weewx skins
## Copyright Tom Keffer, Matthew Wall
## See LICENSE.txt for your rights
#errorCatcher Echo

## If extended almanac information is available, do extra calculations.
#if $almanac.hasExtras

  #set $sun_altitude = $almanac.sun.alt
  #if $sun_altitude < 0
    #set $sun_None="<i>(Always down)</i>"
    #set $daylight = "00:00"
  #else
    #set $sun_None="<i>(Always up)</i>"
    #set $daylight = "24:00"
  #end if

  #set $sunrise_ts = $almanac.sun.rise.raw
  #set $sunset_ts = $almanac.sun.set.raw
  #if $sunrise_ts and $sunset_ts

    #set $now = $current.dateTime.raw
    #set $today_daylight = $sunset_ts -  $sunrise_ts

    #set $seconds = $today_daylight
    #set $hours = $seconds //3600
    #set $seconds %= 3600
    #set $minutes = $seconds//60
    #set $seconds %= 60
    #set $daylight = "%02d:%02d:%02d" % ($hours, $minutes, $seconds)

    #set $yesterday = $now - 24*3600
    #set $yesterday_daylight = $almanac($almanac_time=$yesterday).sun.set.raw - $almanac($almanac_time=$yesterday).sun.rise.raw
    #set $difference = $today_daylight - $yesterday_daylight
    #if $difference
      #set $delta = abs($difference)
      #set $amt_str = "%s%ds" % (str(int($delta) // 60) + 'm ' if ($delta // 60) > 0 else '', $delta % 60 if ($delta // 60) > 0 else $delta)
      #if $difference > 0
        #set $delta_str = $Extras.daylight_longer
      #else
        #set $delta_str = $Extras.daylight_shorter 
      #end if
    #end if

  #end if
#end if

<tr>
   <td colspan="2" class=daylight>$Extras.daylight_has $daylight $Extras.daylight_hours</td>
</tr>
<tr>
   <td colspan="2" class=daylight>$Extras.daylight_today $amt_str $delta_str</td>
</tr>
