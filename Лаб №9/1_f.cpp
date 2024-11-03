#include <iostream>
using namespace std;
void input_arr(int *arr, int size){
    setlocale(0, "");
    for (int i = 0; i < size; i++)
    {
        cout <<"Введите " << i + 1 << " элемент массива: ";
        cin >> arr[i];
    }
}
void element(int *arr, int size, int el, int *pa){
    int a, flag = 0;
    for (int i = 0; i < size; i++)
    {
        if (*(arr + i) == el){
            *pa = i; flag = 1;
        }
    }
    if (flag == 0){
        for (int i = 0; i < size; i++)
    {
        if (*(arr + i) >= el){
            *pa = i;
        }
    }
    }
    
}
int main(){
    setlocale(0, "");
    cout << "Введите размер массива\n";
    cout << "size = ";
    int size, el, a;

    cin >> size;
    cout << "Введите размер элемента\n";
    cout << "element = ";
    cin >> el;
    int arr[size];
    input_arr(arr, size);
    element(arr, size, el, &a);
    cout <<"f) " << a;

}
