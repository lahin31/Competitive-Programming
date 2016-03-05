#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    char ch1[100],ch2[100];
    int n,m,i,j,k,l,lan1,lan2,sum,total,sum1,sum2,p,q,r,r1;
    float u,v,rat,lov;
    while(gets(ch1) && gets(ch2))
    {
        lan1=strlen(ch1);
        lan2=strlen(ch2);
        sum=0,total=0;
        for(i=0; i<lan1; i++)
        {
            if(ch1[i]=='A' || ch1[i]=='a')
            {
                sum+=1;
            }
            if(ch1[i]=='B' || ch1[i]=='b')
            {
                sum+=2;
            }
            if(ch1[i]=='C' || ch1[i]=='c')
            {
                sum+=3;
            }
            if(ch1[i]=='D' || ch1[i]=='d')
            {
                sum+=4;
            }
            if(ch1[i]=='E' || ch1[i]=='e')
            {
                sum+=5;
            }
            if(ch1[i]=='F' || ch1[i]=='f')
            {
                sum+=6;
            }
            if(ch1[i]=='G' || ch1[i]=='g')
            {
                sum+=7;
            }
            if(ch1[i]=='H' || ch1[i]=='h')
            {
                sum+=8;
            }
            if(ch1[i]=='I' || ch1[i]=='i')
            {
                sum+=9;
            }
            if(ch1[i]=='J' || ch1[i]=='j')
            {
                sum+=10;
            }
            if(ch1[i]=='K' || ch1[i]=='k')
            {
                sum+=11;
            }
            if(ch1[i]=='L' || ch1[i]=='l')
            {
                sum+=12;
            }
            if(ch1[i]=='M' || ch1[i]=='m')
            {
                sum+=13;
            }
            if(ch1[i]=='N' || ch1[i]=='n')
            {
                sum+=14;
            }
            if(ch1[i]=='O' || ch1[i]=='o')
            {
                sum+=15;
            }
            if(ch1[i]=='P' || ch1[i]=='p')
            {
                sum+=16;
            }
            if(ch1[i]=='Q' || ch1[i]=='q')
            {
                sum+=17;
            }
            if(ch1[i]=='R' || ch1[i]=='r')
            {
                sum+=18;
            }
            if(ch1[i]=='S' || ch1[i]=='s')
            {
                sum+=19;
            }
            if(ch1[i]=='T' || ch1[i]=='t')
            {
                sum+=20;
            }
            if(ch1[i]=='U' || ch1[i]=='u')
            {
                sum+=21;
            }
            if(ch1[i]=='V' || ch1[i]=='v')
            {
                sum+=22;
            }
            if(ch1[i]=='W' || ch1[i]=='w')
            {
                sum+=23;
            }
            if(ch1[i]=='X' || ch1[i]=='x')
            {
                sum+=24;
            }
            if(ch1[i]=='Y' || ch1[i]=='y')
            {
                sum+=25;
            }
            if(ch1[i]=='Z' || ch1[i]=='z')
            {
                sum+=26;
            }
        }
        for(j=0; j<lan2; j++)
        {
            if(ch2[j]=='A' || ch2[j]=='a')
            {
                total+=1;
            }
            if(ch2[j]=='B' || ch2[j]=='b')
            {
                total+=2;
            }
            if(ch2[j]=='C' || ch2[j]=='c')
            {
                total+=3;
            }
            if(ch2[j]=='D' || ch2[j]=='d')
            {
                total+=4;
            }
            if(ch2[j]=='E' || ch2[j]=='e')
            {
                total+=5;
            }
            if(ch2[j]=='F' || ch2[j]=='f')
            {
                total+=6;
            }
            if(ch2[j]=='G' || ch2[j]=='g')
            {
                total+=7;
            }
            if(ch2[j]=='H' || ch2[j]=='h')
            {
                total+=8;
            }
            if(ch2[j]=='I' || ch2[j]=='i')
            {
                total+=9;
            }
            if(ch2[j]=='J' || ch2[j]=='j')
            {
                total+=10;
            }
            if(ch2[j]=='K' || ch2[j]=='k')
            {
                total+=11;
            }
            if(ch2[j]=='L' || ch2[j]=='l')
            {
                total+=12;
            }
            if(ch2[j]=='M' || ch2[j]=='m')
            {
                total+=13;
            }
            if(ch2[j]=='N' || ch2[j]=='n')
            {
                total+=14;
            }
            if(ch2[j]=='O' || ch2[j]=='o')
            {
                total+=15;
            }
            if(ch2[j]=='P' || ch2[j]=='p')
            {
                total+=16;
            }
            if(ch2[j]=='Q' || ch2[j]=='q')
            {
                total+=17;
            }
            if(ch2[j]=='R' || ch2[j]=='r')
            {
                total+=18;
            }
            if(ch2[j]=='S' || ch2[j]=='s')
            {
                total+=19;
            }
            if(ch2[j]=='T' || ch2[j]=='t')
            {
                total+=20;
            }
            if(ch2[j]=='U' || ch2[j]=='u')
            {
                total+=21;
            }
            if(ch2[j]=='V' || ch2[j]=='v')
            {
                total+=22;
            }
            if(ch2[j]=='W' || ch2[j]=='w')
            {
                total+=23;
            }
            if(ch2[j]=='X' || ch2[j]=='x')
            {
                total+=24;
            }
            if(ch2[j]=='Y' || ch2[j]=='y')
            {
                total+=25;
            }
            if(ch2[j]=='Z' || ch2[j]=='z')
            {
                total+=26;
            }
        }
        p=sum;
        while(p>9)
        {
            sum1=0;
            while(p!=0)
            {
                r=p%10;
                p=p/10;
                sum1=sum1+r;
            }
            p=sum1;
        }
        q=total;
        while(q>9)
        {
            sum2=0;
            while(q!=0)
            {
                r1=q%10;
                q=q/10;
                sum2=sum2+r1;
            }
            q=sum2;
        }
        u=p;
        v=q;
        if(u>v)
            rat=v/u;
        if(u<v)
            rat=u/v;
        if(u==v)
            rat=u/v;
        lov=rat*100;
        printf("%.2f %%\n",lov);

    }
    return 0;
}

