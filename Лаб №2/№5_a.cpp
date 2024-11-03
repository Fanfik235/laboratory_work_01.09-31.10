#include <iostream>
using namespace std;
int main()
{
    setlocale(0,"");
    double r, z, a, b, c;
    cout << "Введите радиус торта ";
    cin >> r;
    cout << "Введите его высоту ";
    cin >> z;
    cout << "Введите сторону a коробики\n";
    cin >> a;
    cout << "Введите сторону b\n";
    cin >> b;
    cout << "Введите его высоту c\n5";
    cin >> c;
    if((2 * r <= a) and (2 * r <= b) and (z <= c)){
        cout << "Торт поместится в коробку";
    }
    else{
        cout << "Торт не поместится в коробку";
    }

}