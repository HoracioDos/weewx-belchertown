###############################################################################
# SKIN CONFIGURATION FILE                                                     #
# Copyright (c) 2010 Tom Keffer <tkeffer@gmail.com>                           #
# Updated for the Belchertown Skin by Pat O'Brien, 2019                       #
###############################################################################

[Extras]

    # General Site Defaults - Opciones Generales por Defecto.
    belchertown_debug = 0
    belchertown_root_url = ""
    belchertown_locale = "auto"
    theme = light
    theme_toggle_enabled = 1
    site_title = "Mi Sitio Web del Clima"
    logo_image = ""
    radar_html = ""

    # Station Observations. Special observation rainWithRainRate combines Daily Rain with Rain Rate in 1 line. La Precipitación Diaria Acumulada se combina con el Ratio de Precipitaciones por hora en una sola linea.
    station_observations = "barometer", "dewpoint", "outHumidity", "rainWithRainRate"
    
    # Manifest Settings for Mobile Phones - Configuracion del Manifiesto para Teléfonos Móviles.
    manifest_name = "Mi Sitio Web del Clima"
    manifest_short_name = "MWW"

    # Highcharts settings
    highcharts_enabled = 1
    graph_page_show_all_button = 1
    graph_page_default_graphgroup = "day"
    highcharts_homepage_graphgroup = "homepage"
    
    # If you've extended your weewx database to include the below, you can enable them - Si ha extendido previamente su base de datos con las siguientes mediciones, puede activarlas a continuación.
    show_apptemp = 0
    show_windrun = 0
        
    # MQTT Websockets defaults
    mqtt_websockets_enabled = 0
    mqtt_websockets_host = ""
    mqtt_websockets_port = 1883
    mqtt_websockets_ssl = 0
    mqtt_websockets_topic = ""
    disconnect_live_website_visitor = 1800000
    
    # If mqtt_websockets_enabled is set to 0, but want the page to full reload on an interval, specify this below in milliseconds. 300000 = 5 minutes - Si ha configurado mqtt_websockets_enabled con valor 0 (mqtt desactivado) pero aun desea refrescar la pagina web periodicamente, defina el periodo de tiempo en milisegundos. 300000 = 5 minutos.
    webpage_autorefresh = 0

    # Image Reload Section.
    # Set reload_hook_images to 1 to enable, then set the number of *seconds* for each section to reload.
    # A value of -1 will disable reloading images in that section.
    # radar = the radar image if you used radar_html setting
    # asi = index_hook_after_station_info.inc
    # af = index_hook_after_forecast.inc
    # as = index_hook_after_snapshot.inc
    # ac = index_hook_after_charts.inc
    reload_hook_images = 0
    reload_images_radar = 300
    reload_images_hook_asi = -1
    reload_images_hook_af = -1
    reload_images_hook_as = -1
    reload_images_hook_ac = -1
    
    # Forecast defaults - Valores por Defecto del Pronóstico
    forecast_enabled = 0
    darksky_secret_key = ""
    darksky_units = "auto"
    darksky_lang = "en"
    forecast_stale = 3540
    forecast_alert_enabled = 0
    
    # Earthquake defaults - Valores por Defecto para Consultas sobre Terremotos.
    earthquake_enabled = 0
    earthquake_maxradiuskm = 1000
    earthquake_stale = 10740

    # Social Share Button Defaults. Define the text below under Labels - Habilitar Botones para Redes Sociales.
    facebook_enabled = 0
    twitter_enabled = 0

    # Google Analytics
    #googleAnalyticsId = UA-12345678-1

    # This is the display of the Pi Kiosk which is in the /pi folder
    pi_kiosk_bold = "false"

###############################################################################

