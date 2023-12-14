#include <bits/stdc++.h>
using namespace std;

void shellSort(int a[], int ub)
{
    for (int gap = (ub + 1) / 2; gap >= 1; gap = gap / 2)
    {
        for (int j = gap; j < ub; j++)
        {
            for (int i = j - gap; i >= 0; i = i - gap)
            {
                if (a[i + gap] > a[i])
                {
                    break;
                }
                else
                {
                    swap(a[i + gap], a[i]);
                }
            }
        }
    }
}

int main()
{
    int arr[] = {2, 34, 2, 324, 234, 9, 7, 5, 2, 21, 45, 63, 1};
    int sz = sizeof(arr) / sizeof(arr[0]);
    shellSort(arr,sz);
    for (int i = 0; i < sz; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
