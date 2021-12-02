/*
 * DO NOT EDIT THIS FILE - it is generated by Glade.
 */

#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

#include <gdk/gdkkeysyms.h>
#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"

#define GLADE_HOOKUP_OBJECT(component,widget,name) \
  g_object_set_data_full (G_OBJECT (component), name, \
    gtk_widget_ref (widget), (GDestroyNotify) gtk_widget_unref)

#define GLADE_HOOKUP_OBJECT_NO_REF(component,widget,name) \
  g_object_set_data (G_OBJECT (component), name, widget)

GtkWidget*
create_dashboard (void)
{
  GtkWidget *dashboard;
  GtkWidget *fixed1;
  GtkWidget *button2;
  GtkWidget *alignment10;
  GtkWidget *hbox7;
  GtkWidget *image7;
  GtkWidget *label29;
  GtkWidget *button1;
  GtkWidget *alignment11;
  GtkWidget *hbox8;
  GtkWidget *image8;
  GtkWidget *label38;
  GtkWidget *button3;
  GtkWidget *alignment12;
  GtkWidget *hbox9;
  GtkWidget *image9;
  GtkWidget *label39;
  GtkWidget *button4;
  GtkWidget *alignment13;
  GtkWidget *hbox10;
  GtkWidget *image10;
  GtkWidget *label40;

  dashboard = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_widget_set_size_request (dashboard, 600, 650);
  gtk_window_set_title (GTK_WINDOW (dashboard), _("Gestion des r\303\251clamations"));
  gtk_window_set_position (GTK_WINDOW (dashboard), GTK_WIN_POS_CENTER);
  gtk_window_set_resizable (GTK_WINDOW (dashboard), FALSE);

  fixed1 = gtk_fixed_new ();
  gtk_widget_show (fixed1);
  gtk_container_add (GTK_CONTAINER (dashboard), fixed1);

  button2 = gtk_button_new ();
  gtk_widget_show (button2);
  gtk_fixed_put (GTK_FIXED (fixed1), button2, 336, 144);
  gtk_widget_set_size_request (button2, 208, 72);

  alignment10 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment10);
  gtk_container_add (GTK_CONTAINER (button2), alignment10);

  hbox7 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox7);
  gtk_container_add (GTK_CONTAINER (alignment10), hbox7);

  image7 = gtk_image_new_from_stock ("gtk-edit", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image7);
  gtk_box_pack_start (GTK_BOX (hbox7), image7, FALSE, FALSE, 0);

  label29 = gtk_label_new_with_mnemonic (_("Modifier une r\303\251clamation"));
  gtk_widget_show (label29);
  gtk_box_pack_start (GTK_BOX (hbox7), label29, FALSE, FALSE, 0);

  button1 = gtk_button_new ();
  gtk_widget_show (button1);
  gtk_fixed_put (GTK_FIXED (fixed1), button1, 56, 144);
  gtk_widget_set_size_request (button1, 200, 72);

  alignment11 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment11);
  gtk_container_add (GTK_CONTAINER (button1), alignment11);

  hbox8 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox8);
  gtk_container_add (GTK_CONTAINER (alignment11), hbox8);

  image8 = gtk_image_new_from_stock ("gtk-add", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image8);
  gtk_box_pack_start (GTK_BOX (hbox8), image8, FALSE, FALSE, 0);

  label38 = gtk_label_new_with_mnemonic (_("Ajouter une r\303\251clamation"));
  gtk_widget_show (label38);
  gtk_box_pack_start (GTK_BOX (hbox8), label38, FALSE, FALSE, 0);

  button3 = gtk_button_new ();
  gtk_widget_show (button3);
  gtk_fixed_put (GTK_FIXED (fixed1), button3, 56, 320);
  gtk_widget_set_size_request (button3, 200, 72);

  alignment12 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment12);
  gtk_container_add (GTK_CONTAINER (button3), alignment12);

  hbox9 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox9);
  gtk_container_add (GTK_CONTAINER (alignment12), hbox9);

  image9 = gtk_image_new_from_stock ("gtk-justify-fill", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image9);
  gtk_box_pack_start (GTK_BOX (hbox9), image9, FALSE, FALSE, 0);

  label39 = gtk_label_new_with_mnemonic (_("Afficher les r\303\251clamations"));
  gtk_widget_show (label39);
  gtk_box_pack_start (GTK_BOX (hbox9), label39, FALSE, FALSE, 0);

  button4 = gtk_button_new ();
  gtk_widget_show (button4);
  gtk_fixed_put (GTK_FIXED (fixed1), button4, 336, 320);
  gtk_widget_set_size_request (button4, 208, 72);

  alignment13 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment13);
  gtk_container_add (GTK_CONTAINER (button4), alignment13);

  hbox10 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox10);
  gtk_container_add (GTK_CONTAINER (alignment13), hbox10);

  image10 = gtk_image_new_from_stock ("gtk-dialog-warning", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image10);
  gtk_box_pack_start (GTK_BOX (hbox10), image10, FALSE, FALSE, 0);

  label40 = gtk_label_new_with_mnemonic (_("Service le plus r\303\251clam\303\251"));
  gtk_widget_show (label40);
  gtk_box_pack_start (GTK_BOX (hbox10), label40, FALSE, FALSE, 0);

  g_signal_connect ((gpointer) button2, "clicked",
                    G_CALLBACK (on_button2_clicked),
                    NULL);
  g_signal_connect ((gpointer) button1, "clicked",
                    G_CALLBACK (on_button1_clicked),
                    NULL);
  g_signal_connect ((gpointer) button3, "clicked",
                    G_CALLBACK (on_button3_clicked),
                    NULL);
  g_signal_connect ((gpointer) button4, "clicked",
                    G_CALLBACK (on_button4_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (dashboard, dashboard, "dashboard");
  GLADE_HOOKUP_OBJECT (dashboard, fixed1, "fixed1");
  GLADE_HOOKUP_OBJECT (dashboard, button2, "button2");
  GLADE_HOOKUP_OBJECT (dashboard, alignment10, "alignment10");
  GLADE_HOOKUP_OBJECT (dashboard, hbox7, "hbox7");
  GLADE_HOOKUP_OBJECT (dashboard, image7, "image7");
  GLADE_HOOKUP_OBJECT (dashboard, label29, "label29");
  GLADE_HOOKUP_OBJECT (dashboard, button1, "button1");
  GLADE_HOOKUP_OBJECT (dashboard, alignment11, "alignment11");
  GLADE_HOOKUP_OBJECT (dashboard, hbox8, "hbox8");
  GLADE_HOOKUP_OBJECT (dashboard, image8, "image8");
  GLADE_HOOKUP_OBJECT (dashboard, label38, "label38");
  GLADE_HOOKUP_OBJECT (dashboard, button3, "button3");
  GLADE_HOOKUP_OBJECT (dashboard, alignment12, "alignment12");
  GLADE_HOOKUP_OBJECT (dashboard, hbox9, "hbox9");
  GLADE_HOOKUP_OBJECT (dashboard, image9, "image9");
  GLADE_HOOKUP_OBJECT (dashboard, label39, "label39");
  GLADE_HOOKUP_OBJECT (dashboard, button4, "button4");
  GLADE_HOOKUP_OBJECT (dashboard, alignment13, "alignment13");
  GLADE_HOOKUP_OBJECT (dashboard, hbox10, "hbox10");
  GLADE_HOOKUP_OBJECT (dashboard, image10, "image10");
  GLADE_HOOKUP_OBJECT (dashboard, label40, "label40");

  return dashboard;
}

GtkWidget*
create_mod (void)
{
  GtkWidget *mod;
  GtkWidget *fixed2;
  GtkWidget *mod1;
  GtkWidget *check_id;
  GtkWidget *alignment2;
  GtkWidget *hbox2;
  GtkWidget *image2;
  GtkWidget *label6;
  GtkWidget *label4;
  GtkWidget *label33;
  GtkWidget *label34;
  GtkWidget *label36;
  GtkWidget *mod4;
  GtkWidget *mod2;
  GtkWidget *mod3;
  GtkWidget *label35;
  GtkWidget *r1;
  GSList *r1_group = NULL;
  GtkWidget *r2;
  GtkWidget *r3;
  GtkWidget *r4;
  GtkWidget *r5;
  GtkWidget *r6;
  GtkWidget *button_mod;
  GtkWidget *alignment1;
  GtkWidget *hbox1;
  GtkWidget *image1;
  GtkWidget *label5;
  GtkWidget *button_mod_retour;
  GtkWidget *alignment14;
  GtkWidget *hbox11;
  GtkWidget *image11;
  GtkWidget *label41;

  mod = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_widget_set_size_request (mod, 784, 600);
  gtk_window_set_title (GTK_WINDOW (mod), _("Modifier une r\303\251clamation"));
  gtk_window_set_position (GTK_WINDOW (mod), GTK_WIN_POS_CENTER);
  gtk_window_set_resizable (GTK_WINDOW (mod), FALSE);

  fixed2 = gtk_fixed_new ();
  gtk_widget_show (fixed2);
  gtk_container_add (GTK_CONTAINER (mod), fixed2);

  mod1 = gtk_entry_new ();
  gtk_widget_show (mod1);
  gtk_fixed_put (GTK_FIXED (fixed2), mod1, 312, 48);
  gtk_widget_set_size_request (mod1, 144, 32);
  gtk_entry_set_invisible_char (GTK_ENTRY (mod1), 8226);

  check_id = gtk_button_new ();
  gtk_widget_show (check_id);
  gtk_fixed_put (GTK_FIXED (fixed2), check_id, 568, 40);
  gtk_widget_set_size_request (check_id, 104, 48);

  alignment2 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment2);
  gtk_container_add (GTK_CONTAINER (check_id), alignment2);

  hbox2 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox2);
  gtk_container_add (GTK_CONTAINER (alignment2), hbox2);

  image2 = gtk_image_new_from_stock ("gtk-go-back", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image2);
  gtk_box_pack_start (GTK_BOX (hbox2), image2, FALSE, FALSE, 0);

  label6 = gtk_label_new_with_mnemonic (_("V\303\251rifier"));
  gtk_widget_show (label6);
  gtk_box_pack_start (GTK_BOX (hbox2), label6, FALSE, FALSE, 0);

  label4 = gtk_label_new (_("ID :"));
  gtk_widget_show (label4);
  gtk_fixed_put (GTK_FIXED (fixed2), label4, 208, 56);
  gtk_widget_set_size_request (label4, 40, 16);

  label33 = gtk_label_new (_("Classe :"));
  gtk_widget_show (label33);
  gtk_fixed_put (GTK_FIXED (fixed2), label33, 64, 136);
  gtk_widget_set_size_request (label33, 112, 24);

  label34 = gtk_label_new (_("Pr\303\251nom :"));
  gtk_widget_show (label34);
  gtk_fixed_put (GTK_FIXED (fixed2), label34, 64, 216);
  gtk_widget_set_size_request (label34, 112, 24);

  label36 = gtk_label_new (_("Service :"));
  gtk_widget_show (label36);
  gtk_fixed_put (GTK_FIXED (fixed2), label36, 56, 344);
  gtk_widget_set_size_request (label36, 112, 24);

  mod4 = gtk_entry_new ();
  gtk_widget_show (mod4);
  gtk_fixed_put (GTK_FIXED (fixed2), mod4, 192, 128);
  gtk_widget_set_size_request (mod4, 144, 32);
  gtk_entry_set_invisible_char (GTK_ENTRY (mod4), 8226);

  mod2 = gtk_entry_new ();
  gtk_widget_show (mod2);
  gtk_fixed_put (GTK_FIXED (fixed2), mod2, 192, 216);
  gtk_widget_set_size_request (mod2, 144, 32);
  gtk_entry_set_invisible_char (GTK_ENTRY (mod2), 8226);

  mod3 = gtk_entry_new ();
  gtk_widget_show (mod3);
  gtk_fixed_put (GTK_FIXED (fixed2), mod3, 536, 216);
  gtk_widget_set_size_request (mod3, 144, 32);
  gtk_entry_set_invisible_char (GTK_ENTRY (mod3), 8226);

  label35 = gtk_label_new (_("Nom :"));
  gtk_widget_show (label35);
  gtk_fixed_put (GTK_FIXED (fixed2), label35, 440, 216);
  gtk_widget_set_size_request (label35, 80, 24);

  r1 = gtk_radio_button_new_with_mnemonic (NULL, _("Menu"));
  gtk_widget_show (r1);
  gtk_fixed_put (GTK_FIXED (fixed2), r1, 216, 304);
  gtk_widget_set_size_request (r1, 116, 24);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (r1), r1_group);
  r1_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (r1));

  r2 = gtk_radio_button_new_with_mnemonic (NULL, _("Salle de repas"));
  gtk_widget_show (r2);
  gtk_fixed_put (GTK_FIXED (fixed2), r2, 216, 352);
  gtk_widget_set_size_request (r2, 128, 24);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (r2), r1_group);
  r1_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (r2));

  r3 = gtk_radio_button_new_with_mnemonic (NULL, _("Sanitaire"));
  gtk_widget_show (r3);
  gtk_fixed_put (GTK_FIXED (fixed2), r3, 216, 400);
  gtk_widget_set_size_request (r3, 116, 24);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (r3), r1_group);
  r1_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (r3));

  r4 = gtk_radio_button_new_with_mnemonic (NULL, _("Electricit\303\251"));
  gtk_widget_show (r4);
  gtk_fixed_put (GTK_FIXED (fixed2), r4, 472, 304);
  gtk_widget_set_size_request (r4, 116, 24);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (r4), r1_group);
  r1_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (r4));

  r5 = gtk_radio_button_new_with_mnemonic (NULL, _("Connectivit\303\251"));
  gtk_widget_show (r5);
  gtk_fixed_put (GTK_FIXED (fixed2), r5, 472, 352);
  gtk_widget_set_size_request (r5, 116, 24);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (r5), r1_group);
  r1_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (r5));

  r6 = gtk_radio_button_new_with_mnemonic (NULL, _("Salle TV"));
  gtk_widget_show (r6);
  gtk_fixed_put (GTK_FIXED (fixed2), r6, 472, 408);
  gtk_widget_set_size_request (r6, 116, 24);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (r6), r1_group);
  r1_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (r6));

  button_mod = gtk_button_new ();
  gtk_widget_show (button_mod);
  gtk_fixed_put (GTK_FIXED (fixed2), button_mod, 250, 490);
  gtk_widget_set_size_request (button_mod, 120, 48);

  alignment1 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment1);
  gtk_container_add (GTK_CONTAINER (button_mod), alignment1);

  hbox1 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox1);
  gtk_container_add (GTK_CONTAINER (alignment1), hbox1);

  image1 = gtk_image_new_from_stock ("gtk-apply", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image1);
  gtk_box_pack_start (GTK_BOX (hbox1), image1, FALSE, FALSE, 0);

  label5 = gtk_label_new_with_mnemonic (_("Valider"));
  gtk_widget_show (label5);
  gtk_box_pack_start (GTK_BOX (hbox1), label5, FALSE, FALSE, 0);

  button_mod_retour = gtk_button_new ();
  gtk_widget_show (button_mod_retour);
  gtk_fixed_put (GTK_FIXED (fixed2), button_mod_retour, 450, 490);
  gtk_widget_set_size_request (button_mod_retour, 112, 48);

  alignment14 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment14);
  gtk_container_add (GTK_CONTAINER (button_mod_retour), alignment14);

  hbox11 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox11);
  gtk_container_add (GTK_CONTAINER (alignment14), hbox11);

  image11 = gtk_image_new_from_stock ("gtk-go-back", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image11);
  gtk_box_pack_start (GTK_BOX (hbox11), image11, FALSE, FALSE, 0);

  label41 = gtk_label_new_with_mnemonic (_("Fermer"));
  gtk_widget_show (label41);
  gtk_box_pack_start (GTK_BOX (hbox11), label41, FALSE, FALSE, 0);

  g_signal_connect ((gpointer) check_id, "clicked",
                    G_CALLBACK (on_check_id_clicked),
                    NULL);
  g_signal_connect ((gpointer) button_mod, "clicked",
                    G_CALLBACK (on_button_mod_clicked),
                    NULL);
  g_signal_connect ((gpointer) button_mod_retour, "clicked",
                    G_CALLBACK (on_button_mod_retour_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (mod, mod, "mod");
  GLADE_HOOKUP_OBJECT (mod, fixed2, "fixed2");
  GLADE_HOOKUP_OBJECT (mod, mod1, "mod1");
  GLADE_HOOKUP_OBJECT (mod, check_id, "check_id");
  GLADE_HOOKUP_OBJECT (mod, alignment2, "alignment2");
  GLADE_HOOKUP_OBJECT (mod, hbox2, "hbox2");
  GLADE_HOOKUP_OBJECT (mod, image2, "image2");
  GLADE_HOOKUP_OBJECT (mod, label6, "label6");
  GLADE_HOOKUP_OBJECT (mod, label4, "label4");
  GLADE_HOOKUP_OBJECT (mod, label33, "label33");
  GLADE_HOOKUP_OBJECT (mod, label34, "label34");
  GLADE_HOOKUP_OBJECT (mod, label36, "label36");
  GLADE_HOOKUP_OBJECT (mod, mod4, "mod4");
  GLADE_HOOKUP_OBJECT (mod, mod2, "mod2");
  GLADE_HOOKUP_OBJECT (mod, mod3, "mod3");
  GLADE_HOOKUP_OBJECT (mod, label35, "label35");
  GLADE_HOOKUP_OBJECT (mod, r1, "r1");
  GLADE_HOOKUP_OBJECT (mod, r2, "r2");
  GLADE_HOOKUP_OBJECT (mod, r3, "r3");
  GLADE_HOOKUP_OBJECT (mod, r4, "r4");
  GLADE_HOOKUP_OBJECT (mod, r5, "r5");
  GLADE_HOOKUP_OBJECT (mod, r6, "r6");
  GLADE_HOOKUP_OBJECT (mod, button_mod, "button_mod");
  GLADE_HOOKUP_OBJECT (mod, alignment1, "alignment1");
  GLADE_HOOKUP_OBJECT (mod, hbox1, "hbox1");
  GLADE_HOOKUP_OBJECT (mod, image1, "image1");
  GLADE_HOOKUP_OBJECT (mod, label5, "label5");
  GLADE_HOOKUP_OBJECT (mod, button_mod_retour, "button_mod_retour");
  GLADE_HOOKUP_OBJECT (mod, alignment14, "alignment14");
  GLADE_HOOKUP_OBJECT (mod, hbox11, "hbox11");
  GLADE_HOOKUP_OBJECT (mod, image11, "image11");
  GLADE_HOOKUP_OBJECT (mod, label41, "label41");

  return mod;
}

GtkWidget*
create_af (void)
{
  GtkWidget *af;
  GtkWidget *fixed3;
  GtkWidget *scrolledwindow1;
  GtkWidget *alignment4;
  GtkWidget *treeview;
  GtkWidget *label10;
  GtkWidget *button_af;
  GtkWidget *alignment5;
  GtkWidget *hbox3;
  GtkWidget *image3;
  GtkWidget *label11;
  GtkWidget *button_af_retour;
  GtkWidget *alignment15;
  GtkWidget *hbox12;
  GtkWidget *image12;
  GtkWidget *label42;

  af = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_widget_set_size_request (af, 824, 600);
  gtk_window_set_title (GTK_WINDOW (af), _("Liste des r\303\251clamations"));
  gtk_window_set_position (GTK_WINDOW (af), GTK_WIN_POS_CENTER);
  gtk_window_set_resizable (GTK_WINDOW (af), FALSE);

  fixed3 = gtk_fixed_new ();
  gtk_widget_show (fixed3);
  gtk_container_add (GTK_CONTAINER (af), fixed3);

  scrolledwindow1 = gtk_scrolled_window_new (NULL, NULL);
  gtk_widget_show (scrolledwindow1);
  gtk_fixed_put (GTK_FIXED (fixed3), scrolledwindow1, 56, 104);
  gtk_widget_set_size_request (scrolledwindow1, 744, 368);

  alignment4 = gtk_alignment_new (0.5, 0.5, 1, 1);
  gtk_widget_show (alignment4);
  gtk_container_add (GTK_CONTAINER (scrolledwindow1), alignment4);

  treeview = gtk_tree_view_new ();
  gtk_widget_show (treeview);
  gtk_container_add (GTK_CONTAINER (alignment4), treeview);
  gtk_tree_view_set_rules_hint (GTK_TREE_VIEW (treeview), TRUE);
  gtk_tree_view_set_reorderable (GTK_TREE_VIEW (treeview), TRUE);

  label10 = gtk_label_new (_("Liste des r\303\251clamations"));
  gtk_widget_show (label10);
  gtk_fixed_put (GTK_FIXED (fixed3), label10, 280, 16);
  gtk_widget_set_size_request (label10, 280, 56);

  button_af = gtk_button_new ();
  gtk_widget_show (button_af);
  gtk_fixed_put (GTK_FIXED (fixed3), button_af, 250, 505);
  gtk_widget_set_size_request (button_af, 112, 48);

  alignment5 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment5);
  gtk_container_add (GTK_CONTAINER (button_af), alignment5);

  hbox3 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox3);
  gtk_container_add (GTK_CONTAINER (alignment5), hbox3);

  image3 = gtk_image_new_from_stock ("gtk-refresh", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image3);
  gtk_box_pack_start (GTK_BOX (hbox3), image3, FALSE, FALSE, 0);

  label11 = gtk_label_new_with_mnemonic (_("Afficher"));
  gtk_widget_show (label11);
  gtk_box_pack_start (GTK_BOX (hbox3), label11, FALSE, FALSE, 0);

  button_af_retour = gtk_button_new ();
  gtk_widget_show (button_af_retour);
  gtk_fixed_put (GTK_FIXED (fixed3), button_af_retour, 450, 505);
  gtk_widget_set_size_request (button_af_retour, 112, 48);

  alignment15 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment15);
  gtk_container_add (GTK_CONTAINER (button_af_retour), alignment15);

  hbox12 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox12);
  gtk_container_add (GTK_CONTAINER (alignment15), hbox12);

  image12 = gtk_image_new_from_stock ("gtk-go-back", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image12);
  gtk_box_pack_start (GTK_BOX (hbox12), image12, FALSE, FALSE, 0);

  label42 = gtk_label_new_with_mnemonic (_("Fermer"));
  gtk_widget_show (label42);
  gtk_box_pack_start (GTK_BOX (hbox12), label42, FALSE, FALSE, 0);

  g_signal_connect ((gpointer) treeview, "row_activated",
                    G_CALLBACK (on_treeview_row_activated),
                    NULL);
  g_signal_connect ((gpointer) button_af, "clicked",
                    G_CALLBACK (on_button_af_clicked),
                    NULL);
  g_signal_connect ((gpointer) button_af_retour, "clicked",
                    G_CALLBACK (on_button_af_retour_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (af, af, "af");
  GLADE_HOOKUP_OBJECT (af, fixed3, "fixed3");
  GLADE_HOOKUP_OBJECT (af, scrolledwindow1, "scrolledwindow1");
  GLADE_HOOKUP_OBJECT (af, alignment4, "alignment4");
  GLADE_HOOKUP_OBJECT (af, treeview, "treeview");
  GLADE_HOOKUP_OBJECT (af, label10, "label10");
  GLADE_HOOKUP_OBJECT (af, button_af, "button_af");
  GLADE_HOOKUP_OBJECT (af, alignment5, "alignment5");
  GLADE_HOOKUP_OBJECT (af, hbox3, "hbox3");
  GLADE_HOOKUP_OBJECT (af, image3, "image3");
  GLADE_HOOKUP_OBJECT (af, label11, "label11");
  GLADE_HOOKUP_OBJECT (af, button_af_retour, "button_af_retour");
  GLADE_HOOKUP_OBJECT (af, alignment15, "alignment15");
  GLADE_HOOKUP_OBJECT (af, hbox12, "hbox12");
  GLADE_HOOKUP_OBJECT (af, image12, "image12");
  GLADE_HOOKUP_OBJECT (af, label42, "label42");

  return af;
}

GtkWidget*
create_aj (void)
{
  GtkWidget *aj;
  GtkWidget *fixed4;
  GtkWidget *aj3;
  GtkWidget *label13;
  GtkWidget *aj2;
  GtkWidget *aj4;
  GtkWidget *aj6;
  GtkWidget *label31;
  GtkWidget *aeg;
  GtkWidget *label14;
  GtkWidget *label16;
  GtkWidget *aj5;
  GtkWidget *label32;
  GtkObject *aj1_adj;
  GtkWidget *aj1;
  GtkWidget *button_aj;
  GtkWidget *button_aj_retour;
  GtkWidget *alignment16;
  GtkWidget *hbox13;
  GtkWidget *image13;
  GtkWidget *label43;

  aj = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_widget_set_size_request (aj, 784, 550);
  gtk_window_set_title (GTK_WINDOW (aj), _("Ajouter une r\303\251clamation"));
  gtk_window_set_position (GTK_WINDOW (aj), GTK_WIN_POS_CENTER);
  gtk_window_set_resizable (GTK_WINDOW (aj), FALSE);

  fixed4 = gtk_fixed_new ();
  gtk_widget_show (fixed4);
  gtk_container_add (GTK_CONTAINER (aj), fixed4);

  aj3 = gtk_entry_new ();
  gtk_widget_show (aj3);
  gtk_fixed_put (GTK_FIXED (fixed4), aj3, 528, 104);
  gtk_widget_set_size_request (aj3, 168, 40);
  gtk_entry_set_invisible_char (GTK_ENTRY (aj3), 8226);

  label13 = gtk_label_new (_("ID :"));
  gtk_widget_show (label13);
  gtk_fixed_put (GTK_FIXED (fixed4), label13, 24, 40);
  gtk_widget_set_size_request (label13, 104, 24);

  aj2 = gtk_entry_new ();
  gtk_widget_show (aj2);
  gtk_fixed_put (GTK_FIXED (fixed4), aj2, 176, 104);
  gtk_widget_set_size_request (aj2, 168, 40);
  gtk_entry_set_invisible_char (GTK_ENTRY (aj2), 8226);

  aj4 = gtk_entry_new ();
  gtk_widget_show (aj4);
  gtk_fixed_put (GTK_FIXED (fixed4), aj4, 528, 32);
  gtk_widget_set_size_request (aj4, 168, 40);
  gtk_entry_set_invisible_char (GTK_ENTRY (aj4), 8226);

  aj6 = gtk_entry_new ();
  gtk_widget_show (aj6);
  gtk_fixed_put (GTK_FIXED (fixed4), aj6, 176, 280);
  gtk_widget_set_size_request (aj6, 536, 136);
  gtk_entry_set_invisible_char (GTK_ENTRY (aj6), 8226);

  label31 = gtk_label_new (_("Classe :"));
  gtk_widget_show (label31);
  gtk_fixed_put (GTK_FIXED (fixed4), label31, 392, 40);
  gtk_widget_set_size_request (label31, 112, 24);

  aeg = gtk_label_new (_("Pr\303\251nom :"));
  gtk_widget_show (aeg);
  gtk_fixed_put (GTK_FIXED (fixed4), aeg, 32, 112);
  gtk_widget_set_size_request (aeg, 112, 24);

  label14 = gtk_label_new (_("Nom :"));
  gtk_widget_show (label14);
  gtk_fixed_put (GTK_FIXED (fixed4), label14, 416, 112);
  gtk_widget_set_size_request (label14, 80, 24);

  label16 = gtk_label_new (_("Description :"));
  gtk_widget_show (label16);
  gtk_fixed_put (GTK_FIXED (fixed4), label16, 0, 272);
  gtk_widget_set_size_request (label16, 152, 32);

  aj5 = gtk_combo_box_new_text ();
  gtk_widget_show (aj5);
  gtk_fixed_put (GTK_FIXED (fixed4), aj5, 320, 192);
  gtk_widget_set_size_request (aj5, 208, 48);
  gtk_combo_box_append_text (GTK_COMBO_BOX (aj5), _("Menu"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (aj5), _("Salle de repas"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (aj5), _("Sanitaire"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (aj5), _("Electricit\303\251"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (aj5), _("Connectivit\303\251"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (aj5), _("Salle TV"));

  label32 = gtk_label_new (_("Service :"));
  gtk_widget_show (label32);
  gtk_fixed_put (GTK_FIXED (fixed4), label32, 184, 200);
  gtk_widget_set_size_request (label32, 112, 24);

  aj1_adj = gtk_adjustment_new (1, 0, 1000000, 1, 10, 10);
  aj1 = gtk_spin_button_new (GTK_ADJUSTMENT (aj1_adj), 1, 0);
  gtk_widget_show (aj1);
  gtk_fixed_put (GTK_FIXED (fixed4), aj1, 176, 40);
  gtk_widget_set_size_request (aj1, 96, 24);

  button_aj = gtk_button_new_with_mnemonic (_("Ajouter"));
  gtk_widget_show (button_aj);
  gtk_fixed_put (GTK_FIXED (fixed4), button_aj, 250, 450);
  gtk_widget_set_size_request (button_aj, 120, 48);

  button_aj_retour = gtk_button_new ();
  gtk_widget_show (button_aj_retour);
  gtk_fixed_put (GTK_FIXED (fixed4), button_aj_retour, 450, 450);
  gtk_widget_set_size_request (button_aj_retour, 112, 48);

  alignment16 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment16);
  gtk_container_add (GTK_CONTAINER (button_aj_retour), alignment16);

  hbox13 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox13);
  gtk_container_add (GTK_CONTAINER (alignment16), hbox13);

  image13 = gtk_image_new_from_stock ("gtk-go-back", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image13);
  gtk_box_pack_start (GTK_BOX (hbox13), image13, FALSE, FALSE, 0);

  label43 = gtk_label_new_with_mnemonic (_("Fermer"));
  gtk_widget_show (label43);
  gtk_box_pack_start (GTK_BOX (hbox13), label43, FALSE, FALSE, 0);

  g_signal_connect ((gpointer) button_aj, "clicked",
                    G_CALLBACK (on_button_aj_clicked),
                    NULL);
  g_signal_connect ((gpointer) button_aj_retour, "clicked",
                    G_CALLBACK (on_button_aj_retour_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (aj, aj, "aj");
  GLADE_HOOKUP_OBJECT (aj, fixed4, "fixed4");
  GLADE_HOOKUP_OBJECT (aj, aj3, "aj3");
  GLADE_HOOKUP_OBJECT (aj, label13, "label13");
  GLADE_HOOKUP_OBJECT (aj, aj2, "aj2");
  GLADE_HOOKUP_OBJECT (aj, aj4, "aj4");
  GLADE_HOOKUP_OBJECT (aj, aj6, "aj6");
  GLADE_HOOKUP_OBJECT (aj, label31, "label31");
  GLADE_HOOKUP_OBJECT (aj, aeg, "aeg");
  GLADE_HOOKUP_OBJECT (aj, label14, "label14");
  GLADE_HOOKUP_OBJECT (aj, label16, "label16");
  GLADE_HOOKUP_OBJECT (aj, aj5, "aj5");
  GLADE_HOOKUP_OBJECT (aj, label32, "label32");
  GLADE_HOOKUP_OBJECT (aj, aj1, "aj1");
  GLADE_HOOKUP_OBJECT (aj, button_aj, "button_aj");
  GLADE_HOOKUP_OBJECT (aj, button_aj_retour, "button_aj_retour");
  GLADE_HOOKUP_OBJECT (aj, alignment16, "alignment16");
  GLADE_HOOKUP_OBJECT (aj, hbox13, "hbox13");
  GLADE_HOOKUP_OBJECT (aj, image13, "image13");
  GLADE_HOOKUP_OBJECT (aj, label43, "label43");

  return aj;
}

