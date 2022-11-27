#include <iostream>
using namespace std;
int main()
{
    float a1, a2, b1, b2, c1, c2, d, dx, dy;
    cout << "Nhap a1, b1, c1: "; cin >> a1 >> b1 >> c1;
    cout << "Nhap a2, b2, c2: "; cin >> a2 >> b2 >> c2;
    d = (a1*b2-a2*b1);
    dx = (c1*b2-c2*b1);
    dy = (a1*c2-a2*c1);
    if(d == 0){
        cout << "He phuong trinh vo nghiem";
    }else{
        cout << "x = " << dx/d << "\n";
        cout << "y = " << dy/d;
    }
    return 0;
}
