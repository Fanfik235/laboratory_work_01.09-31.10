#include <iostream>
using namespace std;
void f(int a = 4){
    for(int i = 0; i < 4; i += 1){
        for (int j = 0; j < 4; j += 1){
            cout << "*";
        }
        cout << endl;
    }
}
int main(){
    f();
}