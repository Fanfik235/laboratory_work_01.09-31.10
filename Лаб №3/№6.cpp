#include <iostream>
using namespace std;
int main(){
    int a,x,k = 0,kch = 0;
    string s;
    do {
        cin >> x;
        cout << "Вы хотите закончить да/нет\n";
        cin >> s;
        k += 1;
        if (x % 2 == 0){
            kch += 1;
        }
    }while(s == "нет");
    cout <<"Количество введенных чисел равен "<< k << endl;
    cout <<"Количество четных чисел среди них равен " << kch; 
}