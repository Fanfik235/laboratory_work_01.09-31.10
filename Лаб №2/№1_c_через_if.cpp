#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "");
    double a1, b1, a2, b2, a3, b3, s1, s2, s3;
    cout << "Введите стороны 1-го прямоугольника \n";
    cout << "a1= "; cin >> a1;
    cout << "b1= "; cin >> b1;
    cout << "Введите стороны 2-го прямоугольника \n";
    cout << "a2= "; cin >> a2;
    cout << "b2= "; cin >> b2;
    cout << "Введите стороны 3-го прямоугольника \n";
    cout << "a3= "; cin >> a3;
    cout << "b3= "; cin >> b3;
    s1 = a1 * b1;
    s2 = a2 * b2;
    s3 = a3 * b3;
    if(s1 > s2 > s3 or s1 > s3 > s2){
        cout << "макс площадь у первого S= " << s1;
    }
    else if(s2 > s1 > s3 or s2 > s3 > s1){
        cout << "макс площадь у второго S= " << s2;
    }
    else{
        cout <<"макс площадь у третьего S= " << s3;
    }
}