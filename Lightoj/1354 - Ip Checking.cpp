#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
int main()
{
    long long int n,a,b,c,d,e,f,l,g,h,i,j,k,p,s,r,sum,x,v,w,m,t,z=1;
    cin>>n;
    while(n--)
    {
        scanf("%lld.%lld.%lld.%lld\n%lld.%lld.%lld.%lld",&a,&b,&c,&d,&e,&f,&g,&h);
        s=0,j=1,sum=0,k=1,w=0,x=1,l=1,v=0;
        while(e)
        {
            r=e%10;
            s=s+r*j;
            j=j*2;
            e/=10;
        }
        while(f)
        {
            t=f%10;
            sum=sum+t*k;
            k=k*2;
            f/=10;
        }
        while(g)
        {
            p=g%10;
            w=w+p*x;
            x=x*2;
            g/=10;
        }
        while(h)
        {
            m=h%10;
            v=v+m*l;
            l=l*2;
            h/=10;
        }
        if(s==a && sum==b&& w==c && v==d)
        {
            cout<<"Case "<<z<<": "<<"Yes"<<endl;
        }
        else
        {
            cout<<"Case "<<z<<": "<<"No"<<endl;
        }
        z++;
    }
    return 0;
}
