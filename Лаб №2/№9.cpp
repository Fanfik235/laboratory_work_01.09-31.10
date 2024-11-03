#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    setlocale(0,"");
    double x, y, c;
    cout << "x = ";
    cin >> x;
    cout << "y = ";
    cin >> y;
    c = sqrt(x * x + y * y);
    //пункт а
    if((y >= 0 and y <= 1) and (-2 <= x and x <= 0)){
        cout <<"а - принадлежит\n";
    }
    else{
        cout <<"а - не принадлежит\n";
    }
    //пункт b
    if((y >= 0 and y <= 5) and (x >= -5 and x <= 5) and c <= 5){
        cout <<"b - принадлежит\n";
    }
    else{
        cout <<"b - не принадлежит\n";
    }
    //пункт с
    if ((y >= -6 and y <= 6) and (x >= 0 and x <= 6) and (c >= 3 and c <= 6)){
        cout <<"c - принадлежит\n";
    }
    else{
        cout <<"c - не принадлежит\n";
    }
    //пункт d
    if ((x >= 0 and x <= 1) and (y >= 0 and y <= 2) and y <= -2 * x + 2){
        cout <<"d - принадлежит\n";
    }
    else{
        cout <<"d - не принадлежит\n";
    }
}