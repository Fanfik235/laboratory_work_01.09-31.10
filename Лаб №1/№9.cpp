#include <iostream>
using namespace std;
int main()
{
    setlocale(0,"");
    int N;
    int ch, min, sec;
    cout <<"Сколько секунд прошло с начала суток: ";
    cin >> N;
    ch = N / 3600;
    min = (N % 3600) / 60;
    sec = (N % 3600) % 60;
    cout <<ch<<" ч "<<min<<" мин "<<sec<<" сек";
}