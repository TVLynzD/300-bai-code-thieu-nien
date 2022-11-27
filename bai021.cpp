#include <iostream>
using namespace std;
int main()
{
    float diemChuan, diem1, diem2, diem3, tongDiem;
    char khuVuc;
    unsigned char doiTuong;
    cout << "Nhap diem chuan: "; cin >> diemChuan;
    cout << "Nhap diem 3 mon thi: "; cin >> diem1 >> diem2 >> diem3;
    cout << "Nhap khu vuc (A, B, C, X): "; cin >> khuVuc;
    cout << "Nhap doi tuong (1, 2, 3, 0): "; cin >> doiTuong;
    tongDiem = diem1+diem2+diem3;
    switch(khuVuc){
    case 'A':
        tongDiem += 2;
        break;
    case 'B':
        tongDiem += 1;
        break;
    case 'C':
        tongDiem += 0.5;
        break;
    case 'X':

    }
    return 0;
}
