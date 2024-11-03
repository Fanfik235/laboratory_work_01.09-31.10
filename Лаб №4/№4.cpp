#include <iostream>
using namespace std;
int main(){
    int w, a[10];
    setlocale(0, "");
    cout << "Введите элементы массива\n";
    for(int i = 0;i < 10; i += 1){
        cin >> a[i];
    }
    cout <<"w = ";
    cin >> w;
    for(int i = 0; i < 10;i += 1){
        for (int j = i + 1; j < 10; j += 1){
            if(a[i] + a[j] == w){
                cout <<a[i] <<", " << a[j] <<" index = " << i <<", " << j << endl;
            }
        }
    }
}