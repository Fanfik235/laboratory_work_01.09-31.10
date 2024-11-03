#include <iostream>
#include <cmath>
#define _USE_MATH_DEFINES
using namespace std;
int main(){
    double x = - 1.5, y;
    while(x<= 1.5){
        if(x > 1){
            double i = x * 180 / M_PI;
            y = 1 + sqrt(abs(cos(i)));
        }
        else if(x >= - 0.5 and x <= 1){
            y = x + 1;
        }
        else{
            y = 1 - x * x;
        }
        cout << "x = " << x << " " << " y = " << y << endl;
        x += 0.25;
    }

}