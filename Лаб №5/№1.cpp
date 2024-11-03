#include <iostream>
using namespace std;
int main(){
    int a[2][3], sums = 0, sums2 = 0, pr = 1;
    srand(time(0));
    cout << "a - \n";
    for(int i = 0; i < 2;i += 1){
        for(int j = 0; j < 3; j += 1){
            a[i][j] = rand() % 31;
            sums += a[i][j];
            if (a[i][j] >= 2 and a[i][j] <= 9){
                sums2 += a[i][j];
                pr *= a[i][j];
            }
            cout << a[i][j] <<" ";
        }
        cout <<endl;
    }
    if (sums % 2 == 0){
        cout << "б - Сумма всех элементов четное число\n";
    }
    else{
        cout << "б - Сумма всех элементов нечетное число\n";
    }
    cout <<"в - сумма элементов равен " << sums2 <<", а произведение равен "<< pr;

}