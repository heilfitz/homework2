#include <iostream>
using  namespace std;
#define ll long long

int main()
{
    ll n,a,b;
    cin>>n>>a>>b;
    int q=min(min(a,b),min(n-a+1,n-b+1))-1;
    ll tmp=1ll*((4*n-4)+(4*n+4-8*q))*q/2;
    ll ans1,ans2;
    q++;
    if(a==q)
    {
        ans1=tmp+n-2*q+2-1+b-q;
        if(b!=n-q+1)
            ans2=tmp+(n-2*q+2-1)*3+b-q;
        else
            ans2=tmp;
    }
    else if(a==n-q+1)
    {
        if(b!=q)
            ans1=tmp+(n-2*q+2-1)*3+n-q+1-b;
        else
            ans1=tmp;
        ans2=tmp+n-2*q+2-1+n-q+1-b;
    }
    else if(b==q)
    {
        ans1=tmp+n-q+1-a;
        ans2=tmp+(n-2*q+2-1)*2+n-q+1-a;
    }
    else if(b==n-q+1)
    {
        ans1=tmp+(n-2*q+2-1)*2+a-q;
        ans2=tmp+a-q;
    }
    cout<<ans1<<' '<<ans2<<endl;
    return 0;
}