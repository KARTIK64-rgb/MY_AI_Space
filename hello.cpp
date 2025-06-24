#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,x,y;
        cin>>a>>x>>y;
        int mini=min(x,y);
        int maxi=max(x,y);
        if(a>mini && a< maxi)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
    }
}