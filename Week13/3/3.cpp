#include <ctime>
#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
using namespace std;

/*
Вычислить кол-во отрицательных/положительных элементов массива
*/

int main() {

    srand(time(0)); // инициализация генерации случайных чисел

    int mas[8];
    int pol = 0;
    int otr = 0;

    for (int i = 0; i < 8; i++) {
        mas[i] = rand() % 26 - 10;
        cout << mas[i] << " ";

        if (mas[i] >= 0) {   // произведение положительных
            pol++;
        }

        if (mas[i] <= 0) {   // произведение отрицательных
            otr++;
        }
    }
    cout << endl;
    cout << " polozhitelnih = " << pol << endl;
    cout << " otricatelnih = " << otr;

    return 0;
}
