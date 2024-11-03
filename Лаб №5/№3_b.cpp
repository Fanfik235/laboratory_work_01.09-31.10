#include <iostream>
using namespace std;
int main(){
    int rows = 6, cols = 6;
    int arr[rows][cols];
    for (int i = 0; i < rows; i += 1){
        int j = 0, n = 6;
        while(i != j){
            arr[i][j] = 0;
            j += 1;
        }
        while(j < cols){
            arr[i][j] = n;
            n -= 1;
            j += 1;
        }
        
    }
    for(int i = 0; i < rows; i += 1){
        for(int j = 0; j < cols; j += 1){
            cout << arr[i][j] <<" ";
        }
        cout << endl;
    }
}