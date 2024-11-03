#include <iostream>
using namespace std;
int f(int n){
    int pr = 1, i = 1;
    while(i <= n){
        pr = pr * i;
        i += 1;
    }
    return pr;
}
int main(){
    int n, m; double s1,s2,s3;
    cout <<"n = "; cin >> n;
    cout <<"m = "; cin >> m;
    s1 = f(n) * f(m);
    s2 = f(n + m);
    s3 = s1 / s2;
    cout <<  s3;

}