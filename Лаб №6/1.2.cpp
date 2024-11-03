#include <iostream>
using namespace std;
int main(){
    setlocale(0, "");
    const int SIZE = 5;
    double arr[SIZE] = {1.5, M_PI, -0.7, 3.0, -2.4};
    cout <<"первый элемент массива = " << *arr << " " <<"его адрес = " << arr <<  endl;
    cout <<"второй элемент массива = " << *(arr + 1) << " " <<"его адрес = " << arr + 1 << endl;
    cout <<"последний элемент массива = " << *(arr + 4) << " " <<"его адрес = " << arr + 4 << endl;
    cout << "Разность адресов первого и второго элемента массива = " << arr - (arr + 1);
}