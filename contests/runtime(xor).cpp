#include<iostream>
using namespace std;
int main () {
	int n;
	cin>>n;
	int b[100];
	for(int i=0;i<n;i++)
	{
		char a[3];
		int count=0;
		int f=0,l=0;
		for(int j=0;j<3;j++)
		{
			cin>>a[j];
			if(a[j]=='y' || a[j]=='z')
			{
				f=1;
				break;
			}
			if(a[j]=='a'|| a[j]=='e' || a[j]=='i' || a[j]=='o' || a[j]=='u')
			{
				count++;
			}
		}
		if(f==1)
		{
			continue;
		}
		b[l]=count*count;
		l++;
	}
	int count=0;
	for(int i=0;i<n;i++)
	{
        cout<<b[i]<<endl;
		if(b[i]==1)
		{
			count++;
		}
	}
	if(count%2!=0)
	{
		cout<<1;
	}
	else
	{
		cout<<0;
	}
	return 0;
}