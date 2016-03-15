#include<iostream>
#include<math.h>
#include<string.h>
#include<cstdlib>
using namespace std;
int main()
{
    long long int a,b,n,i,j,k,p,q,r=1;
    string str;
    cin>>n;
    while(n--){
    cin>>str>>a;
    if(str[0]=='-'){
        k=0;
    for(i=1;i<str.length();i++){
        k=(k*10+(str[i]-'0'));
        k=k%a;
    }
    if(k==0){
        cout<<"Case "<<r<<": divisible"<<endl;
        r++;
    }
    else{
        cout<<"Case "<<r<<": not divisible"<<endl;
        r++;
    }
    }
    else{
        k=0;
    for(i=0;i<str.length();i++){
        k=(k*10+(str[i]-'0'));
        k=k%a;
    }
    if(k==0){
        cout<<"Case "<<r<<": divisible"<<endl;
        r++;
    }
    else{
        cout<<"Case "<<r<<": not divisible"<<endl;
        r++;
    }
    }
}
return 0;
}

