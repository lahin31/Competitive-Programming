#include<iostream>
#include<math.h>
using namespace std;
long a,b,c,d,e,f,n;
int main()
{
    long t,p,q=1,arr[100000],i;
    cin>>t;
    while(t--)
    {
        for(i=0; i<6; i++)
        {
            cin>>arr[i];
        }
        cin>>n;
        for(i=6; i<=n; i++)
        {
            arr[i]=(arr[i-1]+arr[i-2]+arr[i-3]+arr[i-4]+arr[i-5]+arr[i-6])%10000007;
        }
        cout<<"Case "<<q<<": "<<arr[n]%10000007<<endl;
        q++;
    }
    return 0;
}
