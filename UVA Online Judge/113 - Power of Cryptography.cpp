#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main()
{
    long double i,j,p,q,r;
    while(cin>>p>>q)
    {
        r=exp((log(q)/p));
        cout<<fixed<<setprecision(0)<<r<<endl;
    }
    return 0;
}

