#include <iostream>
#include <cmath>
using namespace std;
int f(int a){ 
    cout << a << endl;
    if (a == 1){
        return 1;
    }
    
    return f(a - 1);
    
    

}
int main(){
    int n;
    cout <<"n = ";
    cin >> n;
    f(n);
}