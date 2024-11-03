#include <iostream>
#include <cmath>
using namespace std;
double f(double x1, double y1, double x2, double y2){
    return sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
}
double s3(double x1, double y1, double x2, double y2, double x3, double y3){
    double p;
    p = (f(x1,y1,x2,y2) + f(x2,y2,x3,y3) + f(x3,y3,x1,y1)) / 2;
    return sqrt(p * (p - f(x1,y1,x2,y2)) * (p - f(x2,y2,x3,y3)) * (p - f(x3,y3,x1,y1)));
}
double p4(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4){
    return f(x1,y1,x2,y2) + f(x2,y2,x3,y3) + f(x3, y3, x4, y4) + f(x4, y4, x1, y1);
}
int main(){
    double x1, y1, x2, y2, x3, y3, x4, y4;
    cout <<"x1 = "; cin >> x1;
    cout << "y1 = "; cin >> y1;
    cout <<"x2 = "; cin >> x1;
    cout << "y2 = "; cin >> y1;
    cout << "a) " << f(x1,y1,x2,y2) << endl;
    cout <<"b) R1 = " << f(x1,y1,0,0) << " " << "R2 = " << f(x2,y2,0,0) << endl;
    cout <<"x3 = "; cin >> x3;
    cout << "y3 = "; cin >> y3;
    cout <<"c) S3 = " << s3(x1,y1,x2,y2,x3,y3) << endl;
    cout <<"x4 = "; cin >> x4;
    cout << "y4 = "; cin >> y4;
    cout <<"d) p4 = " << p4(x1,y1,x2,y2,x3,y3,x4,y4);
}