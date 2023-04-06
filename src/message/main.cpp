#include <iostream>
#include <string>
#include "../lib/message.h"

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    try {
        auto result = parse_circle(input);
        std::cout << "Circle center: (" << result.center_x << ", " << result.center_y << ")" << std::endl;
        std::cout << "Circle radius: " << result.radius << std::endl;
        std::cout << "Circle area: " << compute_area(result.radius) << std::endl;
        std::cout << "Circle perimeter: " << compute_perimeter(result.radius) << std::endl;
    }
    catch (const std::invalid_argument& e) {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}