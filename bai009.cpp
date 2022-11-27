#include <iostream>
#include <cmath>
#define  PI 3.14
using namespace std;
int main()
{
    double x;
    cout << "Nhap so do x cua goc(phut): "; cin >> x;
    x /= 60;
    cout << "x thuoc goc vuong thu " << (int)ceil(x/90)%4 << "\n";
    cout << "cos(x) = " << cos(x*(PI/180));
    return 0;
}
