#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double xC, yC, r, xM, yM, d;
    cout << "Nhap toa do tam C(xC, yC)? "; cin >> xC >> yC;
    cout << "Nhap ban kinh R? "; cin >> r;
    cout << "Nhap toa do M(xM, yM)? "; cin >> xM >> yM;
    d = sqrt(pow(xM-xC,2)+pow(yM-yC,2));
    if(d<r){
        cout << "M nam trong C()";
    }
    else if(d=r){
        cout << "M nam tren C()";
    }
    else{
        cout << "M nam ngoai C()";
    }
    return 0;
}
