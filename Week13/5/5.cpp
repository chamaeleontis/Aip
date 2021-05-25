#include <ctime>
#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
using namespace std;

/*
Вывести элементы массива, меньших среднего арифметического
*/

int main() {

    srand(time(0)); 

    int mas[10];
    int sum = 0;
    float srar;


    for (int i = 0; i < 10; i++) {
        mas[i] = rand() % 26 - 10;
        std::cout << mas[i] << " ";
        sum = sum + mas[i];
    }
    srar = sum / 10.0;
    std::cout<< endl;
    std::cout<< " sred ar  = " << srar << endl;
 

    return 0;
}