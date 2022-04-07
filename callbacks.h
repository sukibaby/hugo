#include <gtk/gtk.h>


gboolean
on_mainWindow_key_press_event          (GtkWidget       *widget,
                                        GdkEventKey     *event,
                                        gpointer         user_data);

gboolean
on_mainWindow_key_release_event        (GtkWidget       *widget,
                                        GdkEventKey     *event,
                                        gpointer         user_data);

void
on_open1_activate                      (GtkMenuItem     *menuitem,
                                        gpointer         user_data);

void
on_quit1_activate                      (GtkMenuItem     *menuitem,
                                        gpointer         user_data);

void
on_save1_activate                      (GtkMenuItem     *menuitem,
                                        gpointer         user_data);

void
on_load1_activate                      (GtkMenuItem     *menuitem,
                                        gpointer         user_data);

void
on_input_setting_1_activate            (GtkMenuItem     *menuitem,
                                        gpointer         user_data);

void
on_hugo_manual1_activate               (GtkMenuItem     *menuitem,
                                        gpointer         user_data);

void
on_pc_engine_story1_activate           (GtkMenuItem     *menuitem,
                                        gpointer         user_data);

void
on_about_1_activate                    (GtkMenuItem     *menuitem,
                                        gpointer         user_data);

void
on_mainWindow_destroy                  (GtkObject       *object,
                                        gpointer         user_data);

void
on_button1_clicked                     (GtkButton       *button,
                                        gpointer         user_data);

void
on_ok_button1_clicked                  (GtkButton       *button,
                                        gpointer         user_data);

void
on_button1_clicked                     (GtkButton       *button,
                                        gpointer         user_data);

void
on_cancel_button1_clicked              (GtkButton       *button,
                                        gpointer         user_data);

void
on_option_config_number_clicked        (GtkButton       *button,
                                        gpointer         user_data);

void
on_option_device_number_clicked        (GtkButton       *button,
                                        gpointer         user_data);

void
on_option_device_type_clicked          (GtkButton       *button,
                                        gpointer         user_data);

void
on_button_close_input_settings_window_clicked
                                        (GtkButton       *button,
                                        gpointer         user_data);

void
on_button_grab_up_clicked              (GtkButton       *button,
                                        gpointer         user_data);

void
on_button2_clicked                     (GtkButton       *button,
                                        gpointer         user_data);

void
on_button_grab_clicked                 (GtkButton       *button,
                                        gpointer         user_data);


void
on_button_use_current_config_clicked   (GtkButton       *button,
                                        gpointer         user_data);
										

void
on_button_configure_this_player_clicked
                                        (GtkButton       *button,
                                        gpointer         user_data);

void
on_button_use_this_device_clicked      (GtkButton       *button,
                                        gpointer         user_data);

void
on_general_settings_1_activate         (GtkMenuItem     *menuitem,
                                        gpointer         user_data);

void
on_button_close_about_clicked          (GtkButton       *button,
                                        gpointer         user_data);

void
on_button_browse_cd_system_clicked     (GtkButton       *button,
                                        gpointer         user_data);

void
on_buttongeneral_config_close_clicked  (GtkButton       *button,
                                        gpointer         user_data);

void
on_button_general_config_save_clicked  (GtkButton       *button,
                                        gpointer         user_data);

void
on_button_general_config_cancel_clicked
                                        (GtkButton       *button,
                                        gpointer         user_data);

void
on_general_settings_window_show        (GtkWidget       *widget,
                                        gpointer         user_data);

void
on_ok_button_cd_system_clicked         (GtkButton       *button,
                                        gpointer         user_data);

void
on_cancel_button_cd_system_clicked     (GtkButton       *button,
                                        gpointer         user_data);

void
on_ok_button_cd_path_clicked           (GtkButton       *button,
                                        gpointer         user_data);

void
on_cancel_button_cd_path_clicked       (GtkButton       *button,
                                        gpointer         user_data);

void
on_button_browse_rom_dirname_clicked   (GtkButton       *button,
                                        gpointer         user_data);

void
on_button_browse_cd_path_clicked       (GtkButton       *button,
                                        gpointer         user_data);

void
on_ok_button_rom_path_clicked          (GtkButton       *button,
                                        gpointer         user_data);

void
on_cancel_button_rom_path_clicked      (GtkButton       *button,
                                        gpointer         user_data);

void
on_button_manual_close_clicked         (GtkButton       *button,
                                        gpointer         user_data);

void
on_input_settings_window_show          (GtkWidget       *widget,
                                        gpointer         user_data);
