

set(pri_req 
    driver
    lvgl
    lvgl_esp32_drivers
    ui
)


idf_component_register(SRCS "main.c"
                        INCLUDE_DIRS "."
                        REQUIRES ${pri_req})
