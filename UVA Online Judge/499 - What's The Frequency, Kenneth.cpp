#include<iostream>
#include<math.h>
#include<string.h>
#include<algorithm>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    char str[1000];
    int arr[52],i,j,k,p,q,r,x,n,m=0;
    while(gets(str))
    {
        k=0;
        for(p=0; p<52; p++)
        {
            arr[p]=0;
        }
        for(k=0; k<strlen(str); k++)
        {
            if(str[k]>='a' && str[k]<='z')
            {
                arr[str[k]-'a'+26]++;
            }
            else if(str[k]>='A' && str[k]<='Z')
            {
                arr[str[k]-'A']++;
            }
        }
        m=0;
        for(i=0; i<52; i++)
        {
            if(arr[i]>m)
            {
                m=arr[i];
            }
        }
        for(j=0; j<52; j++)
        {
            if(arr[j]==m)
            {
                if(j<26)
                {
                    printf("%c",j+'A');
                }
                else
                {
                    printf("%c",'a'+j-26);
                }
            }
        }
        printf(" %d\n",m);
    }
    return 0;
}

