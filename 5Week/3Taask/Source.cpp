#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
/*
2e
*/

int main() {

    std::ifstream fin;
    fin.open("in.txt");
    

    float r = 1; // радиус окружности
    float x;
    float y;
    
    std::cout << "Vvedite x y in.txt" << std::endl;

    fin >> x;
    fin >> y;
    fin.close();
    float l = sqrt(x * x + y * y);

    bool area1 = (x < 0) && (y = -x);
    if ((l < r) && (x > 0 || area1))
        std::cout << "yes";
    else
        std::cout << "no";

}