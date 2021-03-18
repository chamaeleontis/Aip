#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
/*������ 1F ������� 6
  y = 2x^2 + 10, ���� x > 5
  y = 0, ���� x = 0
  y = 2 * |x+6| - x^2 , ���� x < 5
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

    if (x > 5)
        y =2*x*x+10;
    if (x == 0)
        y = 0;
    if (x < 5 & x!=0)
        y = 2 * abs(x + 6) - x*x;
    std::cout << y << std::endl;

    fout << y;
    fout.close();

    return 0;

}