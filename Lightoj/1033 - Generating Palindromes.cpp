#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstring>
using namespace std;
int dp[1000][1000];
int main()
{
    string str,rev;
    int t,n,m,i,j,k,l,p=1;
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        cin>>str;
        rev=str;
        reverse(rev.begin(),rev.end());
        for(i=0; i<str.length(); i++)
        {
            dp[0][i]=0;
        }
        for(j=0; j<str.length(); j++)
        {
            dp[j][0]=0;
        }
        for(j=0; j<str.length(); j++)
        {
            for(i=0; i<str.length(); i++)
            {
                if(rev[j]==str[i])
                {
                    dp[j+1][i+1]=(dp[j][i])+1;
                }
                else
                {
                    dp[j+1][i+1]=max(dp[j+1][i],dp[j][i+1]);
                }
            }
        }
        k=str.length()-(dp[j][i]);
        printf("Case %d: %d\n",p,k);
        p++;
    }
    return 0;
}
