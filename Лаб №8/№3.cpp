#include <iostream>
using namespace std;
double f(double x){
    if (x == 0 or x == 1){
        return false;
    }
    else{
        if (x <= 2 ){
            return ((2 * x) + 1 / (1 - x)) / 3 * x;
        }
        else if(x > 2 and x <= 5){
            return 72 / 7;
        }
        else{
            return (-3 - x);
        }
        

    }
}
int main(){
    double a, b, res1, res2;
    cout <<"a = "; cin >> a;
    cout <<"b = "; cin >> b;
    if (f(a) == false or f(2) == false or f(0) == false){
        cout <<"a) Error\n";
    }
    else{
        cout <<"a) f(2) - f(0) * f(" << a <<") = " << f(2) - f(0) * f(a) << endl;
    }
    if (f(2 * a) == false or f(6) == false or f(a * b) == false){
        cout <<"b) Error";
    }
    else{
        cout <<"b) f(2 * a) - f(6) + f(" << a * b <<") = " << f(2*a) - f(6) + f(a*b);
    }
}