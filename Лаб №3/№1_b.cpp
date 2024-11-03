#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double y, x = 0;
    do{
        y = sin(x) * log(x + 1);
        cout << "x = " << x << " " << "y = " << y << endl;
        x += 0.5;
    }while(x <= 5);
}