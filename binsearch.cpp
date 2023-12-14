#include <bits/stdc++.h>
using namespace std;

int bins(int A[], int left, int right, int x)
{
    if (left > right)
    {
        return -1;
    }
    int mid = (left + right) / 2;
    if (A[mid] == x)
    {
        return mid;
    }
    if (A[mid] > x)
    {
        return bins(A, left, mid - 1, x);
    }
    else
    {
        return bins(A, mid + 1, right, x);
    }
}
int main()
{
    int sz;
    cin >> sz;
    int ar[sz];
    for (int i = 0; i < sz; i++)
    {
        cin >> ar[i];
    }
    cout << "Enter number to find: ";
    int x;
    cin >> x;
    cout << bins(ar, 0, sz - 1, x);

    return 0;
}
