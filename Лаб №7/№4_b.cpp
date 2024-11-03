#include <iostream>
using namespace std;
int f(int a){
    for(int i = 0; i < a; i += 1){
        for (int j = 0; j < a; j += 1){
            cout << "*";
        }
        cout << endl;
    }
}
int main(){
    int n;
    cout <<"n = ";
    cin >> n;
    f(n);
}