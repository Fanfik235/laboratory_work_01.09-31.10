#include <iostream>
using namespace std;
int main()
{
    double a, b;
    char c;
    cout <<"Введите вещественные числа\n" <<"a = ";
    cin >> a;
    cout <<"b = ";
    cin >> b;
    cout <<"Введите действие для этих чисел\n";
    cin >> c;
    cout <<"Результат равен ";
    switch(c){
        case '+': cout << a + b;
        case '-': cout << a - b;
        case '*': cout << a * b;
    }

}
