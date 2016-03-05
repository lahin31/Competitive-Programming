#include<iostream>
#include<math.h>
#include<iomanip>
#include<algorithm>
#include<cstdio>
using namespace std;
long f(long n,long m)
{
    m=min(m,n-m);
    long p=1,i;
    for(i=1; i<=m; i++)
    {
        p=(p*(n-m+i))/i;
    }
    return p;
}
int main()
{
    long int n,m,p,q;
    while(cin>>n>>m)
    {
        if(n==0 && m==0)break;
        else
        {
            p=f(n,m);
            cout<<p<<endl;
        }
    }
    return 0;
}
