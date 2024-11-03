#include <iostream>
using namespace std;
int f(int a, int b){
    for(int i = 0; i < a; i += 1){
        for (int i = 0; i < b; i += 1){
        cout << " ";
    }
        for (int j = 0; j < a; j += 1){
            cout << "*";
        }
        cout << endl;
    }
}
int main(){
    int n, m;
    cout <<"n = ";
    cin >> n;
    cout <<"m = ";
    cin >> m;
    f(n, m);
}