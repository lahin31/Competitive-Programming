#include<iostream>
#include<math.h>
using namespace std;
long bigmod(long a,long b,long m)
{
    if(b==0)return 1%m;
    else if(b%2==0)
    {
        int x=bigmod(a,b/2,m);
        return (x*x)%m;
    }
    else
    {
        return ((a%m)*(bigmod(a,b-1,m)))%m;
    }
}
int main()
{
    long int a,b,c,d;
    while(cin>>a>>b>>c)
    {
        d=bigmod(a,b,c);
        cout<<d<<endl;
    }
    return 0;
}
