#include <iostream>
using namespace std;
int main()
{
    double soDiem, diem1, diem2, diem3;
    char khuVuc;
    unsigned doiTuong;
    cout <<"Nhap diem chuan: ";
    cin >> soDiem;
    cout <<"Nhap diem 3 mon thi: " ;
    cin >>  diem1>> diem2>> diem3 ;
    while ( getchar() != '\n' ) { }
    cout <<"Nhap khu vuc (A, B, C, X): " ;
    cin >> khuVuc ;
    cout <<"Nhap doi tuong (1, 2, 3, 0): " ;
    cin >> doiTuong ;
    if ( diem1 * diem2 * diem3 )
    {
        double tongDiem = diem1 + diem2 + diem3;
        switch ( khuVuc )
        {
        case 'A':
            tongDiem+= 2;
            break;
        case 'B':
            tongDiem+= 1;
            break;
        case 'C':
            tongDiem+= 0.5;
        }
        switch ( doiTuong )
        {
        case 1:
            tongDiem+= 2.5;
            break;
        case 2:
            tongDiem+= 1.5;
            break;
        case 3:
            tongDiem+= 1;
        }
        if (tongDiem>= soDiem )
            cout <<"Dau. So diem la: " << tongDiem;
    }
    else cout <<"Rot" ;
    return 0;
}
