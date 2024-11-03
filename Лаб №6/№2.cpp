#include <iostream>
using namespace std;
int main(){
    setlocale(0, "");
    cout <<"Введите размер массива" << endl;
    int size; double sum = 0, min1, min2;
    cin >> size;

    double *arr = new double [size];
    double *arr2 = new double [size];

    cout <<"Введите его элементы\n";
    for (int i = 0; i < size; i++)
    {
        cin >> *(arr + i);
        if (*(arr + i) > 0){
            sum += *(arr + i);
        }
    }
    //пункт 1
    cout <<"1) " << sum << endl;

    //пункт 2
    if(*arr > *(arr+1)){
        min1 = *(arr + 1);
        min2 = *arr;
    }
    else{
        min2 = *(arr + 1);
        min1 = *arr;
    }
    for (int i = 2; i < size; i++)
    {
        if (*(arr + i) < min1){
            min2 = min1;
            min1 = *(arr + i);
        }
        else if(*(arr + i) < min2 and *(arr + i) > min1){
            min2 = *(arr + i );
        }
    }
    cout <<"2) " << min2 << endl;

    //пункт 3
    cout <<"3) ";
    for (int i = 0; i < size; i++)
    {
        if (*(arr + i) > 0){
            (*(arr2 + i)) = (*(arr + i)) * 10;
        }
        else{
            (*(arr2 + i)) = (*(arr + i)) - 100;
        }
        if (i <= size - 2){
            cout << *(arr2 + i) <<", ";
        }
        else{
            cout << *(arr2 + i) << endl;
        }
    }

    //пункт 4
    cout <<"4) ";
    for (int i = 0; i < size; i++)
    {
        if (i <= size - 2){
            cout << (*(arr2 + i)) * (*(arr + i)) <<", ";
        }
        else{
            cout << (*(arr2 + i)) * (*(arr + i)) << endl;
        }
    }
    
    
    delete [] arr; arr = NULL;
    delete [] arr2; arr2 = NULL;
}