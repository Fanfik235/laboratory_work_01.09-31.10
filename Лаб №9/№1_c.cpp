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
///пункт (с)
int  scalar(int *arr1, int *arr2, int size){
    int result = 0;
    for (int i = 0; i < size; i++)
    {
        result += (*(arr1 + i)) * (*(arr2 + i));
    }
    return result;
    
}
int main(){
    setlocale(0, "");
    cout <<"Введите размер массива\n";
    cout << "size = ";
    int size;
    cin >> size;
    int *arr1 = new int [size];
    int *arr2 = new int [size];
    cout <<"1 массив\n";
    input_arr(arr1, size);
    cout <<"2 массив\n";
    input_arr(arr2, size);
    cout <<"c) " << scalar(arr1, arr2, size);


    //////////////////////
    delete [] arr1; arr1 = NULL;
    delete [] arr2; arr2 = NULL;

}