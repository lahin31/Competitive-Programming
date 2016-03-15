#include<iostream>
using namespace std;
int main()
{
    int n,m=1,i,k,j,p,q,r,s,v;
    cin>>n;
    while(n--)
    {
        cin>>p>>q;
        if(p<=q)
        {
            r=(q-p)*4;
            s=(p)*4;
            k=19;
            j=r+s+k;
            cout<<"Case "<<m<<": "<<j<<endl;
            m++;
        }
        else if(p>q)
        {
            r=(p-q)*4;
            v=(p*4)+r;
            k=19;
            j=v+k;
            cout<<"Case "<<m<<": "<<j<<endl;
            m++;
        }
    }
    return 0;
}

