#include <iostream>
#include <cmath>
#define _USE_MATH_DEFINES
using namespace std;
int main(){
    double  y, c, x;
    double step = M_PI/6.0;
    double stop = 2 * M_PI;
    cout << "x - радиан | cos(x)" << endl;
    for (double x = 0; x <= 2 * M_PI; x += M_PI / 6.0){
        y = cos(x);
        cout << x << " | " << y << endl; 
    }
}