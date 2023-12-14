#include<bits/stdc++.h>
using namespace std;



void mergew(int a[],int lb, int mid, int ub){
    int i=lb,k=lb,j=mid+1;
    int b[ub+1];
    while(i<=mid && j<=ub){
        if(a[i]<=a[j]){
            b[k]=a[i];
            i++;
        }
        else{
            b[k]=a[j];
            j++;
        }
        k++;
    }
    if(i>mid){
        while(j<=ub){
            b[k]=a[j];
            k++;
            j++;
        }
    }
    if(j>ub){
        while(i<=mid){
            b[k]=a[i];
            i++;
            k++;
        }
    }
    for (k=lb;k<=ub;k++){
        a[k]=b[k];
    }
}

void mergeSort(int a[],int lb,int ub){
    if(lb<ub){
        int mid = (lb+ub)/2;
        mergeSort(a,lb,mid);
        mergeSort(a,mid+1,ub);
        mergew(a,lb,mid,ub);
    }
}

int main()
{
    int arr[] = {2, 34, 2, 324, 234, 9, 7, 5, 2, 21, 45, 63, 1};
    int sz = sizeof(arr) / sizeof(arr[0]);
    mergeSort(arr, 0,sz-1);
    for (int i = 0; i < sz; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
