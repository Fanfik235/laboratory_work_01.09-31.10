#include <iostream>
using namespace std;
int main(){
    setlocale(0, "");
    int week = 7, resA, resB = 0, resC, resD = 0, days;
    int *weather_Days = new int [week];
    cout << "Введите количество замеров температуры за день, начиная с понедельника\n";
    for (int i = 0; i < week; i++)
    {
        cin >> weather_Days[i];
    }
    cout << "Введите измеренные температуры\n";
    int **arr = new int* [week];
    for (int i = 0; i < week; i++)
    {
        arr[i] = new int [weather_Days[i]];
        cout << i + 1 << " день недели:\n";
        for (int j = 0; j < weather_Days[i]; j++)
        {
            cin >> arr[i][j];
        }
    }
    resA = arr[0][0];
    ///решение пункта (А)
    for (int i = 1; i < weather_Days[0]; i++)
    {
        if (arr[0][i] < resA){
            resA = arr[0][i];
        }
    }
    cout <<"a) " << resA << endl;
    ///решение пукта(В)
    for (int i = 5; i < week; i++)
    {
        for (int j = 0; j < weather_Days[i]; j++)
        {
            if (arr[i][j] < 0){
                resB += 1;
            }
        }  
    }
    cout <<"b) " << resB << endl;
    ///решение пункта(С)
    resC = resA;
    for (int i = 0; i < week; i++)
    {
        for (int j = 0; j < weather_Days[i]; j++)
        {
            if (arr[i][j] > resC){
                resC = arr[i][j];
                days = i + 1;
            }
        }
        
    }
    cout << "c) " << "Максимальная температура на этой неделе: " << resC <<"; день недели " << days << endl;
    ///решение пункта(D)
    for (int i = 0; i < week; i++)
    {
        resD += arr[i][0];
    }
    double d;
    d = resD / 7.0;
    cout << "d) " << d << " градусов";
    

    
    

    //////////////////////////////////
    delete [] weather_Days; weather_Days = NULL;
    for (int i = 0; i < week; i++)
    {
        delete [] arr[i]; arr[i] = NULL;
    }
    delete [] arr; arr = NULL;
    
}