#include<iostream>
#include<math.h>
using namespace std;
int steps(int n)
{
	if(n==0)
	{
		return 0;
	}
	int step=0,j=0;
	while(pow(2,j)<n)
	{
		step=j;
		j++;
	}
	return 1+steps(n-pow(2,step));
}
int main() {
	int t;
	for(int i=0;i<t;i++)
	{
		int n;
		cin>>n;
		cout<<steps(n)<<endl;
	}
	return 0;
}