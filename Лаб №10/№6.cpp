#include <iostream>
#include <cmath>
using namespace std;
int f(int a, int b){
    if (b == 0){
        return 0;
    }
    else if(b > 0){
        return a + f(a, b - 1);
    }
    else{
        return -f(a, -b);
    }
}
int main(){
    int a, b, a1;
    cout <<"a = ";
    cin >> a;
    a1 = a;
    cout << "b = ";
    cin >> b;
    cout << f(a, b);
}