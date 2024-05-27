#include <iostream>
template <typename T>

auto near(T one, T two, double eps) -> bool
{
    return abs((one - two) < eps);
}

auto main() -> int 
{
    std::cout << std::boolalpha << near(2.5,1.4,2) << std::endl;
}