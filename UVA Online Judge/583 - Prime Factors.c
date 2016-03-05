#include<stdio.h>
#include<math.h>
int main()
{
    long n,p,i,r,d,sum,count,ck,sz;
    while(scanf("%ld",&p)!=EOF)
    {
        if(p==0) break;
        ck=0;
        n=p;
        if(p<0)
        {
            n=n*-1;
        }

        sz=sqrt(n);
        for(i=2; i<=sz; i++)
        {
            if(p%i==0)
            {
                ck=1;
                break;
            }
        }
        if(ck==1)
        {
            printf("%ld =",p);
            if(p<0)
            {
                printf(" -1 x");
            }
            for(i=2; i<=n;)
            {
                if(n%i==0)
                {
                    printf(" %ld",i);
                    n=n/i;
                    if(n==1) break;
                    printf(" x");
                }

                else
                {
                    if(i==2)
                    {
                        i=3;
                    }
                    else
                    {
                        i=i+2;
                    }
                }

            }
        }
        else
        {
            if(p<0)
            {
                printf("%ld = -1 x %ld",p,n);
            }
            else
            {
                printf("%ld = %ld",n,n);
            }
        }
        printf("\n");
    }
    return 0;
}
