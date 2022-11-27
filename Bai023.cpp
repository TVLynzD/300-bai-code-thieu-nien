#include <iostream>
#include <cmath>
using namespace std;
bool kt_soHoanHao(int n)
{
    if(n<2) return false;
    int bienDem = 1;
    int soKetThuc = sqrt(n);
    for(int i = 2; i <= soKetThuc; i++)
    {
        if(n%i == 0)
        {
            bienDem = bienDem + (i + (n/i));
        }
    }
    if (bienDem==n)
        return true;
    else return false;
}
int main()
{
    int n;
    cout << "Nhap n: ";
    do
    {
        cin >> n ;
    }
    while (n<=0 );
    cout << "Cac so hoan hao nho hon " << n << " la: \n";
    for(int i=0; i<n; i++)
    {
        if(kt_soHoanHao(i)) cout <<  i << " ";
    }
}
