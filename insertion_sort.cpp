/*
Insertion sort- ist element is considered to be sorted, and then we insert the remaining elements in sorted array by comaring backwards and shifting the elements .
*/
#include <iostream>
using namespace std;
int main() {
    int n, a[100];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<=n-1;i++)
    {
        int e=a[i];
        int j=i-1;
        while(j>=0 and e<a[j])
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=e;
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;

}
