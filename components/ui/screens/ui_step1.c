// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.0
// LVGL version: 8.3.11
// Project name: SquareLine_Project

#include "../ui.h"

void ui_step1_screen_init(void)
{
    ui_step1 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_step1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Button12 = lv_btn_create(ui_step1);
    lv_obj_set_width(ui_Button12, 46);
    lv_obj_set_height(ui_Button12, 22);
    lv_obj_set_x(ui_Button12, 24);
    lv_obj_set_y(ui_Button12, 0);
    lv_obj_add_flag(ui_Button12, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Button12, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_Button12, 4, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Button12, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button12, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Button12, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Container2 = lv_obj_create(ui_Button12);
    lv_obj_remove_style_all(ui_Container2);
    lv_obj_set_width(ui_Container2, 46);
    lv_obj_set_height(ui_Container2, 22);
    lv_obj_set_align(ui_Container2, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Container2, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Label20 = lv_label_create(ui_Container2);
    lv_obj_set_width(ui_Label20, 21);
    lv_obj_set_height(ui_Label20, 14);
    lv_obj_set_x(ui_Label20, 20);
    lv_obj_set_y(ui_Label20, 6);
    lv_label_set_text(ui_Label20, "Back");
    lv_obj_set_style_text_font(ui_Label20, &lv_font_montserrat_8, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Image3 = lv_img_create(ui_Container2);
    lv_img_set_src(ui_Image3, &ui_img_back_png);
    lv_obj_set_width(ui_Image3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Image3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Image3, 5);
    lv_obj_set_y(ui_Image3, 7);
    lv_obj_add_flag(ui_Image3, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Label17 = lv_label_create(ui_step1);
    lv_obj_set_width(ui_Label17, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label17, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label17, 27);
    lv_obj_set_y(ui_Label17, 35);
    lv_label_set_text(ui_Label17, "Step 1");
    lv_obj_set_style_text_color(ui_Label17, lv_color_hex(0xF23A00), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label17, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label17, &lv_font_montserrat_8, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label22 = lv_label_create(ui_step1);
    lv_obj_set_width(ui_Label22, LV_SIZE_CONTENT);   /// 49
    lv_obj_set_height(ui_Label22, LV_SIZE_CONTENT);    /// 21
    lv_obj_set_x(ui_Label22, 61);
    lv_obj_set_y(ui_Label22, 33);
    lv_label_set_text(ui_Label22, "Cannon");
    lv_obj_set_style_text_font(ui_Label22, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Panel1 = lv_obj_create(ui_step1);
    lv_obj_set_width(ui_Panel1, 324);
    lv_obj_set_height(ui_Panel1, 423);
    lv_obj_set_x(ui_Panel1, -2);
    lv_obj_set_y(ui_Panel1, 59);
    lv_obj_clear_flag(ui_Panel1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_Panel1, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Panel1, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Panel1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_Panel1, LV_BORDER_SIDE_FULL, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label23 = lv_label_create(ui_Panel1);
    lv_obj_set_width(ui_Label23, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label23, LV_SIZE_CONTENT);    /// 1
    lv_label_set_text(ui_Label23, "Alcohol");
    lv_obj_set_style_text_color(ui_Label23, lv_color_hex(0xF146FC), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label23, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label23, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Button11 = lv_btn_create(ui_Panel1);
    lv_obj_set_width(ui_Button11, 133);
    lv_obj_set_height(ui_Button11, 36);
    lv_obj_set_x(ui_Button11, 89);
    lv_obj_set_y(ui_Button11, 335);
    lv_obj_add_flag(ui_Button11, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Button11, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_Button11, 20, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Button11, lv_color_hex(0xF23A00), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button11, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_Button11, LV_GRAD_DIR_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui_Button11, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui_Button11, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label24 = lv_label_create(ui_Button11);
    lv_obj_set_width(ui_Label24, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label24, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label24, 2);
    lv_obj_set_y(ui_Label24, -1);
    lv_obj_set_align(ui_Label24, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label24, "Load to Shoot");

    ui_Image2 = lv_img_create(ui_Panel1);
    lv_img_set_src(ui_Image2, &ui_img_beer_corona_png);
    lv_obj_set_width(ui_Image2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Image2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Image2, 100);
    lv_obj_set_y(ui_Image2, 60);
    lv_obj_add_flag(ui_Image2, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Label25 = lv_label_create(ui_Panel1);
    lv_obj_set_width(ui_Label25, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label25, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label25, 0);
    lv_obj_set_y(ui_Label25, 20);
    lv_label_set_text(ui_Label25, "Corona Beer Can");
    lv_obj_set_style_text_color(ui_Label25, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label25, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label25, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label25, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label26 = lv_label_create(ui_Panel1);
    lv_obj_set_width(ui_Label26, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label26, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label26, 260);
    lv_obj_set_y(ui_Label26, 280);
    lv_label_set_text(ui_Label26, "5.20%");
    lv_obj_set_style_text_color(ui_Label26, lv_color_hex(0xFFF858), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label26, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label26, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label27 = lv_label_create(ui_Panel1);
    lv_obj_set_width(ui_Label27, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label27, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label27, 0);
    lv_obj_set_y(ui_Label27, 300);
    lv_label_set_text(ui_Label27, "Ale");
    lv_obj_set_style_text_color(ui_Label27, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label27, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label28 = lv_label_create(ui_Panel1);
    lv_obj_set_width(ui_Label28, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label28, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label28, 0);
    lv_obj_set_y(ui_Label28, 280);
    lv_label_set_text(ui_Label28, "Two Hearted");
    lv_obj_set_style_text_color(ui_Label28, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label28, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label29 = lv_label_create(ui_Panel1);
    lv_obj_set_width(ui_Label29, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label29, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label29, 265);
    lv_obj_set_y(ui_Label29, 0);
    lv_label_set_text(ui_Label29, "5/10");
    lv_obj_set_style_text_color(ui_Label29, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label29, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label29, &lv_font_montserrat_8, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Button13 = lv_btn_create(ui_step1);
    lv_obj_set_width(ui_Button13, 60);
    lv_obj_set_height(ui_Button13, 22);
    lv_obj_set_x(ui_Button13, 243);
    lv_obj_set_y(ui_Button13, 0);
    lv_obj_add_flag(ui_Button13, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Button13, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_Button13, 4, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Button13, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button13, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_main_stop(ui_Button13, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_stop(ui_Button13, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Button13, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Container3 = lv_obj_create(ui_Button13);
    lv_obj_remove_style_all(ui_Container3);
    lv_obj_set_width(ui_Container3, 50);
    lv_obj_set_height(ui_Container3, 22);
    lv_obj_set_align(ui_Container3, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Container3, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_Container3, 10, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label21 = lv_label_create(ui_Container3);
    lv_obj_set_width(ui_Label21, 40);
    lv_obj_set_height(ui_Label21, 14);
    lv_obj_set_x(ui_Label21, 15);
    lv_obj_set_y(ui_Label21, 6);
    lv_label_set_text(ui_Label21, "settings");
    lv_obj_set_style_text_font(ui_Label21, &lv_font_montserrat_8, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Image4 = lv_img_create(ui_Container3);
    lv_img_set_src(ui_Image4, &ui_img_vector_png);
    lv_obj_set_width(ui_Image4, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Image4, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Image4, -1);
    lv_obj_set_y(ui_Image4, 6);
    lv_obj_add_flag(ui_Image4, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image4, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

}
