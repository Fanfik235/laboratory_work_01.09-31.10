#include <iostream>
using namespace std;
int main(){
    double *pa1 = new double;
    double *pa2 = new double;
    *pa1 = 1.5 + M_PI;
    *pa2 = 1.5 - M_PI;
    cout <<"a1 = " << *pa1 <<"; его адрес = " << pa1 << endl;
    cout <<"a2 = " << *pa2 <<"; его адрес = " << pa2 << endl;
    cout << "Разность адресов = " << pa1 - pa2;
    delete pa1;
    delete pa2;
    pa1 = NULL; pa2 = NULL;

}