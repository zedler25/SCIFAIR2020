#include <gtkmm.h>

class mainWindow : public Gtk::Window{
    Glib::RefPtr<Gtk::Builder> builder;
    
    Gtk::Label *label1;

public:
    mainWindow(BaseObjectType* cobject, const Glib::RefPtr<Gtk::Builder>& refGlade);
};