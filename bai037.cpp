#include <iostream>
using namespace std;
int main()
{
    int n, s=0, m=1;
    do{
        cout << "Nhap n: "; cin >> n;
    }while(n<=0);
    while(s+m<n){
        cout << m << " + ";
    }
}
