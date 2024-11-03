#include <iostream>
using namespace std;
int main(){
    setlocale(0,"");
    double x, y, z;
    int k = 0;
    cout << "x = ";
    cin >> x;
    cout << "y = ";
    cin >> y;
    cout << "z = ";
    cin >> z;
    if (x < y + z and y < x + z and z < x + y){
        if ((x == y and x != z) or (x == z and x != y) or (y == z and y != x)){
            cout << "равнобедренный ";
            k += 1;
        }
        if (x*x == y*y + z*z or y*y == x*x + z*z or z*z == x*x + y*y){
            cout << "прямоугольный ";
            k += 1;
        }
        if (x == y and y == z and x == z){
            cout << "равносторонний ";
            k += 1;
        }
        if (k != 0){
            cout << "треугольник";
        }
        

    }
    else{
        cout <<"Треугольник не существует";
    }
}