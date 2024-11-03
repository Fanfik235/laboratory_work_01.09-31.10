#include <iostream>
using namespace std;
int main(){
    int n, res = 1;
    cout << "Введите целое число n = ";
    cin >> n;
    for (int i = 1;i <= n; i += 1) {
        res *= i;
    }
    cout << "n != " << res;

}