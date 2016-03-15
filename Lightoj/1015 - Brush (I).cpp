#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int arr[1000],n,i,j,k,m,p,q,r=1,s=0;
    cin>>n;
    while(n--)
    {
        cin>>m;
        s=0,q=0;
        for(i=0; i<m; i++)
        {
            cin>>arr[i];
            k=arr[i];
            if(k>=1 && k<=99)
            {
                s+=k;
            }
        }
        cout<<"Case "<<r<<": "<<s<<endl;
        r++;
    }
    return 0;
}
