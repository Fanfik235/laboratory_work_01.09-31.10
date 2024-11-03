#include <iostream>
#include <cmath>
using namespace std;
int sums( double n){
    n = fabs(n);
    if (n < 1e-9){
        return 0;
    }
    if (n >= 1){
        return (int(n) % 10) + sums(int(n) / 10);
    }
    else{
        n *= 10;
        return int(n) + sums(n - int(n));
    }
}
int main(){
    double n;
    cout <<"n = "; cin >> n;
    cout << sums(n);
}