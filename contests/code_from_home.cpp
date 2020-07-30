#include<iostream>
using namespace std;
int main () {
	int n;
	cin>>n;
	int a[100];
	int m;
	long long r;
	cin>>r>>m;
	a[0]=r;
	a[1]=m;
	for(int i=1;i<n;i++)
	{
		cin>>r>>m;
		for(int j=0;j<i;j++)
		{
			if(a[j]==r)
			{
				a[i+1]+=m;
			}
			else
			{
				a[j+2]=r;
				a[j+3]=m;
			}
		}
    }
	int x=a[1],pos;
	for(int i=3;i<=2*n;i+=2)
	{
		if(a[i]>x)
		{
			x=a[i];
			pos=i-1;
		}
	}
	cout<<a[pos];
	return 0;
}