
/* Abstract Factory Pattern – C++ Example
   This example demonstrates the Abstract Factory design pattern by creating
   families of related objects without specifying their concrete classes.
*/

#include <iostream>
#include <memory>

// Abstract Product: Button
class Button {
public:
    virtual ~Button() = default;
    virtual void render() const = 0;
};

// Abstract Product: Checkbox
class Checkbox {
public:
    virtual ~Checkbox() = default;
    virtual void render() const = 0;
};
