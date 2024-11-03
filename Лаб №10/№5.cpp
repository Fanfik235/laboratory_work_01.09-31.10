#include <iostream>
using namespace std;
void foo(int a, int b){
    if (b == 0){
        cout << a;
        return;
    }
    if (b > 0){
        foo(a + 1, b - 1);
    }
    if (b < 0){
        foo(a - 1, b + 1);
    }

}
int main(){
    int a, b;
    cout << "a = "; cin >> a;
    cout <<"b = "; cin >> b;
    foo(a, b);
}