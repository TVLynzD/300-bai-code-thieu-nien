#include <iostream>
#include <time.h>
#define MAX 1000
using namespace std;
void tronHoanHao(int arr[], int arrMoi[], int n)
{
    int dem=0;
    for(int i=0; i<n; i++){
        arrMoi[i*2]=arr[i];
        arrMoi[(i%2)+1]=arr[(i/2)+1];
    }
}
void phatSinhMang(int arr[], int n)
{
    srand((unsigned int)time(NULL));
    for(int i=0; i<n; i++)
    {
        arr[i]=rand()%201-100;
    }
}
void xuatMang(int arr[MAX], int n)
{
    for(int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }
}
int main()
{
    int n, arr[MAX], arrMoi[MAX];
    do
    {
        cout << "Nhap n (n chan): ";
        cin >> n;
    }
    while(n%2!=0);
    phatSinhMang(arr, n);
    xuatMang(arr, n);
    tronHoanHao(arr, arrMoi, n);\
    cout << endl;
    xuatMang(arrMoi, n);
    return 0;
}
