#ifndef INTERFACE_H
#define INTERFACE_H

#include <iostream>
#include <cstdlib>
#include <string>

void print_help() {
    std::cout << "+----------------------+"
              << "\n| Current commands:    |"
              << "\n|                      |"
              << "\n| -r  Render           |"
              << "\n| -h  Help             |"
              << "\n| -s  Settings         |"
              << "\n| -q  Quit             |"
              << "\n| -b Back              |"
              << "\n|                      |"
              << "\n+----------------------+";
}

void print_settings() {
    std::cout << "\n+----------------------------------------------------+"
              << "\n| Welcome to Rudimentary Ray Tracing!                |"
              << "\n|                                                    |"
              << "\n| As the name suggests, this application is simple,  |"
              << "\n| letting you render basic shapes using a bare bones |"
              << "\n| rendering technique. Enjoy!                        |"
              << "\n+----------------------------------------------------+"
              << "\n| -r to render, -s for settings, -q to quit          |"
              << "\n+----------------------------------------------------+";
}

void print_settings_dir() {
    std::cout << "\n+----------------------------------------------------+"
              << "\n| Welcome to Rudimentary Ray Tracing!                |"
              << "\n|                                                    |"
              << "\n| As the name suggests, this application is simple,  |"
              << "\n| letting you render basic shapes using a bare bones |"
              << "\n| rendering technique. Enjoy!                        |"
              << "\n+----------------------------------------------------+"
              << "\n| -r to render, -s for settings, -q to quit          |"
              << "\n+----------------------------------------------------+";
}

void print_settings_res() {
    std::cout << "\n+----------------------------------------------------+"
              << "\n| Welcome to Rudimentary Ray Tracing!                |"
              << "\n|                                                    |"
              << "\n| As the name suggests, this application is simple,  |"
              << "\n| letting you render basic shapes using a bare bones |"
              << "\n| rendering technique. Enjoy!                        |"
              << "\n+----------------------------------------------------+"
              << "\n| -r to render, -s for settings, -q to quit          |"
              << "\n+----------------------------------------------------+";
}

void print_interface() {
    std::cout << "+----------------------------------------------------+"
              << "\n| Welcome to Rudimentary Ray Tracing!                |"
              << "\n|                                                    |"
              << "\n| As the name suggests, this application is simple,  |"
              << "\n| letting you render basic shapes using a bare bones |"
              << "\n| rendering technique. Enjoy!                        |"
              << "\n+----------------------------------------------------+"
              << "\n| -r to render, -s for settings, -q to quit          |"
              << "\n+----------------------------------------------------+";
}

void print_interface_complete() {
    std::cout << "\n+----------------------------------------------------+"
              << "\n| Welcome to Rudimentary Ray Tracing!                |"
              << "\n|                                                    |"
              << "\n| As the name suggests, this application is simple,  |"
              << "\n| letting you render basic shapes using a bare bones |"
              << "\n| rendering technique. Enjoy!                        |"
              << "\n+----------------------------------------------------+"
              << "\n| -r to render, -s for settings, -q to quit          |"
              << "\n+----------------------------------------------------+";
}

#endif