#include <iostream>
#include <cmath>
#define _USE_MATH_DEFINES
using namespace std;
double f(double x){
    if (x < 0){
        return 7.0/3.0;
    }
    else if(x >= 0 and x < 2 * M_PI){
        return (x*x - 3);
    }
    else{
        return (1 + x*x*x) / 2 * x;
    }
}
int main(){
    double a, b, x[7], y[7], maxs,k = 0;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout <<"a) " << 12.5 + f(2) - f(4) * f(10) + f(a) - f(b) + f(a*b) << endl;
    cout << "enter 7 numbers\n";
    for (int i = 0; i < 7; i += 1){
        cin >> x[i];
        y[i] = f(x[i]);
        if (y[i] < 0){
            k += 1;
        }
    }
    maxs = y[0];
    for (int i = 1; i < 7; i += 1){
        if (y[i] > maxs){
            maxs = y[i];
        }
    }
    cout << "b) max element = " << maxs << " kol-vo otr chisel = " << k;
}