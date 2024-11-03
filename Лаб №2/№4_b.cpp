#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "");
    int dM, dW;
    cout << "Введите\n";
    cout << "День месяца: ";
    cin >> dM;
    cout << "Номер дня в неделе: ";
    cin >> dW;
    if((dM == 13 and dW == 2) or (dM == 13 and dW == 5)){
        cout << "В этот день нужно быть осторожнее :) ";
    }
    else if((dM == 17 and dW == 5)){
        cout << "Этот день принят неудачным(";
    }
}