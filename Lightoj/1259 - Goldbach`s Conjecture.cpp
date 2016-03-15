#include<iostream>
#include<math.h>
#include<string.h>
#include<cstdio>
using namespace std;
bool table[10000000];
int prime[1000000];
void sieve()
{
    memset(table,0,sizeof(table));
    table[0]=table[1]=1;
    int i,j;
    for(i=4; i<=10000000; i+=2)table[i]=1;
    for(i=3; i*i<=10000000; i+=2)
    {
        if(table[i]==0)
        {
            for(j=i*i; j<=10000000; j+=i)
            {
                table[j]=1;
            }
        }
    }
    prime[0]=2,j=0;
    for(i=3; i<10000000; i+=2)
    {
        if(table[i]==0)
        {
            prime[++j]=i;
        }
    }
}
int main()
{
    sieve();
    int i,j,n,m,p=1,c;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&m);
        c=0;
        for(i=0; prime[i]<=(m/2); i++)
        {
            if(table[m-prime[i]]==0)
            {
                c++;
            }
        }
        printf("Case %d: %d\n",p,c);
        p++;
    }
    return 0;
}
