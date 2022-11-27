#include <iostream>
using namespace std;

int main(){
    int day, month, year,  dayofweek, a;
    cout << "Nhap ngay, thang va nam: "; cin >> day >> month >> year;
    if(year<0 || month<0 || month>12 || day<0 || day >31){
        cout << "Khong hop le";
    }
    else{
        switch (month) {
        case 1 :
        case 3 :
        case 5 :
        case 7 :
        case 8 :
        case 10 :
        case 12 :
            if(day>0 && day<=31){
                cout << "Hop le" << "\n";
            }else{
                cout << "Khong hop le"  << "\n";
            }
            break;
        case 4 :
        case 6 :
        case 9 :
        case 11 :
            if(day<=30 && day>0){
                cout << "Hop le" << "\n";
            }
            else{
                cout << "Khong hop le" << "\n";
            }
            break;
        case 2:
            if(day<=28 && day>0){
                cout << "Hop le" << "\n";
            }else{
                cout << "Khong hop le" << "\n";
            }
        default:
            cout << "Khong hop le" << "\n";
        }
    }
    a = (14-month)/12;
    year = year-a;
    month=month+12*a-2;
    dayofweek= (day+year+(year/4)-(year/100)+(year/400)+(31*month)/12)%7;
    if(dayofweek==0){
        cout << "Chu nhat";
    }else{
        cout << "Thu " << dayofweek+1;
    }
    return 0;
}
