#include <iostream>
using namespace std;
int main()
{
    setlocale(0,"");
    int a;
    cout << "Введите число" << endl;
    cin >> a;
    if(a % 2 == 0){
        cout <<"Число четное";
    }
    else{
        cout <<"Число нечетное";
    }
}