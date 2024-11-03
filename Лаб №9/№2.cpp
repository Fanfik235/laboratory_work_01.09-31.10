#include <iostream>
using namespace std;
///пунт (а)
void input_matrix(int **matrix, int cols, int rows){
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout <<i + 1 << " строка " << j + 1 << " элемент: ";
            cin >> matrix[i][j];
        }
        
    }
    
}
///пунт (b)
void output_matrix(int **matrix, int cols, int rows){
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << matrix[i][j] <<"\t";
        }
        cout << endl;
        
    }
    
}
///пунт (c)
void rows_matrix(int **matrix, int cols, int rows){
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            matrix[i][j] *= matrix[i][j];
        }
        
    }
    
}
int main(){ 
    int cols, rows;
    cout <<"cols = ";
    cin >> cols;
    cout << "rows = ";
    cin >> rows;
    int **arr = new int* [rows];
    for (int i = 0; i < rows; i++)
    {
        arr[i] = new int [cols];
    }
    input_matrix(arr, cols, rows);
    output_matrix(arr, cols, rows);
    rows_matrix(arr, cols, rows);
    output_matrix(arr, cols, rows);
    //////////////
    for (int i = 0; i < rows; i++)
    {
        delete [] arr[i];
    }
    delete [] arr;
}