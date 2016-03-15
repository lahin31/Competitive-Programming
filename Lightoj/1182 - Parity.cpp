#include<iostream>
#include<math.h>
#include<string.h>
#include<set>
#include<map>
#include<vector>
#include<iomanip>
#include<algorithm>
#include<cstdio>
#define ll long long
using namespace std;
ll convert(ll dec);
int main()
{
    ll arr[10000],c,n,m,i,k,j,p,q,r=1;
    cin>>n;
    while(n--){
        cin>>m;
        p=(m);
        i=0;
        c=0;
        while(p){
            arr[i]=p%2;
            i++;
            p/=2;
        }
        for(j=i-1;j>=0;j--){
            if(arr[j]==1){
                c++;
            }
        }
        if(c%2==0){
            cout<<"Case "<<r<<": even"<<endl;
            r++;
        }
        else{
            cout<<"Case "<<r<<": odd"<<endl;
            r++;
        }
    }
    return 0;
}

