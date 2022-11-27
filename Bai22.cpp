#include<iostream>
using namespace std;
int main()
{
    int n;
    long S = 0;
    do
    {
        cout <<"Nhap n>0: ";
        cin >> n;
        if(n <= 0)
        {
            cout <<"Nhap lai!";
        }
    }
    while(n <= 0);
    cout <<"Cac uoc cua n la:";
    for(int i = 1; i <= n; i++)
    {
        if(n % i == 0)
        {
            cout << " " << i;
            S = S + i;
        }
    }
    cout << "\n" << "Tong cac uoc la: " << S;
    return 0;
}


