#include<iostream>
#include<math.h>
#include<string.h>
#include<cstdio>
using namespace std;
bool isPrime(int n)
{
    if(n<=1)return false;
    for(int i=2; i<=sqrt(n); i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    long int n,i,j,k,p,q,r,s=0;
    while(cin>>n)
    {
        if(n==0)break;
        else
        {
            s=0;
            for(i=2; i<=n/2; i++)
            {
                if(isPrime(i)==true && isPrime(n-i)==true)
                {
                    s++;
                }
            }
            cout<<s<<endl;
        }
    }
    return 0;
}

