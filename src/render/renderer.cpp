// for testing purposes as of now.

#include <cstdlib>

#include "color.hpp"
#include "vec3.hpp"

using namespace std;

void render() {
    int iw{256};
    int ih{256};

    cout << "P3\n" << iw << ' ' << ih << "\n255\n";

    // Renderer
    for (int j = 0; j < ih; j++) {
        clog << "\rScanlines remaining: " << (ih - j) << ' ' << flush;
        for (int i = 0; i < iw; i++) {
            auto pixel_color = color(double(i) / (iw - 1), double(j) / (ih-1), 0);
            write_color(cout, pixel_color);
        }
    }

    system("clear");
}