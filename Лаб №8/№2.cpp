#include <iostream>
#include <cmath>
using namespace std;
double f(double a, double b, double c, double *x1, double *x2){
    if (((b * b) - (4 * a * c)) < 0){
        return 0;
    }
    else if ((b * b - 4 * a * c) == 0){
        *x1 = - b / (2 * a);
        *x2 = - b / (2 * a);
    }
    else{
        *x1 = (- b + sqrt(b * b - 4 * a * c)) / (2 * a);
        *x2 = (- b - sqrt(b * b - 4 * a * c)) / (2 * a);
    }
    
}
int main(){
    double a, b, c, x1, x2;
    cout << "a = "; cin >> a;
    cout <<"b = "; cin >> b;
    cout <<"c = "; cin >> c;
    if (f(a,b,c,&x1,&x2) == 0){
        cout <<"D < 0, error";
    }
    else if (x1 == x2){
        cout <<"one solution x = " << x1;
    }
    else{
        cout <<"x1 = " << x1 << ", " << "x2 = " << x2;
    }

}