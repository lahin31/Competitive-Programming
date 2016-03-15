#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    long long int a,b,i,j,k,p,q,r,c=0;
    while(cin>>a>>b)
    {
        if(a==0 && b==0)break;
        else
        {
            r=0;
            p=0;
            j=b;
            q=a;
            if(a>b)
            {
                a=j;
                b=q;
            }
            for(i=a; i<=b; i++)
            {
                k=i;
                c=0;
                while(1)
                {
                    if(k%2==0)
                    {
                        k=k/2;
                        c++;
                        if(k==1)break;
                    }
                    else
                    {
                        k=(3*k+1);
                        c++;
                        if(k==1)break;
                    }
                }
                if(c>r)
                {
                    r=c;
                    p=i;
                }
            }
            cout<<"Between "<<a<<" and "<<b<<", "<<p<<" generates the longest sequence of "<<r<<" values."<<endl;
        }
    }
    return 0;
}
