#include <iostream>
using namespace std;
int main(){
    int rows = 8, cols = 8;
    int arr[rows][cols];
    for (int i = 0; i < rows; i += 1){
        for (int j = 0; j < cols; j++)
        {
            if ((i + j) % 2 == 0){
            arr[i][j] = 0;
        }
        else{
            arr[i][j] = 1;
        }
        }
        
        
        
        
    }
    for(int i = 0; i < rows; i += 1){
        for(int j = 0; j < cols; j += 1){
            cout << arr[i][j] <<" ";
        }
        cout << endl;
    }
}