SET(SOURCES screens/ui_home.c
    screens/ui_setting.c
    screens/ui_success.c
    screens/ui_step1.c
    ui.c
    components/ui_comp_hook.c
    ui_helpers.c
    images/ui_img_image_17_png.c
    images/ui_img_corect_png.c
    images/ui_img_beer_corona_png.c
    images/ui_img_rectangle_7_png.c
    images/ui_img_vector_png.c
    images/ui_img_back_png.c)

idf_component_register(SRCS "${SOURCES}"
                        INCLUDE_DIRS "."
                        REQUIRES lvgl)
