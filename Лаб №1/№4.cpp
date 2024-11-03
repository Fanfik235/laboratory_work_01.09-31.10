#include <iostream>
using namespace std;
const double PI = 3.14159;
int main()
{
    setlocale(0, "");
    double R,V;
    cout <<"Введите радиус шара"<<endl;
    cin >> R;
    cout <<"Объем шара равен ";
    V = 4.0/3.0 * PI * R*R*R;
    cout << V;
}