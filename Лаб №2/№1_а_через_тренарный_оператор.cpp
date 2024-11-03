#include <iostream>
using namespace std;
int main()
{
setlocale(0, "");
double a1, b1, a2, b2;
cout << "Введите стороны 1-го прямоугольника \n";
cout << "a1= "; cin >> a1;
cout << "b1= "; cin >> b1;
cout << "Введите стороны 2-го прямоугольника \n";
cout << "a2= "; cin >> a2;
cout << "b2= "; cin >> b2;
double s1, s2;
s1 = a1 * b1;
s2 = a2 * b2;
cout << "max площадь = " << (s1 > s2 ? s1 : s2);
return 0;
}