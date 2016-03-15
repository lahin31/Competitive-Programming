#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int i,k,j,l,p,q,r,s,arr[1000],n,m=1;
    cin>>n;
    while(n--)
    {
        cin>>p>>q>>r;
        for(i=1; i<=p; i++)
        {
            scanf("%d",arr+i);
        }
        k=0,s=0,i=1;
        while(i<=p&&i<=q)
        {
            s+=arr[i];
            if(s>r)break;
            k++;
            i++;
        }
        cout<<"Case "<<m<<": "<<k<<endl;
        m++;
    }
    return 0;
}
