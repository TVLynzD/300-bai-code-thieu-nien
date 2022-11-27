#include <iostream>
using namespace std;
int main()
{
    unsigned int nTime, week, day, time;
    cout << "Nhap so gio: "; cin >> nTime;
    time = nTime%24;
    nTime = nTime/24;
    day = nTime%7;
    week = nTime/7;
    cout << week << " tuan, " << day << " ngay, " << time << " gio";
    return 0;
}
