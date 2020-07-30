#include<iostream>
using namespace std;
int reverse(int a)
{
	int s=0;
	while(a>0)
	{
		int r=a%10;
		s=s*10+r;
		a/=10;
	}
	return s;
}
int main () {
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int n,m;
		cin>>n>>m;
		n=reverse(n);
		m=reverse(m);
        cout<<"n"<<n<<endl;
        cout<<"m"<<m<<endl;
		cout<<reverse(n+m)<<endl;
	}
	return 0;
}