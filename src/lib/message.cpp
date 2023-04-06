#include "message.h"
#include <regex>
#include <stdexcept>

Circle parse_circle(const std::string& str) {
    const std::regex pattern(R"(circle\((-?\d+(\.\d+)?)[\s,]+(-?\d+(\.\d+)?),\s*(\d+(\.\d+)?)\))", std::regex::icase);
    std::smatch matches;
    if (std::regex_search(str, matches, pattern)) {
        Circle result;
        try {
            result.center_x = std::stod(matches[1]);
            result.center_y = std::stod(matches[3]);
            result.radius = std::stod(matches[5]);
            return result;
        }
        catch (const std::exception& e) {
            throw std::invalid_argument("Invalid syntax");
        }
    }
    else {
        throw std::invalid_argument("Invalid syntax");
    }
}

double compute_area(double radius) {
    return 3.14159 * radius * radius;
}

double compute_perimeter(double radius) {
    return 2 * 3.14159 * radius;
}


