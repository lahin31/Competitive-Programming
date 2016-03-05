#include<iostream>
using namespace std;
int dp[150][150];
int temp[150];
int fun(int );
int main()
{
    int n,i,j;
    while(cin>>n){
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                cin>>dp[i][j];
            }
        }
        cout<<fun(n)<<endl;
    }
}
int fun(int n)
{
    int i,j,k=0,p,q,r,l,s=0;
    for(l=0;l<n;l++){
        for(i=0;i<n;i++){
            temp[i]=0;
        }
        for(r=l;r<n;r++){
                k=0;
            for(i=0;i<n;i++){
                temp[i]+=dp[r][i];
                k++;
            }
            p=0,q=temp[0];
            for(j=1;j<k;j++){
                if(q<=0){
                    q=temp[j];
                }
                else{
                    q+=temp[j];
                }
                if(q>=p){
                    p=q;
                }
            }
            if(p>s){
                s=p;
            }
        }
    }
    return s;
}
