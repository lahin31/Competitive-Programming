#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    long long int n,a,b,c,d,e,i,j,k=1;
    cin>>n;
    while(n--)
    {
        cin>>a>>b>>c;
        if(a>b && a>c)
        {
            d=(a*a);
            e=(b*b)+(c*c);
            if(d==e)
            {
                cout<<"Case "<<k<<": yes"<<endl;
                k++;
            }
            else
            {
                cout<<"Case "<<k<<": no"<<endl;
                k++;
            }
        }
        if(b>a && b>c)
        {
            d=(b*b);
            e=(a*a)+(c*c);
            if(d==e)
            {
                cout<<"Case "<<k<<": yes"<<endl;
                k++;
            }
            else
            {
                cout<<"Case "<<k<<": no"<<endl;
                k++;
            }
        }
        if(c>b && a<c)
        {
            d=(c*c);
            e=(b*b)+(a*a);
            if(d==e)
            {
                cout<<"Case "<<k<<": yes"<<endl;
                k++;
            }
            else
            {
                cout<<"Case "<<k<<": no"<<endl;
                k++;
            }
        }
    }
    return 0;
}

