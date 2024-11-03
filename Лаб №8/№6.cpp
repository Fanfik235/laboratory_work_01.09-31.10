#include <iostream>
#include <cmath>
using namespace std;
double Radians(double d){
    return d * (M_PI / 180.0);
}
void S(double a, double h){
    cout << 0.5 * (a * h) << endl;
}
void S(double a, double b, int corn){
    cout << 0.5 * a * b * sin(Radians(corn)) << endl;
}
void S(double a, double b, double c){
    double p = (a + b + c) / 2;
    cout << sqrt(p * (p - a) * (p - b) * (p - c));
}
int main(){
    double a, b, c, h; int  corn;
    setlocale(0, "");
    cout <<"Нахождение площади по стороне и опущенной на нее высоте\n";
    cout <<"a = "; cin >> a;
    cout <<"h = "; cin >> h;
    cout <<"S = "; S(a,h);
    cout <<"===========================================================" << endl;
    cout <<"Нахождение площади по двум сторонам и углу между ними\n";
    cout <<"a = "; cin >> a;
    cout <<"b = "; cin >> b;
    cout <<"corn = "; cin >> corn;
    cout <<"S = "; S(a,b,corn);
    cout <<"===========================================================" << endl;
    cout <<"Нахождение площади по трем сторонам\n";
    cout <<"a = "; cin >> a;
    cout <<"b = "; cin >> b;
    cout <<"c = "; cin >> c;
    cout <<"S = "; S(a,b,c);
}