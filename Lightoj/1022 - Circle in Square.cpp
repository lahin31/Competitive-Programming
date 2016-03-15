#include<iostream>
#include<math.h>
#include<cstdio>
using namespace std;
int main()
{
    int n,r=1;
    double d,e,f;
    cin>>n;
    while(n--)
    {
        cin>>d;
        e=4*(d*d);
        f=e-(2*acos(0.0))*(d*d);
        printf("Case %d: %.2lf\n",r,f);
        r++;
    }
    return 0;
}

