#include <iostream>
using namespace std;
int binomialCoef(int k, int n){
    if (k == 0 or k == n){
        return 1;
    }
    return binomialCoef(k, n - 1) + binomialCoef(k - 1, n - 1);
}
int main(){
    int n, k;
    cout <<"n = "; cin >> n;
    cout <<"k = "; cin >> k;
    cout << "C(" << k <<", " << n <<") = " << binomialCoef(k, n);
}