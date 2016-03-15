#include<iostream>
#include<string.h>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    string str;
    int n,i,j,k,p,q,r,s,t;
    while(getline(cin,str,'\n'))
    {
        i=0,p=0;
        for(; i<str.length(); i++)
        {
            if(str[i]!=' ')
            {
                while(str[i+p]!=' ' && (i+p)<str.length())
                {
                    p++;
                }
                for(j=(i+p)-1; j>=i; j--)
                {
                    cout<<str[j];
                }
                i+=(p-1);
            }
            else
            {
                cout<<str[i];
            }
        }
        cout<<endl;
    }
    return 0;
}
