
#include <iostream>
#include <vector>
#include <memory>

// Abstração
class Shape {
public:
    virtual ~Shape() = default;
    virtual void draw() const = 0;
};

class Circle : public Shape {
public:
    void draw() const override { std::cout << "Desenhando um Circulo.\n"; }
};

class Square : public Shape {
public:
    void draw() const override { std::cout << "Desenhando um Quadrado.\n"; }
};

// Esta função não precisa ser alterada se adicionarmos um "Triangulo"
void renderAll(const std::vector<std::unique_ptr<Shape>>& shapes) {
    for (const auto& shape : shapes) {
        shape->draw();
    }
}

int main() {
    std::vector<std::unique_ptr<Shape>> shapes;
    shapes.push_back(std::make_unique<Circle>());
    shapes.push_back(std::make_unique<Square>());

    renderAll(shapes);
    return 0;
}
