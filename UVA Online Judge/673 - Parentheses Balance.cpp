#include<iostream>
#include<math.h>
#include<string.h>
#include<vector>
#include<stack>
#include<queue>
#include<cstdio>
using namespace std;
int main()
{
    string str;
    int n,i,j,k,p,q,r;
    cin>>n;
    getchar();
    while(n--)
    {
        stack<char> s;
        getline(cin,str);
        k=0,r=0;
        for(i=0; i<str.length(); i++)
        {
            if((str[i]=='(' || str[i]=='['))
            {
                s.push(str[i]);
            }
            if(str[i]==')')
            {
                if(s.empty()==true)
                {
                    r=1;
                    break;
                }
                if(s.top()=='(')
                {
                    s.pop();
                }
            }
            if(str[i]==']')
            {
                if(s.empty()==true)
                {
                    r=1;
                    break;
                }
                if(s.top()=='[')
                {
                    s.pop();
                }
            }
        }
        if(s.empty()==true && r==0)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
}
