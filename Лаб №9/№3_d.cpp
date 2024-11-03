#include <iostream>
using namespace std;
int** create2DArray(int rows, int cols){
    int **array = new int* [rows];
    for (int i = 0; i < rows; i++)
    {
        array[i] = new int [cols];
    }
    return array;
}

void delete2DArray(int **matrix, int rows, int cols){
    for (int i = 0; i < rows; i++)
    {
        delete [] matrix[i]; matrix[i] = NULL;
    }
    delete [] matrix; matrix = NULL;    
}

void delete1DArray(int *arr, int size){
    delete [] arr;
}

void rands(int **matrix, int rows, int cols){     //Пункт а
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            matrix[i][j] = rand() % 10;
        }
        
    }
}

void outputArray(int **matrix, int rows, int cols){    //Пункт b
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void sumRows(int *arr, int **matrix, int rows, int cols){  //Пункт c
    for (int i = 0; i < rows; i++)
    {
        int sums = 0;
        for (int j = 0; j < cols; j++)
        {
            sums += matrix[i][j];
        }
        *(arr + i) = sums;
    }
    
}

int* minElement(int **matrix, int rows, int cols){   //Пункт d
    int *minEl = new int [cols];
    for (int j = 0; j < cols; j++)
    {
        int minim = matrix[0][j];
        for (int i = 0; i < rows; i++)
        {
            if(minim > matrix[i][j]){
                minim = matrix[i][j];
            }
        }
         *(minEl + j) = minim;
    }
    return minEl;
}

int** matrixMul(int **matrix1, int **matrix2, int rows, int cols){   //Пункт e
    int **res = create2DArray(rows, cols);
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            res[i][j] = matrix1[i][j] * matrix2[i][j];
        }
    }
    return res;
}

int main(){
    srand(time(0));
    int rows, cols;
    cout << "Rows = ";
    cin >> rows;
    cout <<"Cols = ";
    cin >> cols;
    int arr[rows];

    int **matrix1 = create2DArray(rows, cols);
    int **matrix2 = create2DArray(rows, cols);

    //присваивание элементов матрицы случайными числами
    rands(matrix1, rows, cols);
    rands(matrix2, rows, cols);

    //вывод элементов матриц на экран
    outputArray(matrix1, rows, cols);
    cout <<"=====================" << endl;
    outputArray(matrix2, rows, cols);

    // sumRows(arr, matrix1, rows, cols);        //вывод результатов матриц пункта (с)
    // for (int i = 0; i < rows; i++)
    // {
    //     cout << *(arr + i) << " ";
    // }
    // cout << endl;

    // sumRows(arr, matrix2, rows, cols);
    // for (int i = 0; i < rows; i++)
    // {
    //     cout << *(arr + i) << " ";
    // }
    // cout << endl;

    cout << "=====================" << endl;

    int *minEl = (minElement(matrix1, rows, cols));      //вывод одномерного массива, который содержит минимальные элементы столбцов
    for (int i = 0; i < cols; i++)
    {
        cout << *(minEl + i) << " ";
    }
    cout << endl;
    
    cout << "=====================" << endl;

    int **res_e = matrixMul(matrix1, matrix2, rows, cols);
    outputArray(res_e, rows, cols);
    





    //============================== delete
    delete2DArray(matrix1, rows, cols);
    delete2DArray(matrix2, rows, cols);
    delete2DArray(res_e, rows, cols);
    delete1DArray(minEl, cols);
}
