#ifndef _COLOR_HPP
#define _COLOR_HPP

#include "Vector3f.hpp"

class Color {
public:
    Color(int r, int g, int b, int a = 255) : r(r), g(g), b(b), a(a) {};
    Color(): r(0), g(0), b(0), a(255) {};
    float gl_r() {
        return (1 / 255.0) * r;
    }
    float gl_g() {
        return (1 / 255.0) * g;
    }
    float gl_b() {
        return (1 / 255.0) * b;
    }
    float gl_a() {
        return (1 / 255.0) * a;
    }
int r, g, b, a;
};

#endif

