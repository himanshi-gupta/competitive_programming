/*
quicksort- we choose the pivot element as the last element and divide the array into 2 parts one containing elements less than pivot and one containing
elements greater then pivot  and then place the pivot at the right position. then apply quicksort recursively on the 2 divided arrays leaving 
thepivot element.
*/
#include <iostream>
using namespace std;
int partition(int a[],int s,int e)
{
    int i=s-1;
    int j=s;
    for(;j<=e-1;j++)
    {
        if(a[j]<a[e])
        {
            i+=1;
            swap(a[i],a[j]);
        }
    }
    swap(a[i+1],a[e]);
    return i+1;
}
void quicksort(int a[], int s, int e)
{
    if(s>=e)
    {
        return;
    }
    int p=partition(a,s,e);
    quicksort(a,s,p-1);
    quicksort(a,p+1,e);
}
int main() {
    int n,a[100];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    quicksort(a,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
