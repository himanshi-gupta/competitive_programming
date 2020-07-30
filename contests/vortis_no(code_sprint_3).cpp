/*
The Doctor and the Ponds are on one of their new adventure. They arrive on an alien planet named Vortis. To enter the planet, they must pass a barrier field. Since it is a planet of intelligent people, the barrier field always poses a new puzzle to those who wish to enter.
The TARDIS is a bit malfunctioning these days otherwise it would have answered the puzzle in a second. The Doctor is busy deflecting the attacks of the Daleks. Hence it becomes the Ponds' responsibility to answer. Since the Ponds are not that smart when it comes to puzzle, you need to help them out.
A number is known as a Vortis number if its binary representation contains atleast two consecutive 1's or set bits. For example 7 with binary representation 111 is a Vortis number. Similarly 3 is also a Vortis number as it contains atleast two consecutive set bits or ones.
The puzzle posed by the barrier field is that given an Array of N integers and Q queries. Each query is defined by two integers L,R . You have to output the count of Vortis numbers in the range L to R ( both inclusive ).

Input Format
First line of input contains two integers N and Q.
Next line contains N integers A[i] defining Array elements.
Next Q lines contains queries of type 1 <= L <= R <= N

Constraints
1 <= N <= 10^5
0 <= A[i] <= 10^9
1 <= Q <= 10^5
1 <= L <= R <= N

Output Format
Output Q lines , one for each query.

Sample Input
5 3
3 5 1 12 7
1 3
2 3
1 5
Sample Output
1
0
3
Explanation
In Query 1 range is [1,3] and there is only one number with consecutive set bits is 3; So ans is 1.

In Query 2 range is [2,3] and there is no number with consecutive set bits. So ans is 0.

In Query 3 range is [1,5] and there are 3 numbers with consecutive bits set i.e 3, 7 and 12.
*/

#include<iostream>
using namespace std;
void binary(int a[],int l,int r)
{
	int count=0;
	for(int i=l-1;i<=r-1;i++)
	{
		int b[100];
		int m=a[i],j=0;
		while(m>0)
		{
			if(m==1)
			{
				b[j]=1;
			}
			else
			{
				b[j]=m%2;
			}
			j++;
			m/=2;
		}
		for(int k=0;k<=j-2;k++)
		{
			if(b[k]==1 and b[k+1]==1)
			{
				count++;
				break;
			}
		}
	}
	cout<<count<<endl;
}
int main () {
	int n,q,a[100],l,r;
	cin>>n>>q;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<q;i++)
	{
		cin>>l>>r;
		binary(a,l,r);
	}
	return 0;
}