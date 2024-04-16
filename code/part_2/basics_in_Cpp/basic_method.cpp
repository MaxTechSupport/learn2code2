#include <iostream>
#include <cstdint>

using MyStruct = struct {
    int16_t a = 0;
    float b = 0.0F;
    void print_struct() const {
        std::cout << "a: " << a << ", b: " << b << std::endl;
    }
};

auto main() -> int {
    MyStruct s;
    s.print_struct();
    return 0;
}

