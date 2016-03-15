#include<iostream>
#include<math.h>
#include<string.h>
#include<algorithm>
#include<set>
#include<map>
#include<iomanip>
#include<stack>
#include<queue>
#include<deque>
#include<cstdio>
using namespace std;
int main()
{
    int n,m,i,j,k,p,q;
    string s1;
    cin>>n;
    for(i=1;i<=n;i++){
        cout<<"Case "<<i<<":"<<endl;
        deque<int> d;
        cin>>p>>q;
        while(q--){
            cin>>s1;
            if(s1=="pushLeft"){
                cin>>k;
                if(d.size()==p){
                    cout<<"The queue is full"<<endl;
                }
                else{
                    d.push_front(k);
                    cout<<"Pushed in left: "<<k<<endl;
                }
            }
            else if(s1=="pushRight"){
                cin>>k;
                if(d.size()==p){
                    cout<<"The queue is full"<<endl;
                }
                else{
                    d.push_back(k);
                    cout<<"Pushed in right: "<<k<<endl;
                }
            }
            else if(s1=="popLeft"){
                if(d.size()==0){
                    cout<<"The queue is empty"<<endl;
                }
                else{
                printf("Popped from left: %d\n",d.front());
                    d.pop_front();
                }
            }
            else if(s1=="popRight"){
                if(d.size()==0){
                    cout<<"The queue is empty"<<endl;
                }
                else{
                    printf("Popped from right: %d\n",d.back());
                    d.pop_back();
                }
            }
        }
    }
    return 0;
}

