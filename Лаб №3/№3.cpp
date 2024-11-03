#include <iostream>
using namespace std;
int main(){
    int n, i = 2;
    double s = 0;
    cout << "n = ";
    cin >> n;
    while(i <= 2 * n){
        s += 1.0/i;
        i += 2;
    }
    cout << "S = " << s;
}