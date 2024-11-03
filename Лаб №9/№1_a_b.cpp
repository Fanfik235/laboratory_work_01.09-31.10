#include <iostream>
using namespace std;
///пункт (а)
void input_arr(int *arr, int size){
    setlocale(0, "");
    for (int i = 0; i < size; i++)
    {
        cout <<"Введите " << i + 1 << " элемент массива: ";
        cin >> arr[i];
    }
}
///пункт (b)
void output_arr(int *arr, int size){
    cout <<"arr[" << size <<"] = ";
    for (int i = 0; i < size; i++)
    {
        if (i == 0){
            cout <<"[" << arr[i] <<", ";
            
        }
        else if (i == (size - 1)){
            cout << arr[i] <<"]";
        }
        else{
            cout << arr[i] <<", ";
        }
        
        
    }
}

int main(){
    setlocale(0, "");
    cout <<"Введите размер массива\n";
    cout << "size = ";
    int size;
    cin >> size;
    int *arr = new int [size];
    input_arr(arr, size);
    output_arr(arr, size);

    delete [] arr; arr = NULL;
}