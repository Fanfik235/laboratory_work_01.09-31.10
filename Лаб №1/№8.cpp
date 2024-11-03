#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    setlocale(0, "");
    cout <<"Введите число" << endl;
    cin >> c;
    a = (c / 1000) % 10;
    b = c % 10;
    cout << a << endl;
    cout << b << endl;

}