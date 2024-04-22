#include <iostream>

auto main() -> int
{
    int x;
    std::cout << "Type a number: ";  
    std::cin >> x;                   
    std::cout << "Your number is: " << x << "\n" ;

    int* arr = new int[x];

    for (int i = 0; i < x; i++)
    {
        arr[i] = i + 1;
        std::cout << arr[i] << "\n";
    }
    
    
}