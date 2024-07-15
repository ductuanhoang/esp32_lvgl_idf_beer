// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.0
// LVGL version: 8.3.11
// Project name: SquareLine_Project

#include "../ui.h"

void ui_setting_screen_init(void)
{
    ui_setting = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_setting, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_setting, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_setting, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Panel2 = lv_obj_create(ui_setting);
    lv_obj_set_width(ui_Panel2, 294);
    lv_obj_set_height(ui_Panel2, 267);
    lv_obj_set_x(ui_Panel2, 13);
    lv_obj_set_y(ui_Panel2, 106);
    lv_obj_clear_flag(ui_Panel2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_border_width(ui_Panel2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label9 = lv_label_create(ui_Panel2);
    lv_obj_set_width(ui_Label9, LV_SIZE_CONTENT);   /// 64
    lv_obj_set_height(ui_Label9, LV_SIZE_CONTENT);    /// 17
    lv_obj_set_x(ui_Label9, 0);
    lv_obj_set_y(ui_Label9, 13);
    lv_label_set_text(ui_Label9, "Rapid fire");
    lv_obj_set_style_text_font(ui_Label9, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Switch5 = lv_switch_create(ui_Panel2);
    lv_obj_set_width(ui_Switch5, 50);
    lv_obj_set_height(ui_Switch5, 25);
    lv_obj_set_x(ui_Switch5, 200);
    lv_obj_set_y(ui_Switch5, 10);


    ui_Switch6 = lv_switch_create(ui_Panel2);
    lv_obj_set_width(ui_Switch6, 50);
    lv_obj_set_height(ui_Switch6, 25);
    lv_obj_set_x(ui_Switch6, 200);
    lv_obj_set_y(ui_Switch6, 60);


    ui_Switch7 = lv_switch_create(ui_Panel2);
    lv_obj_set_width(ui_Switch7, 50);
    lv_obj_set_height(ui_Switch7, 25);
    lv_obj_set_x(ui_Switch7, 200);
    lv_obj_set_y(ui_Switch7, 117);


    ui_Switch8 = lv_switch_create(ui_Panel2);
    lv_obj_set_width(ui_Switch8, 50);
    lv_obj_set_height(ui_Switch8, 25);
    lv_obj_set_x(ui_Switch8, 200);
    lv_obj_set_y(ui_Switch8, 173);


    ui_Label10 = lv_label_create(ui_Panel2);
    lv_obj_set_width(ui_Label10, LV_SIZE_CONTENT);   /// 64
    lv_obj_set_height(ui_Label10, LV_SIZE_CONTENT);    /// 17
    lv_obj_set_x(ui_Label10, 0);
    lv_obj_set_y(ui_Label10, 61);
    lv_label_set_text(ui_Label10, "Continuous Blower");
    lv_obj_set_style_text_font(ui_Label10, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label11 = lv_label_create(ui_Panel2);
    lv_obj_set_width(ui_Label11, LV_SIZE_CONTENT);   /// 64
    lv_obj_set_height(ui_Label11, LV_SIZE_CONTENT);    /// 17
    lv_obj_set_x(ui_Label11, 0);
    lv_obj_set_y(ui_Label11, 122);
    lv_label_set_text(ui_Label11, "Continuous Vacuum");
    lv_obj_set_style_text_font(ui_Label11, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label12 = lv_label_create(ui_Panel2);
    lv_obj_set_width(ui_Label12, LV_SIZE_CONTENT);   /// 64
    lv_obj_set_height(ui_Label12, LV_SIZE_CONTENT);    /// 17
    lv_obj_set_x(ui_Label12, 0);
    lv_obj_set_y(ui_Label12, 183);
    lv_label_set_text(ui_Label12, "Compressed air shot");
    lv_obj_set_style_text_font(ui_Label12, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label13 = lv_label_create(ui_setting);
    lv_obj_set_width(ui_Label13, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label13, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label13, 27);
    lv_obj_set_y(ui_Label13, 44);
    lv_label_set_text(ui_Label13, "Settings");
    lv_obj_set_style_text_align(ui_Label13, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label13, &lv_font_montserrat_24, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Button3 = lv_btn_create(ui_setting);
    lv_obj_set_width(ui_Button3, 61);
    lv_obj_set_height(ui_Button3, 24);
    lv_obj_set_x(ui_Button3, -114);
    lv_obj_set_y(ui_Button3, -224);
    lv_obj_set_align(ui_Button3, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Button3, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Button3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_text_font(ui_Button3, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label14 = lv_label_create(ui_Button3);
    lv_obj_set_width(ui_Label14, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label14, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label14, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label14, "Back");

    ui_Button4 = lv_btn_create(ui_setting);
    lv_obj_set_width(ui_Button4, 61);
    lv_obj_set_height(ui_Button4, 24);
    lv_obj_set_x(ui_Button4, 119);
    lv_obj_set_y(ui_Button4, -224);
    lv_obj_set_align(ui_Button4, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Button4, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Button4, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_text_font(ui_Button4, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label15 = lv_label_create(ui_Button4);
    lv_obj_set_width(ui_Label15, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label15, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label15, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label15, "Home");

}
