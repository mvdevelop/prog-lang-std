
/* Factory Method Pattern – C++ Example
- The Factory Method pattern defines an interface for creating an object, but lets subclasses alter the type of objects that will be created. */

#include <iostream>
#include <memory>
#include <string>

// Product interface
class Shape {
public:
    virtual ~Shape() = default;
    virtual void draw() const = 0;
};

// Concrete Product: Circle
class Circle : public Shape {
public:
    void draw() const override {
        std::cout << "Drawing a Circle\n";
    }
};

// Concrete Product: Rectangle
class Rectangle : public Shape {
public:
    void draw() const override {
        std::cout << "Drawing a Rectangle\n";
    }
};

// Factory
class ShapeFactory {
public:
    static std::unique_ptr<Shape> createShape(const std::string& type) {
        if (type == "circle") {
            return std::make_unique<Circle>();
        }
        if (type == "rectangle") {
            return std::make_unique<Rectangle>();
        }
        return nullptr;
    }
};

int main() {
    auto shape1 = ShapeFactory::createShape("circle");
    auto shape2 = ShapeFactory::createShape("rectangle");

    if (shape1) shape1->draw();
    if (shape2) shape2->draw();

    return 0;
}
