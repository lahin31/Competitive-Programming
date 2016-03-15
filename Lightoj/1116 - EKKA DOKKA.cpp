#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    long long int w,n,m,i,j,k;
    int t,r=1;
    cin>>t;
    while(t--)
    {
        cin>>w;
        if(w%2==1)
        {
            cout<<"Case "<<r<<": Impossible"<<endl;
            r++;
        }
        else
        {
            k=w;
            while(w%2!=1)
            {
                w/=2;
            }
            j=k/w;
            cout<<"Case "<<r<<": "<<w<<" "<<j<<endl;
            r++;
        }
    }
    return 0;
}

