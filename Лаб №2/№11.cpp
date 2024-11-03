#include <iostream>
using namespace std;
int main(){
    setlocale(0,"");
    int d,m,y,d1,m1,y1,c;
    cout << "Введите день, месяц и год Вашего рождения через строчку\n";
    cin >> d;
    cin >> m;
    cin >> y;
    cout << "Введите сегодняшнюю дату через строчку\n";
    cin >> d1;
    cin >> m1;
    cin >> y1;
    if (m1 > m){
        c = y1 - y;
    }
    else if (m1 == m and d1 > d){
        c = y1 - y;
    }
    else{
        c = y1 - y - 1;
    }
    if(c % 10 == 1){
        cout << c << " год";
    }
    else if ((c % 10 > 2) and (c % 10 < 5)){
        cout << c << " года";
    }
    else{
        cout << c << " лет";
    }
    
}