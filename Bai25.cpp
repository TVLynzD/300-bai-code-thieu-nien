#include <iostream>
using namespace std;
int timUCLN( int a, int b)
{
    int UCLN,i;
    if (a == 0 || b == 0)
    {
        return a + b;
    }
    while (a != b)
    {
        if (a > b)
        {
            a -= b; // a = a - b
        }
        else
        {
            b -= a;
        }
    }
    return a;
}
int main ()
{
    int soNguyenThuNhat, soNguyenThuHai, UCLN, BCNN ;
    cout << "Nhap so nguyen thu nhat: ", cin >> soNguyenThuNhat;
    cout << "Nhap so nguyen thu hai: ", cin >> soNguyenThuHai;
    UCLN = timUCLN(soNguyenThuNhat, soNguyenThuHai);
    cout << "Uoc chung lon nhat la: "<< UCLN << "\n";
    BCNN = (soNguyenThuNhat * soNguyenThuHai)/ timUCLN(soNguyenThuNhat, soNguyenThuHai);
    cout << "Boi chung nho nhat la: "<< BCNN;
    return 0;
}



