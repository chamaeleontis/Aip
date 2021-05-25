#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
/*
Вариант 6, задача 3 (из пятой недели)
Сделайте рефакторинг задач на проверку нахождения точки в закрашенной области
из предыдущего домашнего задания. В результате, вместо двух переменных,
описывающих координаты точки, должна быть одна переменная-структура с
атрибутами – координатами.
*/

struct Point {
    float x, y;
};

Point p;

void uslovie();

int main() {

    std::ifstream fin;
    std::ofstream fout;
    fin.open("in.txt");
    fout.open("out.txt");

    std::cout << "Vvedite x y:" << std::endl;
    std::cin >> p.x >> p.y;

    fin >> p.x;
    fin >> p.y;
    fin.close();

    uslovie();

    fout.close();

    return 0;
}

void uslovie() {
    if ((sqrt(p.x * p.x + p.y * p.y) < 1) && (p.x > 0 || (p.x < 0) && (p.y = -p.x)))
        std::cout << "Tochka popadaet" << std::endl;
    else
        std::cout << "Tochka ne popadaet" << std::endl;
}