#include<iostream>
#include<math.h>
#include<string.h>
#include<algorithm>
#include<cstdio>
using namespace std;
int main()
{
    string str;
    int i,j,k,p,q,e,r,s,n;
    while(cin>>str)
    {
        if(str=="0")break;
        else
        {
            p=str.length();
            s=0;
            for(i=0; i<str.length(); i++)
            {
                s=s+(str[i]-48)*(pow(2,p)-1);
                p--;
            }
            cout<<s<<endl;
        }
    }
}

