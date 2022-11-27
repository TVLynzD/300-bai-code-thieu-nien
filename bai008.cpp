#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float a, b, c, delta, x1, x2;
    cout << "Nhap a, b, c: "; cin >> a >> b >> c;
    if(a==0){
        if(b==0){
            if(c==0){
                cout << "-> Phuong trinh co vo so nghiem";
            }
            else{
                cout << "-> Phuong trinh vo nghiem";
            }
        }
        else{
            cout << "-> Phuong trinh co mot nghiem duy nhat: " << -c/b;
        }
    }
    else{
        delta = pow(b, 2) - (4*a*c);
        if(delta>0){
            x1=(-b + sqrt(delta))/(2*a);
            x2=(-b - sqrt(delta))/(2*a);
            cout << "x1 = " << x1 << "\n";
            cout << "x2 = " << x2;
        }
        else if(delta==0){
            x1 = x2 = -b/(2*a);
            cout << "-> Phuong trinh co nghiem kep x= " << x1;
        }
        else{
            cout << "Phuong trinh vo nghiem";
        }
    }
    return 0;
}

