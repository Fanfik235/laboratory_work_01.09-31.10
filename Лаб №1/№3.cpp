#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "");
    double tC, tF, tK;
    cout << "Введите температуру в градусах Цельсия: ";
    cin >> tC;
    tF = 9.0/5.0 * tC + 32;
    tK = tC + 273;
    cout << "Температура в Фаренгейтах равна: ";
    cout <<tF<< endl;;
    cout << "Температура в Кельвинах равна: ";
    cout <<tK<< endl;
    return 0;
}