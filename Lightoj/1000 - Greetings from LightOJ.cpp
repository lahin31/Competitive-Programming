#include<iostream>
using namespace std;
int main()
{
    int a,b,p=1,n;
    cin>>n;
    while(n--){
        cin>>a>>b;
        if(a>=0 && b>=0 && a<=10 && b<=10){
                cout<<"Case "<<p<<": "<<a+b<<endl;
                p++;
        }
    }
    return 0;
}
