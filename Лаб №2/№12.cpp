#include <iostream>
using namespace std;
int main(){
    int a, b ,c, res1 = 0, res2 = 0, res3, res4,maxs,mins;
    setlocale(0,"");
    cout << "Введите 3 числа\n";
    cin >> a;
    cin >> b;
    cin >> c;
    maxs = max(max(a,b),c);
    mins = min(min(a,b),c);
    if (a > 10 or b > 10 or c > 10){
        if (a > 10){
            res1 += a;
        }
        if (b > 10){
            res1 += b;
        }
        if (c > 10){
            res1 += c;
        }
    }
    if (a % 2 == 0 or b % 2 == 0 or c % 2 == 0){
        if (a % 2 == 0){
            res2 += 1;
        }
        if (b % 2 == 0){
            res2 += 1;
        }
        if (c % 2 == 0){
            res2 += 1;
        }
    }  
    res3 = (a+b+c) - maxs - mins;
    if (mins == a){
        res4 = 1;
    }
    if (mins == b and a != b){
        res4 = 2;
    }
    else{
        res4 = 3;
    }
    cout <<"a - " << res1 << endl <<"b - " << res2 << endl <<"c - " << res3 << endl <<"d - " << res4;
}