#include <iostream>
using namespace std;
double foo(double a, double b){
    return ((a + b) / 2);
}
double foo(double a, double b, double c){
    return ((a + b + c) / 3);
}
double foo(double a, double b, double c, double d){
    return ((a + b + c + d) / 4);
}
int main(){
    setlocale(0, "");
    double a,b,c,d;
    cout <<"Среднее арифметическое любых двух вещественных чисел\n";
    cout <<"a = "; cin >> a; cout << "b = "; cin >> b;
    cout <<"Результат равен " << foo(a,b) << endl;
    cout <<"====================================================\n";
    cout <<"Среднее арифметическое любых трех вещественных чисел\n";
    cout <<"с = "; cin >> c; 
    cout <<"Результат равен " << foo(a,b,c) << endl;
    cout <<"====================================================\n";
    cout <<"Среднее арифметическое любых трех вещественных чисел\n";
    cout <<"d = "; cin >> d; 
    cout <<"Результат равен " << foo(a,b,c, d) << endl;
}