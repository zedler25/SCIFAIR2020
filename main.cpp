#include "mainWindow.h"

using namespace Gtk;

mainWindow::mainWindow(BaseObjectType* cobject, const Glib::RefPtr<Gtk::Builder>& refGlade) :
    Gtk::Window(cobject), builder(refGlade){
        builder->get_widget("label1", label1);
}

int main(int argc, char** argv)
{
    Main kit(argc,argv);

    Glib::RefPtr<Gtk::Builder> builder = Gtk::Builder::create_from_file("mainWindow.glade");
    
    mainWindow *frm = 0;
    builder->get_widget_derived("mainWindow", frm);
    kit.run(*frm);
}