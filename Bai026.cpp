#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int tuSo, mauSo;
    int rutTuSo, rutMauSo;
    cout << "Nhap tu so, mau so: ";
    cin >> tuSo >>mauSo  ;
    rutTuSo = abs( tuSo );
    rutMauSo = abs( mauSo );
    while ( rutTuSo != rutMauSo )
        if ( rutTuSo > rutMauSo )
        {
            rutTuSo -= rutMauSo ;
        }
        else rutMauSo -= rutTuSo;
    /* Neu tu va mau khac dau, neu mau <0, doi dau tu va mau de dau - chuyen sang tu
    Neu tu va mau cung dau, mau <0, tu <0 thì doi tu va mau de bo dau - */
    tuSo = tuSo /rutTuSo;
    mauSo = mauSo /rutTuSo;
    cout << "Rut gon: " ;
    if ( mauSo < 0 )
    {
        tuSo = -tuSo;
        mauSo = -mauSo;
    }
    if ( mauSo == 1 ) cout <<  tuSo ;
    else cout << tuSo << "/" << mauSo;
    return 0;
}
