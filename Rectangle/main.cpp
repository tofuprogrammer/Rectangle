#include <iostream>
#include "Header.hpp"

int main(int argc, const char * argv[]) {
    int rectangleWidth;
    int rectangleHeight;
    
    // Function calls
    InputRectangle(rectangleWidth, rectangleHeight);
    OutputRectangleDimensions(rectangleWidth, rectangleHeight);
}

void InputRectangle (int& rectangleWidth, int& rectangleHeight) {
    // Gets input from user
    std::cout << "Enter the width of the rectangle (integer only): \n";
    std::cin >> rectangleWidth;
    std::cout << "Enter the height of the rectangle (integer only): \n";
    std::cin >> rectangleHeight;
}

void OutputRectangleDimensions (const int rectangleWidth, const int rectangleHeight){
    // Extra calculations
    int rectangleArea = rectangleWidth * rectangleHeight;
    int rectanglePerimeter = (2 * rectangleWidth) + (2 * rectangleHeight);
    
    std::cout << "The area of the rectangle is " << rectangleArea << '\n';
    std::cout << "The perimeter of the rectangle is " << rectanglePerimeter << '\n';
}
