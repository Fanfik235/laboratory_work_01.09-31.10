#include <iostream>
using namespace std;
int main(){
    int arr[3][4],arr_copy_1[3][4],arr_copy_2[3][4];
    for(int i = 0; i < 3; i += 1){
        for(int j = 0; j < 4; j += 1){
            cin >> arr[i][j];
            arr_copy_1[i][j] = arr[i][j];
            arr_copy_2[i][j] = arr[i][j];
        }
    }

    //пункт а
    int minEl = arr[0][0], rows, cols, retest, x[4];
    for(int i = 0; i < 3; i += 1){
        for(int j = 0; j < 4; j += 1){
            if (arr[i][j] < minEl){
                minEl = arr[i][j];
                rows = i + 1;
                cols = j + 1;
            }
        }
    }
    cout <<"а - наименьший элемент массива находится на " << rows <<" строке и на " << cols << " столбце" << endl;

    //пункт б
    for (int i = 0; i < 3; i += 1){
        retest = arr_copy_1[i][3];
        arr_copy_1[i][3] = arr_copy_1[i][cols - 1];
        arr_copy_1[i][cols - 1] = retest;
    }
    cout << "б - \n";
    for (int i = 0; i < 3; i += 1){
        for (int j = 0; j < 4; j += 1){
            cout << arr_copy_1[i][j] <<" ";
        }
        cout << endl;
    }

    //пункт в
    cout <<"в - ";
    for(int i = 0; i < 4; i += 1){
        x[i] = arr[0][i] + arr[1][i] + arr[2][i];
        cout << x[i] << " ";
    }
    cout << endl;
    
    //пункт г
    cout << "г - \n";
    for(int i = 0; i < 4; i += 1){
        arr_copy_1[0][i] = minEl;
    }
    for (int i = 0; i < 3; i += 1){
        for (int j = 0; j < 4; j += 1){
            cout << arr_copy_1[i][j] <<" ";
        }
        cout << endl;
    }



}