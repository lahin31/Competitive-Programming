#include<iostream>
#include<algorithm>
#include<math.h>
#include<string.h>
#include<cstdio>
#include<cstring>
#define inf 1<<28
using namespace std;
int mat[250][250];
int dp[250][250];
int m;
int call(int i,int j)
{
    if(i>=0 && i<(2*m-1) and j>=0 and j<m)
    {
        if(dp[i][j]!=-1)
        {
            return dp[i][j];
        }
        int ret=-inf;
        ret=max(ret,call(i+1,j)+mat[i][j]);
        ret=max(ret,call(i+1,j+1)+mat[i][j]);
        return dp[i][j]=ret;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int i,j,k=1,p,q,r,s,n;
    cin>>n;
    while(n--)
    {
        cin>>m;
        memset(mat,0,sizeof(mat));
        memset(dp,-1,sizeof(dp));
        s=m*2-1;
        i=0;
        for(i=0;i<m;i++)
        {
            for(j=0;j<=i;j++)
        {
                cin>>mat[i][j];
        }
        }
        for(i=m,q=1;i<s;i++,q++)
        {
            for(j=q;j<m;j+=1)
            {
                cin>>mat[i][j];
            }
        }
        p=call(0,0);
        cout<<"Case "<<k<<": "<<p<<endl;
        k++;
    }
    return 0;
}

