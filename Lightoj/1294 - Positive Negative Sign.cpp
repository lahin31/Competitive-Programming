#include<iostream>
using namespace std;
int main()
{
    long int m=1,p,q,r,t;
    cin>>t;
    while(t--)
    {
        cin>>p>>q;
        r=(p*q)/2;
        cout<<"Case "<<m<<": "<<r<<endl;
        m++;
    }
    return 0;
}
