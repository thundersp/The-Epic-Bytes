#include<bits/stdc++.h>
using namespace std;

int getmax(int a[],int sz){
    int temp=a[0];
    for(int i=1;i<sz;i++){
        temp=max(temp,a[i]);
    }
    return temp;
}

void countSort(int a[],int sz,int pos){
    int count[10]={0};
    int b[sz];
    for(int i=0;i<sz;i++){
        ++count[(a[i]/pos)%10];
    }
    for(int i=1;i<sz;i++){
        count[i]=count[i]+count[i-1];
    }
    for(int i = sz-1;i>=0;i--){
        b[--count[(a[i]/pos)%10]]=a[i];
    }
    for(int i=0;i<sz;i++){
        a[i]=b[i];
    }
    cout<<"";
}

void radixSort(int a[],int n){
    int max = getmax(a,n);
    for(int pos = 1; max/pos>0;pos=pos*10){
        countSort(a,n,pos);
    }
}

int main()
{
    int arr[] = {2, 34, 2, 4324, 234, 9, 7, 5, 2, 21, 45, 63, 1};
    int sz = sizeof(arr) / sizeof(arr[0]);
    radixSort(arr,sz);
    for (int i = 0; i < sz; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
