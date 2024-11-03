#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double x;
    cout << "Введите значение аргумента " << endl;
    cin >> x;
    if(x <= -2){
        cout << 0;
    }
    else if(-2 < x <= 10){
        cout << pow(x,2.0) + 4 * x + 5;
    }
    cout << (1.0 / (pow(x,2.0) + 4 * x - 5));
}