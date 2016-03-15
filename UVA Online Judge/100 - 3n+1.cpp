#include<iostream>
#include<math.h>
#include<string.h>
#include<cstdio>
using namespace std;
int main()
{
    long long int a,b,c,i,j,k,p,q,r,s,n,m,x,y;
    while(scanf("%lld %lld",&a,&b)==2){
        n=a;
        m=b;
        p=0;
        q=0;
        x=min(a,b);
        y=max(a,b);
        for(i=x;i<=y;i++){
                k=i;
                p=0;
                  while(k!=1){
                    if(k%2==0){
                            k=k/2;
                            p++;
                    }
                    if(k%2==1 && k!=1){
                            k=(3*k)+1;
                             p++;
                    }
                }
                if(p>q){
                q=p;
            }
                }
                printf("%lld %lld %lld\n",n,m,q+1);
        }
return 0;
    }
