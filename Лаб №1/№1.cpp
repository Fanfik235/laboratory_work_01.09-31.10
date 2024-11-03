#include <iostream>
using namespace std;
int main()
{
setlocale(0, ""); //
double a, b, s; 
cout << "Введите длины сторон \n"; 
cout << "a= "; 
cin >> a; 
cout << "b= "; 
cin >> b; 
s = a * b; 
cout << "S = " << s; 
return 0;
}