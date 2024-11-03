#include <iostream>
using namespace std;
int main(){
    setlocale(0, "");
    cout << "Обозначение цветов: 1 - желтый, 2 - красный, 3 - синий\n";
    int a[2][4][3], k1, k2, k3, res;
    for (int y = 0; y < 2; y += 1){
        for (int x = 0; x < 4; x += 1){
            for (int z = 0; z < 3; z += 1){
                cin >> a[y][x][z];
                if (a[y][x][z] == 1){
                    k1 += 1;
                }
                else if(a[y][x][z] == 2){
                    k2 += 1;
                }
                else{
                    k3 += 1;
                }
            }
        }
        if (k1 == 12){
            res = 1;
        }
        else if (k2 == 12){
            res = 2;
        }
        else if (k3 == 12){
            res = 3;
        }
        k1 = 0; k2 = 0; k3 = 0;
    }
    k1 = 0; k2 = 0; k3 = 0;
    for(int i = 0; i < 3; i += 2){
        for (int y = 0; y < 2; y += 1){
            for (int x = 0; x < 4; x += 1){
                if (a[y][x][i] == 1){
                        k1 += 1;
                    }
                    else if(a[y][x][i] == 2){
                        k2 += 1;
                    }
                    else{
                        k3 += 1;
                    }
            }
        }
        if (k1 == 8){
                res = 1;
            }
            else if (k2 == 8){
                res = 2;
            }
            else if (k3 == 8){
                res = 3;
            }
            k1 = 0; k2 = 0; k3 = 0;
    }
    k1 = 0; k2 = 0; k3 = 0;
    for (int x = 0; x < 4; x += 3){
        for(int y = 0; y < 2; y += 1){
            for(int z = 0; x < 3; z += 1){
                if (a[y][x][z] == 1){
                        k1 += 1;
                    }
                    else if(a[y][x][z] == 2){
                        k2 += 1;
                    }
                    else{
                        k3 += 1;
                    }
            }
        }
        if (k1 == 6){
                res = 1;
            }
            else if (k2 == 6){
                res = 2;
            }
            else if (k3 == 6){
                res = 3;
            }
            k1 = 0; k2 = 0; k3 = 0;
    }
    cout << res;
    

}
