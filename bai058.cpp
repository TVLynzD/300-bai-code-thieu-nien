#include <iostream>
#include <cmath>
using namespace std;
bool timSNT(int a) // hàm bool trả về true/false
{
    if (a < 2) // Nếu số A nhỏ hơn 2
    {
        return false;// trả về false
    }
    else if (a>2)// Nếu số A lớn hơn 2
    {
        if (a % 2 == 0)  // Xét xem A có chia hết cho 2 không?
        {
            return false;// Nếu chia hết, return false.
        }
        for (int i = 3; i < sqrt((float)a); i += 2)  // xét từ 3 đến căn bậc 2 của số A
        {
            if (a%i == 0)  // nếu A chia hết cho một số nào đó trong đoạn này
            {
                return false;// trả về kết quả sai
            }
        }
    }
    return true;// sau tất cả các chỗ trên, nó mà không sai thì cuối cùng nó đúng :3
}
int main()
{
    int arr[100], n;
    do{
        cout << "Nhap n: "; cin >> n;
    }while(n>100);
    for(int i=2; i<=n; i++){
        if(timSNT(n)==true && timBoiSoCua2(n)==false){
            arr[i]=i;
            cout << arr[i] << " ";
        }
    }
    return 0;
}
