#include <iostream>
#include <iomanip> // чтобы работал precision
using namespace std;
/*
Протабулировать функцию y=sqrt(-(1+3x)/2)+3x (шаг и диапазон задаёт пользователь):
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
        y = sqrt((1 + 3 * x) / -2) + 3 * x;
        cout << "\t" << x << "\t\t" << y << endl;
        x += sh;
    }
    return 0;
}
