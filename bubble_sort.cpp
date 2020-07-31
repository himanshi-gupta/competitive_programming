/*
Bubble sort- pushing larger element to the end of the array by pairwise comparison. to sort n elements we need n-1 iterations as at end of n-1 iterations, we have n-1 elements at end of the array , so array is sorted.
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
        for(int j=0;j<=n-1;j++)
        {
            if(a[j]>a[j+1])
            {
                swap(a[j],a[j+1]);
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;

}
