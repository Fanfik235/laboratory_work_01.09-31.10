#include <iostream>
using namespace std;
double f(int n){
    if (n == 0){
        return 0;
    }
    return sqrt(2 + f(n - 1));
}
int main(){
    int n;
    cout <<"n = "; cin >> n;
    cout << f(n);
}
