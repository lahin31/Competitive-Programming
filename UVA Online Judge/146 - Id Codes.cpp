#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string s;
    while(1)
    {
        cin>>s;
        if(s=="#") break;
        if(next_permutation(s.begin(),s.end())==true)
        {
            cout<<s<<endl;
        }
        else
        {
            cout<<"No Successor"<<endl;
        }
    }
    return 0;
}

