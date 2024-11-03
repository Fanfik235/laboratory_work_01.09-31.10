#include <iostream>
using namespace std;
double sum(double a, double b){
    return a + b;
}
double razn(double a, double b){
    return a - b;
}
double proizv(double a, double b){
    return a * b;
}
int main(){
    setlocale(0, "");
    double a, b, res;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "Сумма чисел: " << sum(a,b) << endl;
    cout <<"Разность чисел: " << razn(a,b) << endl;
    cout <<"Произведение чисел: " << proizv(a,b) << endl;
    res = sum(proizv(sum(razn(a,2),b), 5), proizv(1000,a));
    cout <<"5 * (" << a << " - 2 + " << b << ") + 1000 * " << a <<" = " << res << endl;
}