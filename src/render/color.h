#ifndef COLOR_H
#define COLOR_H

#include "vec3.hpp"

#include <iostream>
#include <fstream>
#include <string>

using color = vec3;

std::string fileName = "image.ppm";

void write_color(std::ostream& out, const color& pixel_color) {
    auto r = pixel_color.x();
    auto g = pixel_color.y();
    auto b = pixel_color.z();

    // Translate the [0,1] component values to the byte range [0,255].
    int rbyte = int(255.999 * r);
    int gbyte = int(255.999 * g);
    int bbyte = int(255.999 * b);

    std::ofstream image(fileName);

    // Write out the pixel color components to the image file.
    image << rbyte << ' ' << gbyte << ' ' << bbyte << '\n';
}

#endif