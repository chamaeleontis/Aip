//obmen znachenii a i b
#include <fstream>
#include <iostream>
int main()
{
    std::ifstream fin;
    std::ofstream fout;
    fin.open("in.txt");
    fout.open("out.txt");
    int a, b;

    std::cout << "Enter number a: ";
    std::cin >> a;
    std::cout << "Enter number b: ";
    std::cin >> b;
    
    fin >> a;
    fin >> b;
    fin.close();

    a += b;
    b = a - b;
    a -= b;

    fout << a << ' ' << b;
    fout.close();

    std::cout << "a=" << a << " " << "b=" << b;
    std::getchar(); 
    std::getchar(); 
}