[Labels]
    # Labels used in this skin
    
    [[Generic]]
        # Generic labels, keyed by an observation type.
        # To change a label or translate it to your language 
        # change the text after the equal sign.
        # Etiquetas Generales. Si lo desea, puede cambiar el texto posterior al signo = de cada etiqueta.

        # Extra Observation labels
        appTemp              = Sensación Térmica
        cloudbase            = Techo Nuboso
        visibility           = Visibilidad
        windrun              = Distancia del Viento
        
        # HTML Header Meta Tags and HTML Title. These labels have a default value
        # set inside of header.html.tmpl. Leave as "" to use the default value.
        # Meta Información del sitio Web. Etiquetas de cabecera y título HTML
        # Para utilizar los valores por defecto, deje como "" 
        html_title         = ""
        html_description   = ""
        
        # Footer Information
        footer_copyright_text = "Mi Sitio Web del Clima "
        footer_disclaimer_text = "¡Importante! No tome ninguna decisión basada en este
sitio."
        
        # Twitter Social Share
        twitter_text = "Visita mi sitio web: Condiciones actuales del clima"
        twitter_owner = "YourTwitterUsernameHere"
        twitter_hashtags = "weewx #weather"
        
        # Station Observation Table
        rainWithRainRate     = Precipitación
        
        # Navigation Menu
        nav_home        = Inicio
        nav_graphs      = Gráficos
        nav_records     = Registros
        nav_reports     = Reportes
        nav_about       = Acerca
        
        # Default page headers
        home_page_header        = "Condiciones actuales del Tiempo"
        graphs_page_header      = "Gráficos del Clima"
        records_page_header     = "Registros de Máximos y Mínimos"
        reports_page_header     = "Reportes Históricos del Clima"
        about_page_header       = "Acerca de esta Estación Meteorológica"
        powered_by              = "Las observaciones son registradas por una Estación Meteorológica Personal"
        
        # DarkSky translations
        alert_in_effect             = Vigente hasta
        forecast_last_updated       = Ultima actualización
        clear                       = Despejado
        darksky_rain                = Lluvia
        snow                        = Nieve
        sleet                       = Aguanieve
        windy                       = Ventoso
        fog                         = Niebla
        overcast                    = Cubierto
        partly_cloudy               = Parc. Nublado
        hail                        = Granizo
        thunderstorm                = Tormenta Eléc.
        tornado                     = Tornado
        
        # Earthquake translations
        earthquake_no_data          = Sin información disponible
        
        # Home Page Text and Titles
        second                      = "segundo", "segundos"
        minute                      = "minuto", "minutos"
        hour                        = "hora", "horas"
        sun                         = Sol
        moon                        = Luna
        sun_and_moon                = Sol & Luna
        moon_visible                = visible
        daily_forecast              = Pronóstico
        wind_speed                  = Veloc.
        wind_gust                   = Racha
        feels_like                  = Sensación
        highest_temperature         = Máxima
        lowest_temperature          = Mínima
        forecast_header             = Pronóstico a 8 días
        header_last_updated         = Ultima Actualización
        header_last_updated_alert   = ¡Atención! La información puede estar desactualizada.
        mqtt_websockets_connecting  = Conectando en vivo con la estación.
        mqtt_websockets_waiting     = Conectado en vivo. Esperando datos.
        mqtt_websockets_connected   = Conectado en vivo. Datos recibidos:
        mqtt_websockets_stopped     = Conexión en vivo finalida.
        mqtt_websockets_continue    = Reconectar
        mqtt_websockets_failed      = Falla al conectar con la estación. Pruebe nuevamente mas tarde.
        mqtt_websockets_lost        = Pérdida de conexión con la estación. Pruebe nuevamente mas tarde.
        weather_snapshots           = Máximos y Mínimos.
        weather_snapshots_link      = Ver registros.
        snapshot_high               = Máxima
        snapshot_low                = Mínima
        snapshot_today_avg_wind     = Viento Prom
        snapshot_today_high_wind    = Viento Máx
        snapshot_today_high_uv      = UV Máx
        snapshot_today_rain         = Precip Acum
        snapshot_today_rainrate     = Precip Hora
        snapshot_month_avg_wind     = Viento Prom
        snapshot_month_high_wind    = Viento Máx
        snapshot_month_high_uv      = UV Máx
        snapshot_month_rain         = Precip Acum
        snapshot_month_rainrate     = Precip Hora
        earthquake_title            = Terremotos Recientes
        earthquake_magnitude        = Magnitud
        homepage_graphs_link        = Ver detalles.
        copyright                   = Copyright
        
        # Almanac Popup
        close                       = Cerrar
        almanac_more_details        = Ver detalles
        almanac_modal_title         = Almanaque
        sun_always_down             = Puesta Continua
        sun_always_up               = Salida Continua
        more_than_yesterday         = mas largo que ayer
        less_than_yesterday         = mas corto que ayer
        celestial                   = Información Celeste
        start_civil_twilight        = Crepúsculo Matutino
        rise                        = Salida
        transit                     = Tránsito
        set                         = Puesta
        end_civil_twilight          = Crepúsculo Vespertino
        azimuth                     = Azimuth
        altitude                    = Altitud
        right_ascension             = Ascensión Recta
        declination                 = Declinación
        equinox                     = Equinoccio
        solstice                    = Solsticio
        total_daylight              = Luz del Día
        full_moon                   = Prox Luna Llena
        new_moon                    = Prox Luna Nueva
        phase                       = Fase Lunar
        full                        = Visible
        install_pyephem             = Debe instalar pyephem para obtener informacíon celeste mas exacta.
        
        # Graphs Page Text and Titles
        graphs_page_all_button      = Todos
        graphs_windrose_frequency   = Frequencia
        graphs_windDir_ordinals     = '{ 0: "N", 90: "E", 180: "S", 270: "O", 360: "N" }'
        
        # Records Page Text and Titles
        records_ending                      = Fin:
        records_days_text                   = días
        records_all_time                    = Todos los tiempos
        records_temperature_records         = Temperatura
        records_high_temp                   = Temperatura Máxima
        records_low_temp                    = Temperature Mínima
        records_high_apptemp                = Sensación Térmica Máxima
        records_low_apptemp                 = Sensación Térmica Mínima
        records_high_heatindex              = Indice de Calor Máximo
        records_low_windchill               = Temp Mín por acción del Viento
        records_largest_temp_range          = Amplitud Térmica Máxima
        records_smallest_temp_range         = Amplitud Térmica Mínima
        records_wind_records                = Viento
        records_strongest_wind              = Racha con mayor Fuerza
        records_daily_windrun               = Distancia máxima del Viento
        records_rain_records                = Precipitaciones
        records_highest_daily_rainfall      = Precipitación Acumulada Máxima
        records_highest_daily_rainrate      = Precipitación Horaria Máxima
        records_month_high_rainfall         = Mes con mayor Precipación Acumulada
        records_total_rainfall              = Precipitación Acumulada del Mes
        records_consec_days_with_rain       = Días Consecutivos con Lluvia
        records_consec_days_without_rain    = Días Consecutivos sin Lluvia
        records_humidity_records            = Humedad
        records_high_humidity               = Humedad Máxima
        records_lowest_humidity             = Humedad Mínima
        records_highest_dewpoint            = Punto de Rocío Máximo
        records_lowest_dewpoint             = Punto de Rocío Mínimo
        records_barometer_records           = Presión Barométrica
        records_high_barometer              = Presión Barométrica Máxima
        records_low_barometer               = Presión Barométrica Mínima
        records_sun_records                 = Solar
        records_high_solar_rad              = Radiación Solar Máxima
        records_high_uv                     = Radiación UV Máxima
        
        # NOAA Reports Page Text and Titles
        reports_title               = Reportes NOAA
        reports_click_here_link     = Cliquee aquí
        reports_view_more           = para ver este reporte. Selecione el mes o el año para elegir otro diferente.
        
        # moment.js default labels formats
        time_earthquake                         = "LLL"
        time_lastUpdated                        = "LL, LTS"
        time_snapshot_records_today_header      = "dddd, LL"
        time_snapshot_records_month_header      = "MMMM YYYY"
        time_sunrise                            = "LT"
        time_sunset                             = "LT"
        time_darksky_alert_expires              = "LLL"
        time_darksky_forecast_date              = "ddd M/DD"
        time_forecast_last_updated              = "LLL"
        time_mqtt_websockets_last_updated       = "LL, LTS"
        # Mejor Opcion para localizaciones en Español. Nombres cortos para meses
        time_records_page_full_date             = "lll"
        # Segunda mejor opcion excepto si desea formatos: __/__/__ ó __-__-__ 
        # time_records_page_full_date             = "MMMM D, YYYY H:mm"
        # Skin Default 
        # time_records_page_full_date             = "LLL"
        time_records_page_month_day_year        = "LL"
        time_records_page_rainfall_range_begin  = "MMMM DD"
        time_records_page_rainfall_range_end    = "LL"
        
        
        
