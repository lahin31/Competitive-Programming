#include<iostream>
#include<math.h>
#include<cstdio>
using namespace std;
int main()
{
    int n,i,j,k,p,q=1,r,s,m=1;
    int arr[60000];
    for(i=0;; i++)
    {
        cin>>arr[i];
        if(arr[i]==0)
        {
            break;
        }
        else
        {
            if(q==1)
            {
                cout<<"PERFECTION OUTPUT"<<endl;
                q=0;
            }
            k=arr[i];
            r=k;
            s=0;
            for(i=1; i<=k/2; i++)
            {
                if(k%i==0)
                {
                    s+=i;
                }
            }
            if(s==r)
            {
                printf("%5d  PERFECT\n",r);
            }
            else if(s>r)
            {
                printf("%5d  ABUNDANT\n",r);
            }
            else if(s<r)
            {
                printf("%5d  DEFICIENT\n",r);
            }
        }
    }
    if(m==1)
    {
        cout<<"END OF OUTPUT"<<endl;
        m=0;
    }
    return 0;
}
