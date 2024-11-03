#include <iostream>
#include <cmath>
#define _USE_MATC_DEFINES
using namespace std;
int main(){
    int n, x, y, x0, y0, x1, y1; double s, p = 0;
    setlocale(0, "");
    cout << "Введите целое число n" << endl;
    cin >> n;
    cout << "x = "; cin >> x; cout << "y = "; cin >> y;
    x0 = x; y0 = y; x1 = x; y1 = y;
    for (int i = 0; i <= n - 2; i += 1){
        cout << "x = "; cin >> x; cout << "y = "; cin >> y;
        s = sqrt(pow((x - x0),2) + pow((y - y0),2));
        p += s;
        x0 = x; y0 = y;
    }
    p += sqrt(pow((x1 - x0),2) + pow((y1 - y0),2));
    cout << "Периметр " << n <<"-угольника равен " << p;
}