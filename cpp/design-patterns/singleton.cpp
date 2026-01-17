
/* Singleton Pattern – C++ Example
- The Singleton pattern ensures that a class has only one instance and provides a global access point to that instance. */

#include <iostream>
#include <string>

class Logger {
private:
    // Private constructor prevents direct instantiation
    Logger() {
        std::cout << "Logger created\n";
    }

    // Disable copy constructor
    Logger(const Logger&) = delete;
    // Disable assignment operator
    Logger& operator=(const Logger&) = delete;

public:
    // Global access point to the single instance
    static Logger& getInstance() {
        static Logger instance; // Created only once
        return instance;
    }

    void log(const std::string& message) {
        std::cout << "[LOG] " << message << std::endl;
    }
};

int main() {
    Logger& logger1 = Logger::getInstance();
    logger1.log("Application started");

    Logger& logger2 = Logger::getInstance();
    logger2.log("Another log message");

    // Both references point to the same instance
    if (&logger1 == &logger2) {
        std::cout << "Both loggers are the same instance\n";
    }

    return 0;
}
