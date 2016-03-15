#include<iostream>
#include<string.h>
#include<math.h>
#include<algorithm>
#include<cstdio>
using namespace std;
bool str_cmp(char c1,char c2)
{
    if(tolower(c1)==tolower(c2))
    {
        return c1<c2;
    }
    else
    {
        return tolower(c1)<tolower(c2);
    }
}
int main()
{
    string str;
    int i,j,k,p,q,r;
    cin>>k;
    while(k--)
    {
        cin>>str;
        sort(str.begin(),str.end(),str_cmp);
        do
        {
            cout<<str<<endl;
        }
        while(next_permutation(str.begin(),str.end(),str_cmp));
    }
    return 0;
}

