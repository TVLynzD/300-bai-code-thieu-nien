#include <iostream>
#include <cmath>
using namespace std;
void kiemTraTamGiac(int a, int b, int c)
{
    if(a+b<=c || a+c<=b || b+c<=a){
        cout << "Tam giac khong hop le";
    }else{
        if((a==b) && (b==c)){
            cout << "Tam giac deu";
        }
        else if(a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a){
            cout << "Tam giac vuong" << "\n";
        }
        else if(a==b || a==c || b==c){
            cout << "Tam giac can" << "\n";
        }
        else{
            cout <<  "Tam giac thuong" << "\n";
        }
    }
}
int main()
{
    float a, b, c, s, p;
    cout << "Nhap 3 canh tam giac: "; cin >> a >> b >> c;
    kiemTraTamGiac(a, b, c);
    p = (a+b+c)/2;
    s = sqrt(p*(p-a)*(p-b)*(p-c));
    cout << "Dien tich S = " << s;
    return 0;
}
