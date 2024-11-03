#include <iostream>
using namespace std;
int main(){
    setlocale(0,"");
    int n;
    cout << "Введите целое четное число n = ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((i + j) % 2 == 0){
                cout << "*";
            }
            else{
                cout << "o";
            }
        }
        cout << endl;
        
    }
    
}