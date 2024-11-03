#include <iostream>
using namespace std;
int main(){
    int rows = 10, cols = 10;
    int arr[rows][cols], center = 5;
    for (int l = 0; l < center;l += 1)
    {
        for (int i = l; i < 10 - l; i++)
        {
            for (int j = l; j < 10 - l; j++)
            {
                arr[i][j] = 4 - l;
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