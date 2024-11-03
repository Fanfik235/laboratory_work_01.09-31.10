#include <iostream>
using namespace std;
int main(){
    int res1 = 0, res2 = 0, res3,  b;
    setlocale(0, "");
    cout << "Введите через строчку 7 целых чисел\n";
    cin >> b;
    if (b < 0){
            res1 += 1;
        }
        if (b >= 10 and b < 100){
            res2 += b;
        }
    res3 = b;
    for (int i = 0;i <= 5;i += 1){
        int a;
        cin >> a;
        if (a < 0){
            res1 += 1;
        }
        if (a >= 10 and a < 100){
            res2 += a;
        }
        if (res3 > a){
            res3 = a;
        }
    }
    cout <<"a - " << res1 << endl << "b - " << res2 << endl << "c - " << res3 << endl;
}