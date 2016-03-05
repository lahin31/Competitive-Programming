#include<iostream>
#include<string.h>
#include<math.h>
#include<algorithm>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    long long m,a[13],i,j,k,l;
    float n;
    while(scanf("%f",&n)==1){
            if(n==0.00)break;
            m=(n*100)+.5;
    a[0]=10000;
    a[1]=5000;
    a[2]=2000;
    a[3]=1000;
    a[4]=500;
    a[5]=200;
    a[6]=100;
    a[7]=50;
    a[8]=20;
    a[9]=10;
    a[10]=5;
    long long dp[50000];
    memset(dp,0,sizeof(dp));
    i=0;
    dp[0]=1;
    while(i<=10){
    for(j=0;j<=m;j++){
            if(dp[j]!=0){
            dp[a[i]+j]=dp[j]+dp[a[i]+j];
        }
    }
    i=i+1;
}
    printf("%6.2f%17lld\n",n,dp[m]);

}
return 0;
}
