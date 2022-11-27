#include <iostream>
using namespace std;
int main()
{
    unsigned n, i = 2,dem;
    cout << "Nhap n: " ;
    cin >> n;
    for(int i = 2; i <= n; i++)
    {
        dem = 0;
        while(n % i == 0)
        {
            ++dem;
            n /= i;
        }
        if(dem)
        {
            if(dem > 1) cout << i << " " << dem;
            else cout << i;
            if(n > i)
            {
                cout << " * ";
            }
        }
    }
    return 0;
}
