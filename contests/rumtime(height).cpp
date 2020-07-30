#include<iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int n,a[100];
		cin>>n;
		for(int j=0;j<n;j++)
		{
			cin>>a[j];
		}
		int count=1;
		int max=a[0];
		for(int k=1;k<n;k++)
		{
			if(a[k]>=max)
			{
				max=a[k];
				count++;
			}
		}
		cout<<count<<endl;
	}
	return 0;
}