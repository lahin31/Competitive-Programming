#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int t,n,arr[50],i,j,temp,sum;
    scanf("%d",&t);
    while(t--)
    {
        sum=0;
        scanf("%d",&n);
        for(i=0; i<n; i++)
        {
            scanf("%d",arr+i);
        }
        for(i=0; i<n-1; i++)
        {
            for(j=i+1; j<n; j++)
            {
                if(arr[i]>arr[j])
                {
                    sum=sum+1;
                    temp=arr[j];
                    arr[j]=arr[i];
                    arr[i]=temp;
                }
            }
        }
        printf("Optimal train swapping takes %d swaps.\n",sum);
    }
    return 0;
}

