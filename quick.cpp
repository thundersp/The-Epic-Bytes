#include<bits/stdc++.h>
using namespace std;

int partition(int A[],int lb,int ub){
    int pivot = A[lb];
    int start=lb,end = ub;
    while(start<end){
        while(A[start]<=pivot){
            start++;
        }
        while(A[end]>pivot){
            end--;
        }
        if(end>start){
            swap(A[end],A[start]);
        }
    }
    if(end < start){
        swap(A[end],A[lb]);
        return end;
    }
}

void QuickSort(int A[], int lb,int ub){
    if(lb<ub){
        int loc=partition(A,lb,ub);
        QuickSort(A,lb,loc-1);
        QuickSort(A,loc+1,ub);
    }
}

int main()
{
    int arr[]={2,34,2,324,234,9,7,5,2,21,45,63,1};
    int sz=sizeof(arr)/sizeof(arr[0]);
    QuickSort(arr,0,sz-1);
    for (int i = 0; i < sz; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
