#include <iostream>
#include <memory>

auto main() -> int
{
    int x;
    std::cout << "Type a number: ";  
    std::cin >> x;                   
    std::cout << "Your number is: " << x << "\n" ;

    auto uniq_ptr = std::make_unique<int[]>(x);
    
    for (int i = 0; i < x; i++)
    {
        uniq_ptr.get()[i] = i + 1;
        std::cout << uniq_ptr.get()[i] << "\n";
    }
    
    return 0;
}