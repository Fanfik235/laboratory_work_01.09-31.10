#include <iostream>
using namespace std;

int f(int n, int i){
    if (n < 10){
        return i += 1;
    }
    else{
        return f((n / 10), i += 1);
    }
    
}
int main(){
    setlocale(0, "");
    int n;
    cout << "Введите число n = ";
    cin >> n;
    cout << f(n, 0);
}