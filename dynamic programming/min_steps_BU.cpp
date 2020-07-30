#include <iostream>
#include<algorithm>
using namespace std;
int BU_one(int n)
{
    int dp[100]={0};
    dp[2]=1;
    for(int i=3;i<=n;i++)
    {
        if(i%2==0 and i%3==0)
        {
            dp[i]=min(dp[i/2],min(dp[i-1],dp[i/3]))+1;
        }
        else if(i%2==0)
        {
            dp[i]=min(dp[i/2],dp[i-1])+1;
        }
        else if(i%3==0)
        {
            dp[i]=min(dp[i-1],dp[i/3])+1;
        }
        else{
            dp[i]=dp[i-1]+1;
        }
    }
    return dp[n];
}
int main() {
    int n;
    cin>>n;
    cout<<BU_one(n);
}
