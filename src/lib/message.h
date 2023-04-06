#pragma once

#include <string>

struct Circle {
    double center_x;
    double center_y;
    double radius;
};

Circle parse_circle(const std::string& str);

double compute_area(double radius);

double compute_perimeter(double radius);