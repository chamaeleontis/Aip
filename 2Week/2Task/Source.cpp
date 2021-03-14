//Сделать конвертер величин. Формат ввода: Направление_Перевода Величина. Давление(паскаль бар фунт)
#include <iostream>
#include <string>
#include <cmath>
#include <fstream>

int main() {
    std::ifstream fin;
    std::ofstream fout;
    int a, b;
    double x, D;
    std::string name[3] = { "Pa", "bar", "funt" };
    std::cout << "select translations direction:\n";
    for (int i = 0; i < 3; i++)
        std::cout << i + 1 << '.' << name[i] << '\t'<< std::endl;
    std::cin >> a >> b;
    std::cout << "enter value: ";
    std::cin >> x;
    
    fin.open("in.txt");
    fin >> a;
    fin >> b;
    fin.close();
   
    if (a == 1 && b == 2)
        D = x * 0.00001;
    if (a == 1 && b == 3)
        D = x * 0.00014503773773;
    if (a == 2 && b == 1)
        D = x * 100000;
    if (a == 2 && b == 3)
        D = x * 14.503773773;
    if (a == 3 && b == 1)
        D = x * 6894.757293178;
    if (a == 3 && b == 2)
        D = x * 0.06894757293178;
    std::cout << D; 
    
    fout.open("out.txt");
    fout << D << ' ' << x;
    fout.close();


}