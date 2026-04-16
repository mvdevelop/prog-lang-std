
#include <iostream>
#include <vector>

class Polygon {
public:
    virtual ~Polygon() = default;
    virtual double area() const = 0;
};

class Rectangle : public Polygon {
public:
    Rectangle(double width, double height) : m_width(width), m_height(height) {}
    double area() const override { return m_width * m_height; }
private:
    double m_width, m_height;
};

class Square : public Polygon {
public:
    Square(double side) : m_side(side) {}
    double area() const override { return m_side * m_side; }
private:
    double m_side;
};

void printArea(const Polygon& p) {
    std::cout << "Area: " << p.area() << std::endl;
}

int main() {
    Rectangle rect(10, 5);
    Square sq(5);

    printArea(rect); // Substituição segura
    printArea(sq);   // Substituição segura
    
    return 0;
}
