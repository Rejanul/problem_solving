#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a,b,c,ma,mb,mc,wa,wb,wc,w,t;
    cin>>a>>b>>c;
    ma=a%3;
    mb=b%2;
    mc=c%2;
    wa=floor(a/3);
    wb=floor(b/2);
    wc=floor(c/2);
    cout<<wa<<endl;
    if(wa<=wb)
    {
    if(wc<=wa)
    {
        w=wc;
        t=3;
    }
    else
        w=wa;
        t=1;
    }
    else
    {
    if(wc<=wb)
    {
        w=wc;
        t=3;
    }
    else
        w=wb;
        t=2;
    }
    if(t==1)
    {
        cout<<w*7+2<<endl;
    }
    if(t==2)
    {
        cout<<w*7+3<<endl;}
        if(t==3)
    {
        cout<<w*7+4<<endl;
    }

}