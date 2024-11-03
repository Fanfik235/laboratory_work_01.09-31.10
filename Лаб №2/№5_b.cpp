#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "");
    double x, y, z, a, b;
    cout << "Введите сторону x кирпича\n";
    cin >> x;
    cout << "Введите сторону y кирпича\n";
    cin >> y;
    cout << "Введите сторону z кирпича\n";
    cin >> z;
    cout << "Введите сторону a отверстия\n";
    cin >> a;
    cout << "Введите сторону b отверстия\n";
    cin >> b;
    if ((a >= x and b >= y) or (a >= y and b >= x) or (a >= x and b >= z) or (a >= z and b >= x) or (a >= y and b >= z) or (a >= z and b >= y)){
        cout << "Влезет";
    }
    else{
        cout << "Не влезет";
    }
}
    