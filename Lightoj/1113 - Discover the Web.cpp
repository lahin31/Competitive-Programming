#include<iostream>
#include<math.h>
#include<string.h>
#include<algorithm>
#include<set>
#include<iomanip>
#include<stack>
#include<queue>
#include<vector>
#include<cstdio>
using namespace std;
int main()
{
    int i,j,k,p,q,r;
    string s1,s2;
    cin>>p;
    for(i=1; i<=p; i++)
    {
        cout<<"Case "<<i<<":"<<endl;
        stack<string> b,f;
        s2="http://www.lightoj.com/";
        while(cin>>s1)
        {
            if(s1=="QUIT")
            {
                break;
            }
            else if(s1=="VISIT")
            {
                b.push(s2);
                cin>>s2;
                cout<<s2<<endl;
                while(!f.empty())
                {
                    f.pop();
                }
            }
            else if(s1=="BACK")
            {
                if(b.empty()==true)
                {
                    cout<<"Ignored"<<endl;

                }
                else
                {
                    f.push(s2);
                    s2=b.top();
                    b.pop();
                    cout<<s2<<endl;
                }
            }
            else if(s1=="FORWARD")
            {
                if(f.empty()==true)
                {
                    cout<<"Ignored"<<endl;
                }
                else
                {
                    b.push(s2);
                    s2=f.top();
                    f.pop();
                    cout<<s2<<endl;
                }
            }
        }
    }
    return 0;
}
