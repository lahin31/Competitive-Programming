#include<iostream>
#include<math.h>
#include<cstdio>
using namespace std;
int main()
{
    long long int t,n,m,k=1,r;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        m=n;
        r=0;
        while(m)
        {
            r=(r*10)+(m%10);
            m/=10;
        }
        if(r==n)
        {
            printf("Case %lld: Yes\n",k);
        }
        else
        {
            printf("Case %lld: No\n",k);
        }
        k++;
    }
    return 0;
}

