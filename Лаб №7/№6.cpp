#include <iostream>
#include <cmath>
using namespace std;
string f1(int a){
    if (a < 0){
        return "минус";
    }
    else if (a > 0){
        return "плюс";
    }
    else{
        return "0";
    }
}
string f2(int a){
    if (abs(a) == 0){
        return "ноль";
    }
    if (abs(a) == 1){
        return "один";
    }
    if (abs(a) == 2){
        return "два";
    }
    if (abs(a) == 3){
        return "три";
    }
    if (abs(a) == 4){
        return "четыре";
    }
    if (abs(a) == 5){
        return "пять";
    }
    if (abs(a) == 6){
        return "шесть";
    }
    if (abs(a) == 7){
        return "семь";
    }
    if (abs(a) == 8){
        return "восемь";
    }
    if (abs(a) == 9){
        return "девять";
    }
    if (abs(a) == 10){
        return "десять";
    }
}
int main(){
    int a;
    cout <<"a = "; cin >> a;
    cout << f1(a) <<" " << f2(a);
}