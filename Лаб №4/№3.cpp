#include <iostream>
using namespace std;
int main(){
    srand(time(0));
    setlocale(0, "");
    int x[7], y[7], res1[21], res2[14], n = 7;
    for(int i = 0; i < 7;i += 1){
        x[i] = rand() % 20;
    }
    for(int i = 0; i < 7;i += 1){
        y[i] = rand() % 20;
    }
    cout << "Первый массив\n";
    for (int i = 0; i < 7; i++)
    {
        cout << x[i] <<" ";
    }
    cout << endl;
    cout << "Второй массив\n";
    for (int i = 0; i < 7; i++)
    {
        cout << y[i] << " ";
    }
    cout << endl <<"=============================" << endl;
    for(int i = 0; i < 7; i += 1){
        res1[i * 3] = x[i];
        res1[(i * 3) + 1] = y[i];
        res1[(i * 3) + 2] = x[i] + y[i];
    }
    cout << "a - ";
    for(int i = 0; i < 21; i += 1){
        cout <<res1[i] <<" ";
    }
    cout << endl;

    for(int i = 0; i < 6; i += 1){
        res2[i * 2] = x[(n-1) - i];
        res2[(i * 2) + 1] = x[i + 1] + y[i];
    }
    res2[12] = x[0];
    res2[13] = x[0] + y[6];
    cout << "b - ";
    for(int i = 0; i < 14; i += 1){
        cout <<res2[i] <<" ";
    }
}