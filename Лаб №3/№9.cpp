#include <iostream>
using namespace std;
int main(){
    int a, maxs, k = 0;
    cin >> a;
    maxs = a;
    while (a != 0){
        cin >> a;
        if (a > maxs){
            maxs = a;
            k = 0;
        }
        else if (a == maxs){
            k += 1;
        }
    }
    cout << " количество Max числа = " << k;
}