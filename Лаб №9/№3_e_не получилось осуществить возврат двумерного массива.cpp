#include <iostream>
using namespace std;
void input_matrix(int **matrix, int cols, int rows){
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            matrix[i][j] = rand() % 10;
        }
        
    }
}
int output_matrix(int **matrix1,int **matrix2, int cols, int rows){
    int **ResultARRAY = new int* [rows];
    for (int i = 0; i < rows; i++)
    {
        ResultARRAY[i] = new int [cols];
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            ResultARRAY[i][j] = matrix1[i][j] * matrix2[i][j];
        }
        
    }
    return **ResultARRAY;
    for (int i = 0; i < rows; i++)
    {
        delete [] ResultARRAY[i];
    }
    delete [] ResultARRAY;
}

int main(){
    srand(time(0));
    int cols, rows;
    cout <<"cols = ";
    cin >> cols;
    cout << "rows = ";
    cin >> rows;
    int arrC[rows];
    int **arr1 = new int* [rows];
    int **arr2 = new int* [rows];
    for (int i = 0; i < rows; i++)
    {
        arr1[i] = new int [cols];
        arr2[i] = new int [cols];
    }
    input_matrix(arr1, cols, rows);
    input_matrix(arr2, cols, rows);
    cout <<"e) " << endl;
    int *res = output_matrix(arr1, arr2, cols, rows);
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << res[i][j];
        }
        cout << endl;
    }
    
    //////////////
    for (int i = 0; i < rows; i++)
    {
        delete [] arr1[i];
        delete [] arr2[i];
    }
    delete [] arr1;
    delete [] arr2;
}