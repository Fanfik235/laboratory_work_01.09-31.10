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
void output_arr(int *arr, int size){
    for (int i = 0; i < size; i++)
    {
        if (i == 0){
            cout <<"[" << *(arr+i) <<", ";
            
        }
        else if (i == (size - 1)){
            cout << *(arr+i) <<"]";
        }
        else{
            cout << *(arr+i) <<", ";
        }
        
        
    }
}
///пункт (d)
void  sum_scalar(int *arr1, int *arr2, int size, int *resultD){
    for (int i = 0; i < size; i++)
    {
        *(resultD+i) = (*(arr1 + i)) + (*(arr2 + i));
    }
    
    
}
int main(){
    setlocale(0, "");
    cout <<"Введите размер массива\n";
    cout << "size = ";
    int size;
    cin >> size;
    int resultD[size];
    int *arr1 = new int [size];
    int *arr2 = new int [size];
    cout <<"1 массив\n";
    input_arr(arr1, size);
    cout <<"2 массив\n";
    input_arr(arr2, size);
    sum_scalar(arr1, arr2, size, resultD);
    cout <<"d) ";
    output_arr(resultD, size);


    //////////////////////
    delete [] arr1; arr1 = NULL;
    delete [] arr2; arr2 = NULL;
}
