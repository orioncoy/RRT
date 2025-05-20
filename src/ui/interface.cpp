#include <iostream>
#include <cstdlib>
#include <string>

#include "interface.hpp"
#include "renderer.cpp"
#include "input.cpp"

void settings() {
    system("clear");
    print_settings();
}

void help() {
    string input{};
    system("clear");
    print_help();
    cout << "\n> ";
    cin >> input;
    if (input == "-b") {}
    else if (input == "-q") {
        abort();
    }
}

void interface() {
    system("clear");
    string input{};

    print_interface();

    cout << "\n> ";
    cin >> input;

    if (input == "-r") {
        render();
        input = {};
    } else if (input == "-h") {
        help();
        input = {};
    } else if (input == "-s") {
        settings();
        input = {};
    } else if (input == "-q") {
        abort();
    }
}