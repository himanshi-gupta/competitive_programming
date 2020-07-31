/*
Merge sort- we divide array in 2 parts and apply merge sort recursively on the divided array and merge the array from bottom to top.
*/
#include <iostream>
using namespace std;
void merge(int beg,int end,int a[])
{
    int mid=(beg+end)/2;
    int i=beg;
    int j=mid+1;
    int k=beg;
    int temp[100];
    while(i<=mid and j<=end)
    {
        if(a[i]<a[j])
        {
            temp[k++]=a[i++];
        }
        else
        {
            temp[k++]=a[j++];
        }
    }
    while(i<=mid)
    {
        temp[k++]=a[i++];
    }
    while(j<=end)
    {
        temp[k++]=a[j++];
    }
    for(int i=beg;i<=end;i++)
    {
        a[i]=temp[i];
    }

}
void mergesort(int beg,int end,int a[])
{
    if(beg>=end)
    {
        return;
    }
    int mid=(beg+end)/2;
    mergesort(beg,mid,a);
    mergesort(mid+1,end,a);
    merge(beg,end,a);
}
int main() {
    int n,a[100];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    mergesort(0,n-1,a);
    for(int i=0;i<n;i++)
    {
        cout<<a[i];
    }
}
