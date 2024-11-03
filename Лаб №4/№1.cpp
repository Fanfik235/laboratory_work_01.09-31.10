#include <iostream>
using namespace std;
int main(){
    int arr[10],arr2[10] = {-2, 4, 3, -7, 0, 12, 9, -2, 4, 2}, b, sums = 0;
    double s;
    setlocale(0, "");
    cout << "Введите 10 элементов массива\n";
    for(int i = 0; i < 10; i += 1){
        cin >> b;
        arr[i] = b;
        sums += arr[i];
    }
    s = sums / 10;
    cout << "a - " << arr[1] <<", " << arr[8] << endl;
    cout <<"б - " << arr[1] <<", " << arr[3] <<", " << arr[5] <<", " <<arr[7] <<", " <<arr[9] << endl;
    cout <<"в - " << s << endl;
    cout <<"г - " << endl;
    for(int i = 0; i < 10; i += 1){
        if (arr[i] > 0 and arr2[i] > 0){
            cout << arr[i] <<" + " << arr2[i] <<" = " << arr[i] + arr2[i] << endl;
        }
        else if(arr[i] < 0 and arr2[i] < 0){
            cout << "(" << arr[i] << ") + (" << arr2[i] << ") = " << arr[i] + arr2[i] << endl;
        }
        else if(arr[i] > 0 and arr2[i] < 0){
            cout << arr[i] << " + (" << arr2[i] << ") = " << arr[i] + arr2[i] << endl;
        }
        else if(arr[i] < 0 and arr2[i] > 0){
            cout << "(" << arr[i] << ") + " << arr2[i] << " = " << arr[i] + arr2[i] << endl;
        }
    }
}