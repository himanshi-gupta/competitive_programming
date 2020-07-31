/*
Given an integer n, write a function that returns count of trailing zeroes in n!.

Input Format
A single integer N.

Constraints
1 <= N <= 10^9

Output Format
A single integer denoting the count of trailing zeroes in N!

Sample Input
5
Sample Output
1
Explanation
Factorial of 5 is 120 which has one trailing 0.
*/
#include<iostream>
using namespace std;
int main () {
	int n;
	cin>>n;
	int m=n/5;
	int s=0;
	while(m>0)
	{
		s+=m;
		m/=5;
	}
	cout<<s;
	return 0;
}