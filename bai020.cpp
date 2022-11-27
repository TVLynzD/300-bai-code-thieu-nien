#include <iostream>
using namespace std;
int main()
{
    unsigned kW, tien;
    cout << "Nhap so kW tieu thu: "; cin >> kW;
    if(kW>0 && kW<100){
        tien = kW*500;
        cout << "Chi phi: " << tien;
    }
    else if(kW>=100 && kW<250){
        tien = kW*800;
        cout << "Chi phi: " << tien;
    }
    else if(kW>=250 && kW<350){
        tien = kW*1000;
        cout << "Chi phi: " << tien;
    }
    else if(kW>=350){
        tien = kW*1500;
        cout << "Chi phi: " << tien;
    }
    return 0;
}
