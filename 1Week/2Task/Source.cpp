//salinon 
#include <iostream>
#include <fstream>
#define M_PI 3.14159265358979323846
int main()
{
    std::ifstream fin;
    fin.open("in.txt");

    float R, r, s, t;
    std::cout << "Radius large semicircle (R)";
    std::cin >> R;
    std::cout << "Radius small semicircle (r)";
    std::cin >> r;
    std::cout << "Radius lateral semicircle (s)";
    std::cin >> s;
    std::cout << "Radius inscribed circle (t)";
    std::cin >> t;


    fin >> R;
    fin >> r;
    fin >> s;
    fin >> t;
    fin.close();

    std::ofstream fout;
    fout.open("out.txt");

    if (R = t + s, s = t - r) {
        std::cout << "Perimeter=" << 2 * M_PI * R << "  ";
        std::cout << "Area=" << M_PI * t * t << std::endl;
        fout << 2 * M_PI * R << ' ' << M_PI * t * t;
    }
    else {
        std::cout << "The values are not correct";
        fout << "The values are not correct";
    }

    fout.close();

    return 0;
}