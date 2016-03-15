#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n;
    while(n--)
    {
        cin>>m;
        if(m<=20)
        {
            if(m>=0 && m<=10)
            {
                cout<<0<<" "<<m<<endl;
            }
            else
            {
                cout<<m/2<<" "<<m-(m/2)<<endl;
            }
        }
    }
    return 0;
}
