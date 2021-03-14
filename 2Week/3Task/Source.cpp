#include <iostream>
#include <fstream>
int main()
{
    std::ofstream fout;
    double x = 0.0;
    double y = 0.0;
    double result = 0.0;
    char oper = '+';

    std::cout << "Calculator Console Application" << std::endl;;
    std::cout << "Please enter the operation to perform. Format: a+b | a-b | a*b | a/b" << std::endl;;
    std::cin >> x >> oper >> y;
        
    switch (oper) {
        case '+':
            std::cout << "Result is: " << x + y << std::endl;
            fout << x + y;
            break;
        case '-':
            std::cout << "Result is: " << x - y << std::endl;
            fout << x - y;
            break;
        case '*':
            std::cout << "Result is: " << x * y << std::endl;
            fout << x * y;
            break;
        case '/':
            std::cout << "Result is: " << x / y << std::endl;
            fout << x / y;
            break;
        }  
    }

  
