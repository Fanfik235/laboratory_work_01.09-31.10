#include <iostream>
using namespace std;
#include <cmath>
void Lot(int a){
    if (a == 555666){
        cout <<"WIN WIN WIN!!!\n";
    }
    else{
        cout <<"LOSE(\n";
    }
}
void Lot(int a, int b){
    if (a == 555 and b == 666){
        cout <<"WIN WIN WIN!!!\n";
    }
    else{
        cout <<"LOSE(\n";
    }
}
int main(){
    //пусть 555666 - счастливое 6 - значное число
    setlocale(0, "");
    int a, b;
    cout <<"Введите 6 - значное число\n";
    cin >> a;
    Lot(a);
    cout <<"Введите 6 - значное число по разрядам, начиная с сотен тысяч в строчку\n";
    int i = 0, s = 0;
    while(i < 6){
        cin >> a;
        s += a * (100000 / pow(10,i));
        i += 1;
    }
    Lot(s);
    cout <<"Введите 6 - значное число. Сначала первые 3 числа, затем оставшиеся 3 числа\n";
    cin >> a; cin >> b;
    Lot(a,b);
}