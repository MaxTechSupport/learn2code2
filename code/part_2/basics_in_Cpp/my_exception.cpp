#include <iostream>
#include <exception>

// Define the struct MyException derived from std::exception
struct MyException : public std::exception {
    // Override the what() method to return a custom exception message
    const char* what() const noexcept override {
        return "My custom exception message";
    }
};

int main() {
    try {
        // Throw an instance of MyException
        throw MyException();
    } catch (const MyException& e) {
        // Catch the MyException and print its message
        std::cerr << "Caught MyException: " << e.what() << std::endl;
    } catch (const std::exception& e) {
        // Catch any other standard exceptions
        std::cerr << "Caught std::exception: " << e.what() << std::endl;
    } catch (...) {
        // Catch any other non-standard exceptions
        std::cerr << "Caught an unknown exception" << std::endl;
    }
    return 0;
}
