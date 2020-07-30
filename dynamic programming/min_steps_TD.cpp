#include <iostream>
#include<algorithm>
using namespace std;
int BU_one(int n)
{
    int dp[100]={0};
    if(n==1)
    {
        return 0;
    }
    if(dp[n]!=0)
    {
        return dp[n];
    }
    if(n%2==0 and n%3==0)
    {
        dp[n]=min(BU_one(n/2),min(BU_one(n-1),BU_one(n/3)))+1;
    }
    else if(n%2==0)
    {
        dp[n]=min(BU_one(n/2),BU_one(n-1))+1;
    }
    else if(n%3==0)
    {
        dp[n]=min(BU_one(n-1),BU_one(n/3))+1;
    }
    else{
        dp[n]=BU_one(n-1)+1;
    }
    return dp[n];
}
int main() {
    int n;
    cin>>n;
    cout<<BU_one(n);
}
