#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double xA, yA, xB, yB, d;
    cout << "A(xA, yA)? "; cin >> xA >> yA;
    cout << "B(xB, yB)? "; cin >> xB >> yB;
    d = sqrt(pow(xB-xA,2)+pow(yB-yA,2));
    cout << d;
    return 0;
}
