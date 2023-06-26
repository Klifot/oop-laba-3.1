#include <iostream>
#include <string>

class Rectangle {
private:
    double height;
    double width;
    std::string color;

public:
    Rectangle() : height(0.0), width(0.0), color("") {}
    Rectangle(double h, double w, const std::string& c) : height(h), width(w), color(c) {}

    double getArea() const {
        return height * width;
    }

    double getPerimeter() const {
        return 2 * (height + width);
    }

    void setHeight(double h) {
        if (h > 0.0) {
            height = h;
        }
        else {
            std::cout << "Height must be a positive value." << std::endl;
        }
    }

    void setWidth(double w) {
        if (w > 0.0) {
            width = w;
        }
        else {
            std::cout << "Width must be a positive value." << std::endl;
        }
    }

    void setColor(const std::string& c) {
        color = c;
    }

    double getHeight() const {
        return height;
    }

    double getWidth() const {
        return width;
    }

    std::string getColor() const {
        return color;
    }

    void print() const {
        std::cout << "Rectangle Information:" << std::endl;
        std::cout << "Height: " << height << std::endl;
        std::cout << "Width: " << width << std::endl;
        std::cout << "Color: " << color << std::endl;
        std::cout << "Area: " << getArea() << std::endl;
        std::cout << "Perimeter: " << getPerimeter() << std::endl;
        std::cout << std::endl;
    }
};

int main() {
    Rectangle rectangle1(5.0, 3.0, "Blue");
    rectangle1.print();

    Rectangle rectangle2;
    rectangle2.setHeight(4.0);
    rectangle2.setWidth(6.0);
    rectangle2.setColor("Red");
    rectangle2.print();

    return 0;
}