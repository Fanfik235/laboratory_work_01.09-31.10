#include <iostream>
using namespace std;
void input_arr(int *arr, int size){
    setlocale(0, "");
    for (int i = 0; i < size; i++)
    {
        cout <<"Введите " << i + 1 << " элемент массива: ";
        cin >> *(arr+i);
    }
}
int scalar(int *arr, int size, int sc){
    int result = 0;
    for (int i = 0; i < size; i++)
    {
        result += *(arr + i) * sc;
    }
    return result;
}
int main(){
    setlocale(0, "");
    int size, sc;
    cout <<"Введите скалярную величину\n";
    cout << "sc = ";
    cin >> sc;
    cout <<"Введите размер массива\n";
    cout << "size = ";
    cin >> size;
    int *arr1 = new int [size];
    cout <<"1 массив\n";
    input_arr(arr1, size);
    cout <<"e) " << scalar(arr1, size, sc);


    //////////////////////
    delete [] arr1; arr1 = NULL;
}