###############################################################################

[Almanac]
    # The labels to be used for the phases of the moon:
    moon_phases = Nueva, Creciente, Cuarto Creciente, Creciente Gibosa, Llena, Menguante Gibosa, Cuarto Menguante, Menguante

###############################################################################

[Units]
    # This section is for managing the selection and formatting of units.
    
    [[Groups]]
        # For each group of measurements, this section sets what units to
        # use for it.
        # NB: The unit is always in the singular. I.e., 'mile_per_hour',
        # NOT 'miles_per_hour'

        group_altitude     = meter                # Options are 'foot' or 'meter'
        group_degree_day   = degree_C_day         # Options are 'degree_F_day' or 'degree_C_day'
        group_direction    = degree_compass
        group_moisture     = centibar
        group_percent      = percent
        group_pressure     = hPa                  # Options are 'inHg', 'mmHg', 'mbar', or 'hPa'
        group_radiation    = watt_per_meter_squared
        group_rain         = mm                   # Options are 'inch', 'cm', or 'mm'
        group_rainrate     = mm_per_hour          # Options are 'inch_per_hour', 'cm_per_hour', or 'mm_per_hour'
        group_speed        = km_per_hour          # Options are 'mile_per_hour', 'km_per_hour', 'knot', or 'meter_per_second'
        group_speed2       = km_per_hour2         # Options are 'mile_per_hour2', 'km_per_hour2', 'knot2', or 'meter_per_second2'
        group_temperature  = degree_C             # Options are 'degree_F' or 'degree_C'
        group_uv           = uv_index
        group_volt         = volt
        group_distance     = km

        # The following are used internally and should not be changed:
        group_count        = count
        group_interval     = minute
        group_time         = unix_epoch
        group_elapsed      = second

    [[StringFormats]]
        # This section sets the string formatting for each type of unit.

        centibar           = %.0f
        cm                 = %.2f
        cm_per_hour        = %.2f
        degree_C           = %.1f
        degree_F           = %.1f
        degree_compass     = %.0f
        foot               = %.0f
        hPa                = %.1f
        hour               = %.1f
        inHg               = %.3f
        inch               = %.2f
        inch_per_hour      = %.2f
        km_per_hour        = %.0f
        km_per_hour2       = %.1f
        knot               = %.0f
        knot2              = %.1f
        mbar               = %.1f
        meter              = %.0f
        meter_per_second   = %.1f
        meter_per_second2  = %.1f
        mile_per_hour      = %.0f
        mile_per_hour2     = %.1f
        mm                 = %.1f
        mmHg               = %.1f
        mm_per_hour        = %.1f
        percent            = %.0f
        second             = %.0f
        uv_index           = %.1f
        volt               = %.1f
        watt_per_meter_squared = %.0f
        NONE               = "N/A"

    [[Labels]]
        # This section sets a label to be used for each type of unit.

        centibar          = " cb"
        cm                = " cm"
        cm_per_hour       = " cm/hr"
        degree_C          =  " °C"
        degree_F          =  " °F"
        degree_compass    =   °
        foot              = " pies"
        hPa               = " hPa"
        inHg              = " inHg"
        inch              = " in"
        inch_per_hour     = " in/hr"
        km_per_hour       = " km/h"
        km_per_hour2      = " km/h"
        knot              = " nudos"
        knot2             = " nudos"
        mbar              = " mbar"
        meter             = " metros"
        meter_per_second  = " m/s"
        meter_per_second2 = " m/s"
        mile_per_hour     = " mph"
        mile_per_hour2    = " mph"
        mm                = " mm"
        mmHg              = " mmHg"
        mm_per_hour       = " mm/hr"
        percent           =   %
        volt              = " V"
        watt_per_meter_squared = " W/m²"
        day               = " día",     " días"
        hour              = " hora",    " horas"
        minute            = " minuto",  " minutos"
        second            = " segundo", " segundos"
        NONE              = ""
        
    [[TimeFormats]]
        # This section sets the string format to be used for each time scale.
        # The values below will work in every locale, but may not look
        # particularly attractive. See the Customization Guide for alternatives.

        day        = %X
        week       = %X (%A)
        month      = %x %X
        year       = %x %X
        rainyear   = %x %X
        current    = %x %X
        ephem_day  = %X
        ephem_year = %x %X
        
    [[Ordinates]]    
        # The ordinal directions. The last one should be for no wind direction
        directions = N, NNE, NE, ENE, E, ESE, SE, SSE, S, SSO, SO, OSO, O, ONO, NO, NNO, N/A

    [[DegreeDays]]
        # This section sets the base temperatures used for the calculation
        # of heating and cooling degree-days.
                
        # Base temperature for heating days, with unit:
        heating_base = 18.3, degree_C
        # Base temperature for cooling days, with unit:
        cooling_base = 18.3, degree_C

    [[Trend]]
        time_delta = 10800  # 3 hours
        time_grace = 300    # 5 minutes 
        
