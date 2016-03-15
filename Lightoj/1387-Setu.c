#include<stdio.h>
#include<string.h>
int main()
{
    long long int n,d,sum=0,k,u=1,p;
    char ch[1000];
    scanf("%lld",&n);
    while(n--)
    {
        scanf("%lld",&k);
        sum=0,p=1;
        while(k--)
        {
            scanf("%s",ch);
            if(strcmp(ch,"donate")==0)
            {
                scanf("%lld",&d);
                sum=sum+d;
            }
            else
            {
                if(p==1)
                {
                    printf("Case %lld:\n",u);
                    u++;
                }
                p=0;
                printf("%lld\n",sum);
            }
        }
    }
    return 0;
}

