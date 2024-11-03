#include <iostream>
using namespace std;
int main(){
    int tC = 0;
    double tF;
    while (tC <= 100){
        tF = 9.0/5.0 * tC + 32;
        cout << "tC = " << tC << " " << "tF = " << tF << endl;
        tC += 10;
    }
    
}