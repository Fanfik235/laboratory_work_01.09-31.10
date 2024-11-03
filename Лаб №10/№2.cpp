#include <iostream>
using namespace std;
void f(){
    int num;
    cin >> num;
    if (num == 0){
        return;
    }
    f();
    cout << num << endl;
}
int main(){
    setlocale(0, "");
    cout << "Введите последовательность чисел, которая оканчивается нулем\n";
    f();
}