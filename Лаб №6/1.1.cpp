#include <iostream>
using namespace std;
int main(){
    double *pa1 = new double;
    double *pa2 = new double;
    *pa1 = 1.5; *pa2 = M_PI;
    cout <<"a1 = " << *pa1 << endl << "a2 = " << *pa2 << endl;
    cout <<"a1 = " << pa1 << endl << "a2 = " << pa2 << endl;
    cout << "pa1 - pa2 = " << pa1 - pa2 << endl;
    cout <<"a1 = " << sizeof(pa1) << endl;
    cout <<"a1 = " << sizeof(pa1) << endl;
    delete pa1;
    delete pa2;
    pa1 = NULL;
    pa2 = NULL;
}