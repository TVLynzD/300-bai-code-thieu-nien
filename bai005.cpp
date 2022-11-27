#include <iostream>
#include <cmath>
using namespace std;
float tinhDienTich(float xA, float yA, float xB, float yB, float xC, float yC)
{
    float s;
    s = 0.5*abs(xA*yB-xB*yA+xB*yC-xC*yB+xC*yA-xA*yC);
    return s;
}
int main()
{
    double xA, yA, xB, yB, xC, yC, xM, yM, sMAB, sMBC, sMAC, sABC, tongS;
    cout << "A(xA, yA) "; cin >> xA >> yA;
    cout << "B(xB, yB) "; cin >> xB >> yB;
    cout << "C(xC, yC) "; cin >> xC >> yC;
    cout << "M(xM, yM) "; cin >> xM >> yM;
    sMAB = tinhDienTich(xM, yM, xA, yA, xB, yB);
    cout << sMAB << endl;
    sMAC = tinhDienTich(xM, yM, xA, yA, xC, yC);
    cout << sMAC << endl;
    sMBC = tinhDienTich(xM, yM, xB, yB, xC, yC);
    cout << sMBC << endl;
    sABC = tinhDienTich(xA, yA, xB, yB, xC, yC);
    cout << sABC << endl;
    tongS= sMAB + sMAC + sMBC;
    cout << tongS << endl;
    if(tongS>sABC){
        cout << "M nam ngoai canh tam giac ABC";
    }
    else if(tongS==sABC){
        cout << "M nam tren canh tam giac ABC";
    }
    else{
        cout << "M nam trong canh tam giac ABC";
    }
    return 0;
}
