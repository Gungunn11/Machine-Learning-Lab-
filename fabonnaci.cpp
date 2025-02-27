#include<bits/stdc++.h>
using namespace std;
//0 1 1 2 3 5 
int F[10];
int fib(int n)
{
	if (F[n]!=-1) return F[n];
    if (n==0) return F[0]=0;
    if (n==1) return F[1]=1;
 
    else
    {
	F[n] = fib(n-1) + fib(n-2); 
	cout<<n<<" th term is"<< F[n]<<"\n";
    return F[n];
    }
}
 
    int main()
    {
    for(int i=0;i<10;i++) F[i]=-1;
    cout<<fib(2);	
	}
