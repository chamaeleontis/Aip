

#include <iostream>

int main()
{
    float R, r, s, t;
    float PI;
    PI = 3.14159265358979323846;
    std::cout << "Radius large semicircle (R)";
    std::cin >>R;
    std::cout << "Radius small semicircle (r)";
    std::cin >> r;
    std::cout << "Radius lateral semicircle (s)";
    std::cin >> s;
    std::cout << "Radius inscribed circle (t)";
    std::cin >> t;
    std::cout << "Perimeter="<<2* PI *R<< "  "  ;
    std::cout << "Area=" <<PI*t*t <<
    std::endl;
    return 0;
}

