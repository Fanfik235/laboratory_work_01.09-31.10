#include <iostream>
using namespace std;

int main(){
    setlocale(0, "");
    int size, res2 = 1, res3 = 0;
    cout << "Введите размер квадратной матрицы n = ";
    cin >> size;
    int arr[size];
    int **matrix = new int* [size];
    for (int i = 0; i < size; i++)
    {
        matrix[i] = new int [size];
    }
    cout << "Введите элементы матрицы\n";
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cin >> matrix[i][j];
        }
    }

    //пункт 1
    for (int i = 0; i < size; i++)
    {
        int k = 0;
        for (int j = 0; j < size; j++)
        {
            if(matrix[j][i] == 0){
                k += 1;
            }
        }
        *(arr+i) = k;
    }
    cout <<"1) ";
    for (int i = 0; i < size; i++)
    {
        cout << *(arr+i) << " ";
    }
    cout << endl;
    //пункт 2

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if ((i + j) == size){
                res2 *= matrix[i][j];
            }
        }
        
    }
    cout << "2) " << res2 << endl;

    //пункт 3

    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            if (matrix[i][j] > 0){
                res3 += 1;
            }
        }
    }
    cout << "3) " << res3 << endl;
    
    for (int i = 0; i < size; i++)
    {
        delete [] matrix[i];
    }
    delete [] matrix;
}
