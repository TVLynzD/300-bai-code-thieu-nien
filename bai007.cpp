#include <iostream>
using namespace std;
int main()
{
    double a, b, x;
    cout << "Nhap a, b: "; cin >> a >> b;
    if(a==0){
        if(b==0){
            cout << "Phuong trinh vo so nghiem";
        }else{
            cout << "Phuong trinh vo nghiem";
        }
    }else{
        cout << "x = " << -b/a;
    }
    return 0;
}
