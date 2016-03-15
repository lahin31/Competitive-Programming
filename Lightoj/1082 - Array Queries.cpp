#include<iostream>
#include<algorithm>
#include<math.h>
#include<string.h>
#include<limits.h>
#include<cstdio>
#define M 1500000
using namespace std;
void makeSegtree(long node,long a,long b);
long mrq(long node,long a,long b,long qlow,long qhigh);
long segtree[M],inputArr[M];
int main()
{
    long int n,m,i,j,k,p,q,r,s=1,o;
    int t;
    scanf("%d",&t);
    for(o=1; o<=t; o++)
    {
        scanf("%ld %ld",&p,&q);
        for(i=1; i<=p; i++)
        {
            scanf("%ld",inputArr+i);
        }
        makeSegtree(1,1,p);
        printf("Case %ld:\n",o);
        for(j=1; j<=q; j++)
        {
            scanf("%ld %ld",&n,&m);
            r=mrq(1,1,p,n,m);
            printf("%ld\n",r);
        }
    }
    return 0;
}
void makeSegtree(long node,long a,long b)
{
    if(a==b)
    {
        segtree[node]=inputArr[a];
        return ;
    }
    long int mid=(a+b)/2;
    makeSegtree(node*2,a,mid);
    makeSegtree(node*2+1,mid+1,b);
    segtree[node]=min(segtree[node*2],segtree[node*2+1]);
}
long mrq(long node,long a,long b,long qlow,long qhigh)
{
    if(qlow>b || qhigh<a)
    {
        return INT_MAX;
    }
    if(a>=qlow && b<=qhigh)
    {
        return segtree[node];
    }
    long int mid=(a+b)/2;
    return min(mrq(node*2,a,mid,qlow,qhigh),mrq(node*2+1,mid+1,b,qlow,qhigh));
}
