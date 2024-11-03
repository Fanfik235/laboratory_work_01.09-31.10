#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    setlocale(0,"");
    double x, y, c;
    cout <<"Введите координаты попадания по х = ";
    cin >> x;
    cout <<"по у = ";
    cin >> y;
    c = sqrt(x*x+y*y);
    if(c <= 4){
        if (c <= 4 and c > 2){
            cout << "5 очков";
        }
        else if (c <= 2){
            cout << "10 очков";
        }
    }
    else{
        cout << "молоко";
    }
}