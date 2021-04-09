#include <iostream>
#include <cmath>
using namespace std;

/*
Вывести на экран ряд натуральных чисел от Н до М с шагом Ш. Например, если
Н=10, М=35, Ш=5, то вывод должен быть таким: 10 15 20 25 30 35. Значения Н, М,
Ш указываются пользователем (считываются с клавиатуры или из файла). 
 */

int main()
{
    float x, y, sh;
    cout << "Vvedite shag: " << endl;
    cin >> sh;
    cout << "Vvedite nachalo: " << endl;
    cin >> x;
    cout << "Vvedite konec: " << endl;
    cin >> y;
    
    for (float i = x; i <= y; i = i + sh) {
        cout << i << endl;
    }

    return 0;
}