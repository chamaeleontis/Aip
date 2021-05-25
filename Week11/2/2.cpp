#include <ctime>
#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
using namespace std;
/*Создайте структуру для хранения комплексных чисел. Структура должна иметь 2
атрибута: вещественную часть и мнимую. Объявите два числа и получите их
значения от пользователя
Напишите функцию, которая будет сравнивать вещественную часть
комплексных чисел.
*/
float a, b, a1, b1;

struct Kompl {                      // теор.сведения: a - вещ.часть ; b -мнимая часть (домножается на i)
    float re;                      // z=a+i*b - алгебраическая форма записи
    float im;                                              
};                                  
                                    
Kompl chislo1;                      
Kompl chislo2;
void sravn();

int main() {

    cout << "Vvedite veshestvennuyu chast shisla ";
    cin >> chislo1.re;
    cout << "Vvedite mnimuyu chat chisla ";
    cin >> chislo1.im;
    cout << "z=" << chislo1.re << "+" << "i*" << chislo1.im << " - algebraicheskaya forma" << endl;
    
    cout << "Vvedite veshestvennuyu chast shisla ";
    cin >> chislo2.re;
    cout << "Vvedite mnimuyu chat chisla ";
    cin >> chislo2.im;
    cout << "z=" << chislo2.re << "+" << "i*" << chislo2.im << " - algebraicheskaya forma" << endl;
    sravn();

    return 0;
}
void sravn() {
    if (chislo1.re > chislo2.re)
        cout << "vech chact 1 chisla bolche";
    else
        cout << "vech chact 2 chisla bolche";

}