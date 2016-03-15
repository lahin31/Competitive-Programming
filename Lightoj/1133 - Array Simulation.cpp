#include<iostream>
#include<math.h>
#include<string.h>
#include<algorithm>
#include<iterator>
using namespace std;
int main()
{
    int arr[1000],i,j,k,e,d,s,m,r,p=1,t,temp,n,x,y,a,b,z;
    string str;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        for(i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        while(m--)
        {
            cin>>str;
            r=0;
            if(str=="S")
            {
                cin>>d;
                for(i=0; i<n; i++)
                {
                    arr[i]=arr[i]+d;
                }
            }
            if(str=="M")
            {
                cin>>e;
                for(i=0; i<n; i++)
                {
                    arr[i]=arr[i]*e;
                }
            }
            else if(str=="D")
            {
                cin>>k;
                if(k!=0)
                {
                    for(i=0; i<n; i++)
                    {
                        arr[i]=arr[i]/k;
                    }
                }
            }
            if(str=="R")
            {
                for(i=0,j=n-1; i<n/2; i++,j--)
                {
                    temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
            if(str=="P")
            {
                cin>>y>>x;
                swap(arr[y],arr[x]);
            }
        }
        cout<<"Case "<<p<<":"<<endl;
        p++;
        for(z=0; z<n; z++)
        {
            cout<<arr[z];
            if(z<n-1){
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}

