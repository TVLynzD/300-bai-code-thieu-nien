#include <iostream>
using namespace std;
int main()
{
    unsigned long n, t;
    unsigned u, sum = 0, count = 0;
    cout << "Nhap n: ";
    cin >> n;
    t = n;
    do
    {
        count++;
        sum += ( u = t % 10 );
    }
    while ( t /= 10 );
    cout << n << " co " << count << " chu so \n";
    cout << "Chu so cuoi cung la: " << n%10 << "\n";
    cout << "Chu so dau tien la: " << u << "\n";
    cout << "Tong cac chu so la: " << sum << "\n";
    do t = t * 10 + n % 10;
    while ( n /= 10 );
    cout << "So dao nguoc la: " << t ;
    return 0;
}

