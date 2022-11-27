#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double s, v, r;
    const double PI = 3.141593;
    do{
        cout << "Nhap dien tich: ";  cin >> s;
    }while(s<=0);
    r = sqrt(s/(4*PI));
    v = ((4*PI)/3)*pow(r, 3);
    cout << "The tich V = "<< v;
    return 0;
}
