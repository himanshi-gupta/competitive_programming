#include<iostream>
using namespace std;
int main() {
	char a[100];
	int i=0;
	cin>>a[i];
	while(a[i]!='\0')
	{
		i++;
		cin>>a[i];
	}
	int m=i-2;
	int j=0;
	while(j<m)
	{
		if(a[j]=='W')
		{
			j+=3;
		}
		else
		{
			cout<<a[j];
			j++;
		}
	}
	return 0;
}