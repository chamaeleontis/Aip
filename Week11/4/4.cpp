#include <ctime>
#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
using namespace std;
/*Имеется информация о датчиках: диапазон измеряемых значений (min, max),
погрешность, максимальная скорость. Вывести данные о самом точном датчике.
*/
struct Datchik {
    int min;
    int max;
    int pogresh;
    int speed;
};
Datchik odin;
Datchik dva;

void dannblDatchikasbolDiap();

int main()
{
    cout << "vvedite min i max datchiks 1" << endl;
    cin >> odin.min >> odin.max;
    cout << "vvedite pogr datchiks 1" << endl;
    cin >> odin.pogresh;
    cout << "vvedite speed datchiks 1" << endl;
    cin >> odin.speed;

    cout << "vvedite min i max datchiks 2" << endl;
    cin >> dva.min >> dva.max;
    cout << "vvedite pogr datchiks 2" << endl;
    cin >> dva.pogresh;
    cout << "vvedite speed datchiks 2" << endl;
    cin >> dva.speed;

    dannblDatchikasbolDiap();




}
void dannblDatchikasbolDiap() {
    if (dva.pogresh > odin.pogresh) {
        cout << "DannbLe o datchike s bol diapozonom" << endl;
        cout << "Min Max " << dva.min << " " << dva.max << endl;
        cout << "pogresh " << dva.pogresh << endl;
        cout << "speed " << dva.speed << endl;
    }
    else {
        cout << "DannbLe o datchike s bol diapozonom" << endl;
        cout << "Min Max " << odin.min << " " << odin.max << endl;
        cout << "pogresh " << odin.pogresh << endl;
        cout << "speed " << odin.speed << endl;
    }
}

