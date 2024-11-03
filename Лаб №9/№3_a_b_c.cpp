#include <iostream>
using namespace std;
//пункт (а)
void input_matrix(int **matrix, int cols, int rows){
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            matrix[i][j] = rand() % 10;
        }
        
    }
}
//пункт (b)
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
//пункт (с)
void sum_rows(int **matrix, int cols, int rows, int *arrC){
    for (int i = 0; i < rows; i++)
    {
        int sums = 0;
        for (int j = 0; j < cols; j++)
        {
            sums += matrix[i][j];
        }
        arrC[i] = sums;
        
    }
}
//пункт (d)
int *get_min_cols_array(int **matrix, int rows, int cols) {
    int *result = new int[cols];
    for (int i = 0; i < cols; ++i) {
        result[i] = matrix[0][i];
        for (int j = 1; j < rows; ++j) {
            if (matrix[j][i] < result[i]) {
                result[i] = matrix[j][i];
            }
        }
    }
    return result;
    delete [] result;
}
int main(){
    srand(time(0));
    int cols, rows;
    cout <<"cols = ";
    cin >> cols;
    cout << "rows = ";
    cin >> rows;
    int arrC[rows];
    int **arr = new int* [rows];
    for (int i = 0; i < rows; i++)
    {
        arr[i] = new int [cols];
    }
    input_matrix(arr, cols, rows);
    output_matrix(arr, cols, rows);
    sum_rows(arr, cols, rows, arrC);
    cout <<"c) ";
    for (int i = 0; i < rows; i++)
    {
        cout << arrC[i] <<" ";
    }
    cout << endl;
    cout << "d) ";
    for (int i = 0; i < cols; i++)
    {
        cout << get_min_cols_array(arr, rows, cols)[i] << " ";
    }
    cout << endl;
    //////////////
    for (int i = 0; i < rows; i++)
    {
        delete [] arr[i];
    }
    delete [] arr;
}