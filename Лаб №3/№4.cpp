#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n; double x, res1, res2;
    cout << "n = ";
    cin >> n;
    cout <<"x = ";
    cin >> x;
    res1 = cos(x);
    res2 = sqrt(x);
    //пункт а и б в одном цикле=>
    for(int i = 0;i <= n-2;i += 1){
        res1 = cos(res1 + x);
        res2 = sqrt(res2 + x);
    }
    cout << "a = " << res1 << endl;
    cout << "b = " << res2;

}