#include <iostream>
using namespace std;
void doiViTri(int& a, int& b)
{
    int gan;
    if(a<b){
        gan=a;
        a=b;;
        b=gan;
    }
}
int main()
{
    int a, b, c, gan;
    cout << "Nhap a, b, c: "; cin >> a >> b >> c;
    if(a<b){
        doiViTri(a,b);
    }
    if(b<c){
        doiViTri(b,c);
        }
    if(a<c){
        doiViTri(a,c);
    }
    cout <<  "Tang dan: " << c << " " << b << " " << a;
    return 0;
}
