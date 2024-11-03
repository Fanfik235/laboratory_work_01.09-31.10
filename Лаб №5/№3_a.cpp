#include <iostream>
using namespace std;
int main(){
    int a[5][5];
    for(int i = 0; i < 5; i += 1){
        for(int j = 0; j < 5; j += 1){
            if (i == j){
                a[i][j] = 1;
            }
            else{
                a[i][j] = 0;
            }
        }
    }
    for(int i = 0; i < 5; i += 1){
        for(int j = 0; j < 5; j += 1){
            cout << a[i][j] <<" ";
        }
        cout << endl;
    }



}