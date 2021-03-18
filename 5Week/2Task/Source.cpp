#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
/* 1I
y = 2x^2- 3, if x > 7
y = 0, if x = 7
y = 2 * |x| + 3, if x < 7
*/
int main() {
    std::ifstream fin;
    std::ofstream fout;
    fin.open("in.txt");
    fout.open("out.txt");

    float x;
    float y;
    std::cout << "Vvedite x v file in.txt" << std::endl;
    fin >> x;

    fin.close();

    if (x > 7)
        y = 2 * x * x -3;
    if (x == 7)
        y = 0;
    if (x < 7)
        y = 2 * abs(x) +3;
    std::cout << y << std::endl;

    fout << y;
    fout.close();

    return 0;

}