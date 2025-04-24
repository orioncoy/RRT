#include <iostream>
#include <cstdlib>
#include <string>

#include "interface.hpp"
#include "renderer.cpp"

void settings() {
    settings_print();
}

void help() {
    help_print();
}

void interface() {
    string input{};
    
    interface_print();

    cout << "\n> ";
    cin >> input;

    if (input == "-r") {
        render();
    } else if (input == "-h") {
        help();
    } else if (input == "-s") {
        settings();
    }
}