# Customized Belchertown weewx skin

This fork from [weewx-belchertown skin](https://github.com/poblabs/weewx-belchertown) have been customized for my needs and it's only purpose is to satisfy entirely my whim.

The following features have not been included into the original Poblabs/Belchertown skin until now. Most of them are useless for obvious reasons and you won't miss them at all. Unless you want this skin in spanish (it's not ready yet) or you really like these beautiful satellite images of South America. Poblabs/Belchertown skin is probably all what you probably may need or want.

* Show inside temperature, windrun and daylight in main page
* Show Goes16 satellite images for Argentina in main page.
* New stats reports and about page.
* Some new Extra tags like station_photo, webpage_autorefresh and hide_weather_icon.
* Webpage auto refresh when MQTT is disabled.
* Hide weather icon in Graphs, Records, Reports and About pages.

For install and customize instructions, please refer to [weewx-belchertown skin](https://github.com/poblabs/weewx-belchertown) and follow its excellent guides. If you want to try a daredevil jump into the unknown and you still want to install this customized skin, you will need to follow some instructions that are described a little later.

![climacolegiales.org Homepage](https://raw.githubusercontent.com/HoracioDos/weewx-belchertown/master/assets/homepage_screenshot.png)

## Table of Contents

- [First Level Item](#belchertown-weewx-skin)
  * [Second Level Item ](#table-of-contents)
    + [Third level Item](#weewxconf)

## Features List

| Name                | Default | Description                                                  |
| ------------------- | :-----: | ------------------------------------------------------------ |
| show_inTemp         |    0    | This option shows Inside Temperature in the main page.       |
| show_windrun        |    0    | This option already exists in poblabs/belchertown skin to show windrun in Records page. If you have [enabled Wind Run](https://github.com/poblabs/weewx-belchertown/wiki/Adding-a-new-observation-type-to-the-WeeWX-database) (windRun) in your database, you can show it on the main page too by enabling this. |
| show_daylight       |    0    | This option shows daylight duration in the main page. As there is not enough space to show sunrise, sunset and daylight information in "Sun & Moon" section, Sun & Moon title will be hidden if this option is enabled. |
| station_photo       |   ""    | The URL to your weather station photo.                       |
| webpage_autorefresh | 300000  | The number of seconds after the web page is refreshed if mqtt is not enabled. Time is in milliseconds. 0 = disabled. 300000 = 5 minutes. |
| hide_weather_icon   |    0    | This option hides weather icon in in Graphs, Records, Reports and About pages. |

## How to configure features not included in original skin

1) Do step 1

2) Do step 2 

```
Commands
```

3) Do step 3

## To Do

- Make things to work properly.
- Update to Belchertown v1.0 as soon as it becomes available.
- Translate skin into Spanish (Latin America).
- Convert daylight cheetah script into python.
- Get satellite images directly from SMN Argentina avoiding Meteored.
- Get SMN Argentina Alerts and insert them into Darksky json file.
- Merge History Heatmaps from  [Olivier Payrastre](https://github.com/olpayras/weewx-belchertown).
- Rollback some deleted features like social media and make them conditional.
- Adjust about page with some WMO (World Meteorological Organization) definitions.
- Complete this README.md 

## Credits
* Thanks to Pat O'Brien for creating such a wonderful skin. 
* Also thanks to Tom Keffer and Matthew Wall for [weewx weather software](http://weewx.com) that makes all these things possible.
