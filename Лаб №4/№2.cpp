#include <iostream>
using namespace std;
int main(){
    int a[8], f0 = 0, f1 = 1, f2 = 1, f3;
    for(int i = 0;i < 8;i += 1){
        f3 = f1 + f2;
        a[i] = f3;
        f1 = f2;
        f2 = f3;
        cout << a[i] <<" ";
    }

}