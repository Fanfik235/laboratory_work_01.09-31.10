#include <iostream>
using namespace std;
int main()
{
    setlocale(0,"");
    int a;
    cout << "Введите целое число ";
    cin >> a;
    if(a > 0){
        cout << "Число положительное";
    }
    else if(a == 0){
        cout << "Число равна нулю";
    }
    else {
        cout << "Число отрицательное";
    }
}