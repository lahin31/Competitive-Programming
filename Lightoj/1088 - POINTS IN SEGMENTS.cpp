#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int arr[100001];
int main()
{
    int n,m,i,j=1,k,p,q,r,s,a,b;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d %d",&p,&q);
        for(i=0; i<p; i+=1)
        {
            scanf("%d",arr+i);
        }
        printf("Case %d:\n",j);
        j++;
        while(q--)
        {
            scanf("%d %d",&r,&s);
            a=lower_bound(arr,arr+p,r)-arr;
            b=upper_bound(arr,arr+p,s)-arr;
            printf("%d\n",(b-a));
        }
    }
    return 0;
}