###############################################################################

[CheetahGenerator]
    # This section is used by the generator CheetahGenerator, and specifies
    # which files are to be generated from which template.
    
    search_list_extensions = user.belchertown.getData

    # Possible encodings are 'html_entities', 'utf8', or 'strict_ascii'
    encoding = html_entities

    [[SummaryByMonth]]
        # Reports that summarize "by month"
        [[[stats_month]]]
            encoding = strict_ascii
            template = stats/stats-YYYY-MM.txt.tmpl

    [[SummaryByYear]]
        # Reports that summarize "by year"
        [[[stats_year]]]
            encoding = strict_ascii
            template = stats/stats-YYYY.txt.tmpl
        
    [[ToDate]]
        # Reports that show statistics "to date", such as day-to-date,
        # week-to-date, month-to-date, etc.
        [[[weewx_data]]]
            template = json/weewx_data.json.tmpl
            
        [[Belchertown]]
            template = js/belchertown.js.tmpl
                    
        [[[home]]]
            template = index.html.tmpl
        
        [[[about]]]
            template = about/index.html.tmpl
        
        [[[graphs]]]
            template = graphs/index.html.tmpl
        
        [[[records]]]
            template = records/index.html.tmpl
            
        [[[reports]]]
            template = reports/index.html.tmpl
        
        [[[pi]]]
            template = pi/index.html.tmpl
            
        [[[manifest]]]
            encoding = utf8
            template = manifest.json.tmpl
            
###############################################################################

[CopyGenerator]
    
    # This section is used by the generator CopyGenerator

    # List of files to be copied only the first time the generator runs
    copy_once = favicon.ico, images/*, json/index.html, js/index.html, js/responsive-menu.js, robots.txt
    
    # List of files to be copied each time the generator runs
    copy_always = *.css,*.xml
        

###############################################################################

#
# The list of generators that are to be run:
#
[Generators]
    generator_list = weewx.cheetahgenerator.CheetahGenerator, weewx.reportengine.CopyGenerator, user.belchertown.HighchartsJsonGenerator


