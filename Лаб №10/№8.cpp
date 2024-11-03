#include <iostream>
#include <cmath>
using namespace std;
double f(double x){
    return 0.5 * x - 5;
}
double Root(double a, double b, double eps){
    double c;
    if (abs(b - a) <= eps){
        return a;
    }
    c = (a + b) / 2;
    if ((f(a) < 0 and f(c) > 0) or f(a) > 0 and f(c) < 0){
        b = c;
        return Root(a, b, eps);
    }
    else if((f(c) > 0 and f(b) < 0) or (f(c) < 0 and f(b) > 0)){
        a = c;
        return Root(a, b, eps);
    }
}
int main(){
    double a, b, eps;
    cout <<"a = "; cin >> a;
    cout <<"b = "; cin >> b;
    cout <<"eps = "; cin >> eps;
    cout << Root(a, b, eps);
}