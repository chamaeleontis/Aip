#include <ctime>
#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
using namespace std;

/*
Найти среднее арифметическое положительных/отрицательных
*/

int main() {

    srand(time(0)); // инициализация генерации случайных чисел

    int mas[10];
    int pol = 0;
    int otr = 0;
    int a = 0;
    int b = 0;
    float sp;
    float so;

    for (int i = 0; i <10; i++) {
        mas[i] = rand() % 26 - 10;
        cout << mas[i] << " ";

        if (mas[i] >= 0) {   // произведение положительных
            pol = pol + mas[i];
            a++;

        }

        if (mas[i] <= 0) {   // произведение отрицательных
            otr = otr + mas[i];
            b++;
        }
    }
    sp = pol / a;
    so = otr / b;
    cout << endl;
    cout << " sred ar polozhitelnih = " << sp << endl;
    cout << " sred ar otricatelnih = " << so;

    return 0;
}