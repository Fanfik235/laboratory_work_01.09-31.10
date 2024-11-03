#include <iostream>
#define _USE_MATH_DEFINES
using namespace std;
int main(){
    double a , x, slag = 1, s = 0, znam = 1;
    setlocale(0, "");
    cout << "Введите малое число\n";
    cin >> x;
    while(slag > x){
        s += slag;
        znam  += 1;
        slag = 1.0 / znam;
        cout << znam << endl;
    }
    cout << "Результат равен " << s << endl;
 }