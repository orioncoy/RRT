#ifndef INTERFACE_H
#define INTERFACE_H

#include <iostream>
#include <cstdlib>
#include <string>

void help_print() {
    std::cout << "\n+----------------------+"
              << "\n| Current commands:    |"
              << "\n|                      |"
              << "\n| -r  Render           |"
              << "\n| -h  Help             |"
              << "\n| -s  Settings         |"
              << "\n| -q  Quit             |"
              << "\n|                      |"
              << "\n+----------------------+";
}

void settings_print() {
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

void settings_dir_print() {
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

void settings_res_print() {
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

void interface_print() {
    std::cout << "\n+------------------------------------------------------+"
              << "\n| Welcome to Rudimentary Ray Tracing!                  |"
              << "\n|                                                      |"
              << "\n| As the name suggests, this application is simple,    |"
              << "\n| letting you render basic shapes using a bare bones   |"
              << "\n| rendering technique. Enjoy!                          |"
              << "\n+------------------------------------------------------+"
              << "\n| Press any key to render at the directory of this app |"
              << "\n+------------------------------------------------------+";
}

#endif