#include<iostream>
#include<math.h>
#include<string.h>
#include<cstdio>
#define M 1000000
using namespace std;
bool arr[M];
void primegenerate()
{
    memset(arr,true,sizeof(arr));
    for(int i=2; i<=M; i+=2)
    {
        arr[i]=false;
    }
    for(int i=3; i*i<=M; i++)
    {
        if(arr[i]==true)
        {
            for(int j=i*i; j<=M; j+=i)
            {
                arr[j]=false;
            }
        }
    }
}
int main()
{
    long long i,j,k,p,q,r,n,m;
    primegenerate();
    while(cin>>n)
    {
        if(n==0)break;
        else
        {
            r=1;
            for(i=2; i<=(n-1); i++)
            {
                if(arr[i]==true && arr[n-i]==true)
                {
                    cout<<n<<" = "<<i<<" + "<<n-i<<endl;
                    r=0;
                    break;
                }
            }
            if(r==1)
            {
                cout<<"Goldbach's conjecture is wrong."<<endl;
            }
        }
    }
    return 0;
}

