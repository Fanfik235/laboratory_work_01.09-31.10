#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "");
    double a,b,c,V,S;
    cout<<"Длины ребер прямоугольного параллелипипеда равны"<<endl<<"a = ";
    cin >> a;
    cout <<"b = ";
    cin >> b;
    cout <<"с = ";
    cin >> c;
    V = a*b*c;
    S = 2 * (a*b + b*c + a*c);
    cout << "Oбъем равен "<< V << endl;
    cout <<"Площадь равен " << S;


}
