#include <iostream>
#include <iomanip> // чтобы работал precision
#include <cmath>
using namespace std;
/*
Протабулировать функцию y=sqrt(5+4x)+13x+cos(12x+91) (шаг и диапазон задаёт пользователь):
 */
int main()
{
    float sh, x1, x, y;
    cout << "Vvedite shag: ";
    cin >> sh;
    cout << "Vvedite nachalo diapazona: ";
    cin >> x;
    cout << "Vvedite konec diapazona: ";
    cin >> x1;
    // заголовок таблицы
    cout << "\t x \t \t y" << endl;
    cout.precision(5);
    while (x <= x1) {
        y = sqrt(5 + 4*x) + 13 * x + cos(12 * x + 91);
        cout << "\t" << x << "\t\t" << y << endl;
        x += sh;
    }
    return 0;
}