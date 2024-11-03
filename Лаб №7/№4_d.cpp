#include <iostream>
using namespace std;
void f(int n, int m){
    int kz = 0, k = 0;
    string s = "*";
    for (int l = 0; l < n; l += 1){
        for (int i = 0; i < m; i += 1){
            if (l % 2 == 0){
                s = "*";
            }
        else{
            s = " ";
        }
            for (int j = 0; j < n * m; j += 1){
                if (s == "*"){
                    if (kz < m){
                        cout << "*";
                        kz += 1;
                        if (kz == m){
                            kz = 0;
                        s = " ";
                        }
                    }
                }
                else{
                    if (k < m){
                        cout <<" ";
                        k += 1;
                        if (k == m){
                            k = 0;
                        s = "*";
                        }
                        
                    }
                }


            }
            cout << endl;
        }
    }
}
int main(){
    int n, m;
    cout <<"n = "; cin >> n;
    cout <<"m = "; cin >> m;
    f(n,m);
}