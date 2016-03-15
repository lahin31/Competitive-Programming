#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
long double nCr(long double n)
{
    long double i,k=1;
    for(i=2; i<=n; i++)
    {
        k=k*i;
    }
    return k;
}
int main()
{
    long double n,m,i,j,p;
    while(cin>>n>>m)
    {
        if(n==0 && m==0)break;
        else
        {
            p=(nCr(n))/((nCr(n-m))*nCr(m));
            cout<<n<<" things taken "<<m<<" at a time is "<<fixed<< setprecision(0)<<p<<" exactly."<<endl;
        }
    }
    return 0;
}

