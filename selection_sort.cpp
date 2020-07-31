/*
Selection sort- finding the smallest element and swap with ist element and repeat it with remaining array
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
    for(int i=0;i<=n-1;i++)
    {
        int index=i;
        for(int j=i;j<n-1;j++)
        {
            if(a[j]<a[index])
            {
                index=j;
            }
        }
        swap(a[i],a[index]);
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;

}
