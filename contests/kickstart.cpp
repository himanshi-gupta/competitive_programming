#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int t,n,q;
    cin>>t;
    for(int k=0;k<t;k++)
    {
        cin>>n>>q;
        char ch;
        int a[100];
        for(int j=0;j<n;j++)
        {
            cin>>a[j];
        }
        int s=0;
        for(int j=0;j<q;j++)
        {
            cin>>ch;
            if(ch=='Q')
            {
                int c,d;
                cin>>c>>d;
                for(int i=c;i<=d;i++)
                {
                     s+=pow(-1,i-c)*a[i-1]*(i-c+1);
                }
            }
            else if(ch=='U')
            {
                int x,y;
                cin>>x>>y;
                a[x-1]=y;
            }
        }
        cout<<"case #"<<(k+1)<<": "<<s<<endl;
        
    }
}
