#include <iostream>
using namespace std;
int main()
{
    int n;
    char can[][5] = {"Canh", "Tan", "Nham", "Quy", "Giap", "At", "Binh", "Dinh", "Mau", "Ky"};
    char chi[][5] = {"Than", "Dau", "Tuat", "Hoi", "Ti", "Suu", "Dan", "Meo", "Thin", "Ty", "Ngo", "Mui"};
    cout << "Nhap nam: "; cin >> n;
    cout << n << " - " << can[n % 10], chi[n % 12];
    cout << "\n" << n + 60 << " - " << can[n % 10], chi[n % 12];
    return 0;
}
