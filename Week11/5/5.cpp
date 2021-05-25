#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
using namespace std;

/* Робот-самолёт описывается как структура с полями: скорость вращения винта,
радиус винта, коэффициент тяги. Напишите функцию для расчёта тяги,
создаваемую винтом (произведение всех характеристик)..
*/

struct Robot {
    float speed;
    float rad;
    float kt;
};

Robot plane;
void tyaga();


int main() {

    tyaga();
    return 0;
}

void tyaga() {
    cout << "vvedite skorost vrashenia vinta plane: ";
    cin >> plane.speed;

    cout << "vvedite radius vinta plane: ";
    cin >> plane.rad;

    cout << "vvedite koefficient tyagi plane: ";
    cin >> plane.kt;

    cout << "Tyaga = " << plane.speed * plane.rad * plane.kt;
}
