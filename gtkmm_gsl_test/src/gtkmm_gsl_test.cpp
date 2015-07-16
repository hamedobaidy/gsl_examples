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

	int n = 10;
	double x = 5.0;
	double y = gsl_sf_bessel_J0(x);
	printf("J0(%g) = %.18e\n", x, y);
	double y1 = gsl_sf_bessel_J1(x);
	printf("J1(%g) = %.18e\n", x, y1);
	double yn = gsl_sf_bessel_Jn(n, x);
	printf("Jn(%g) = %.18e\n", x, yn);

	std::ostringstream strs;
	strs << "J0(" << x << ") = " << y << std::endl;
	strs << "J1(" << x << ") = " << y1 << std::endl;
	strs << "Jn(" << x << ") = " << yn << std::endl;
	std::string result = strs.str();

	Gtk::Window window;
	Gtk::Label label(result);
	window.add(label);
	window.set_default_size(200, 200);
	window.set_border_width(25);
	window.show_all_children(true);

	return app->run(window);
}
