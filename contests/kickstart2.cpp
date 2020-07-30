#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,k,a[100];
        cin>>n>>k;
        for(int j=0;j<n;j++)
        {
            cin>>a[j];
        }
        int c=0;
        for(int j=0;j<n;j++)
        {
            if(a[j]==k)
            {
                int m=k,b=j,count=0;
                while(m>0)
                {
                    if(a[++b]==(--m))
                    {
                        count++;
                    }
                    else
                    {
                        break;
                    }
                }
                if((count+1)==k)
                {
                    c+=1;
                }
            }
        }
        cout<<"case #"<<(i+1)<<": "<<c<<endl;;
    }
}

