/*
 ============================================================================
 Name        : gtkmm_gsl_test.cpp
 Author      : Hamed
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C++,
 ============================================================================
 */

#include <gtkmm.h>
#include <string>
#include <stdio.h>
#include <gsl/gsl_sf_bessel.h>

int main(int argc, char *argv[]) {
	Glib::RefPtr<Gtk::Application> app = Gtk::Application::create(argc, argv,
			"org.gtkmm.examples.base");

	double x = 5.0;
	double y = gsl_sf_bessel_J0(x);
	printf("J0(%g) = %.18e\n", x, y);
	char res[100];
	sprintf(res,"J0(%g) = %.18e\n", x, y);

	std::string result(res);

	Gtk::Window window;
	Gtk::Label label(result);
	window.add(label);
	window.set_default_size(200, 200);
	window.set_border_width(25);
	window.show_all_children(true);

	return app->run(window);
}
