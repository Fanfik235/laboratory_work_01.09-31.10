#include <iostream>
using namespace std;
int main(){
    int rows = 5, cols = 5;
    int arr[rows][cols];
    for (int i = 0; i < rows; i += 1){
        for (int j = 0; j < cols; j += 1){
            if(i + j == 4){
                arr[i][j] = 1;
            }
            else if(i + j == 5){
                arr[i][j] = 2;
            }
            else if(i + j == 6){
                arr[i][j] = 3;
            }
            else if(i + j == 7){
                arr[i][j] = 4;
            }
            else if(i + j == 8){
                arr[i][j] = 5;
            }
            else{
                arr[i][j] = 0;
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