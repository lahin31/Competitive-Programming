#include<iostream>
#include<math.h>
#include<string.h>
#define M 100000007
using namespace std;
long dp[100000];
int main()
{
    long int arr[1000],i,a,b,j,k,p,n,m=1;
    cin>>n;
    while(n--)
    {
        cin>>a>>b;
        memset(dp,0,sizeof(dp));
        dp[0]=1;
        for(i=0; i<a; i++)
        {
            cin>>arr[i];
        }
        i=0;
        while(i!=a)
        {
            for(j=0; j<=b; j++)
            {
                if(dp[j]!=0)
                {
                    k=(arr[i]+j);
                    dp[k]=(dp[k]+dp[j])%M;
                }
            }
            i++;
        }
        cout<<"Case "<<m<<": "<<dp[b]%M<<endl;
        m++;
    }
    return 0;
}

