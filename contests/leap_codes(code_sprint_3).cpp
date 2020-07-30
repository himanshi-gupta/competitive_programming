/*
Martin’s professor was teaching him about gray codes, hamming and unit distances etc. Based on the similar concept he introduced him to Leap codes.
A leap code is the one in which all the digits adjacent to one another differ by 1. Say, for example 3456, 9878 etc.
It is know that all one digit numbers are leap codes. Given a number, N, find all the leap codes less than or equal to N.

Input Format
The first line contains the no. of test cases. Then T test cases follow. Each test case consists a positive number N.

Constraints
1 <= T <= 100
1 <= N <= 109

Output Format
For each test case, in a new line, print all the leap codes <= N.

Sample Input
1
50
Sample Output
0 1 2 3 4 5 6 7 8 9 10 12 21 23 32 34 45
*/
#include<iostream>
using namespace std;
int main()
{
    int t,n;
    cin>>t>>n;
    for(int k=0;k<t;k++)
    {
        cin>>n;
        for(int j=1;j<=n;j++)
        {
            int a[100];
            if(j<10)
            {
                cout<<j<<" ";
            }
            else
            {
                int m=j;
                int b=0;
                while(m>0)
                {
                    a[b]=m%10;
                    m/=10;
                    b++;
                }
                int count=0;
                for(int i=0;i<b-1;i++)
                {
                    if(abs(a[i]-a[i+1])==1)
                    {
                        count++;
                    }
                }
                if(count==b-1)
                {
                    cout<<j<<" ";
                }
            }

        }
    }
}