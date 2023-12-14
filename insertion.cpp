#include <bits/stdc++.h>
using namespace std;

void insertionsort(int a[], int sz)
{
    for (int i = 1; i < sz; i++)
    {
        int temp=a[i];
        int j=i-1;
        while(j>=0 && a[j]>temp){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
}

int main()
{
    int arr[] = {2, 34, 2, 324, 234, 9, 7, 5, 2, 21, 45, 63, 1};
    int sz = sizeof(arr) / sizeof(arr[0]);
    insertionsort(arr, sz);
    for (int i = 0; i < sz; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
