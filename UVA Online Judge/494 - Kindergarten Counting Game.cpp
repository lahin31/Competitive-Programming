#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string str;
    int i,j,k,p,q,r=0,s=0;
    while(getline(cin,str,'\n'))
    {
        r=0;
        s=0;
        for(i=0; i<str.length(); i++)
        {
            if((str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z'))
            {
                if(r!=1)
                {
                    s=s+1;
                    r=1;
                }
            }
            else
            {
                r=0;
            }
        }
        cout<<s<<endl;
        s=0;
    }
    return 0;
}


