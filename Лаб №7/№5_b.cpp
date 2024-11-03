#include <iostream>
using namespace std;
int f(int x, int n){
    int pr = 1;
    for (int i = 0; i < n; i += 1){
        pr *= x;
    }
    return pr;
}
int main(){
    int x, n;
    cout <<"x = "; cin >> x;
    cout <<"n = "; cin >> n;
    cout <<f(x,n);
}