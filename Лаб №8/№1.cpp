#include <iostream>
using namespace std;
double tf(double  tC){
    return 9 / 5 * tC + 32;
}
double tk(double tC){
    return 273 + tC;
}
void temp(double &ReftF, double &ReftK, double tC2){
    ReftF = 9 / 5 * tC2 + 32;
    ReftK = 273 + tC2;
}
int main(){
    double tF, tK, tC1, tC2;
    setlocale(0, "");
    cout << "tC1 = "; cin >> tC1;
    cout << "tC2 = "; cin >> tC2;
    cout << "для 1 значения температуры Цельсия: по Фаренгейту = " << tf(tC1) <<", " << "по Кельвину = " << tk(tC1) << endl << endl;
    temp(tF, tK, tC2);
    cout << "для 2 значения температуры Цельсия: по Фаренгейту = " << tF <<", " << "по Кельвину = " << tK << endl;


}