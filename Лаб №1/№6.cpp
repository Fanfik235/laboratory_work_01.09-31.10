#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double R,h,V,S;
    setlocale(0,"");
    cout<<"Введите радиус цилиндра R = ";
    cin >> R;
    cout <<"Введите его высоту h = ";
    cin >> h;
    V = M_PI * R * R * h;
    S = 2.0 * M_PI * R * R + 2.0 * M_PI * R * h;
    cout << "Объем цилиндра равен " << V << ", a площадь поверхности " << S;
}