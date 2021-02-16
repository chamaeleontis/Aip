
#include <iostream>
int main()
{
    
    int a, b;

    std::cout << "Enter number a: ";
    std::cin >> a;
    std::cout << "Enter number b: ";
    std::cin >> b;

    a += b;
    b = a - b;
    a -= b;
    std::cout << "a=" << a << " " << "b=" << b;
    std::getchar(); 
    std::getchar(); 
}
