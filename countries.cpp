/*

*/
#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int a,b;
		cin>>a>>b;
		int count=0;
		for(int j=a;j<=b;j++)
		{
			int c=0;
			for(int k=1;k<(j/2)+1;k++)
			{
				if(j%k==0)
				{
					c++;
				}
			}
			if((c*2)==2)
			{
				count++;
			}
		}
		cout<<count<<endl;
	}
	return 0;
}