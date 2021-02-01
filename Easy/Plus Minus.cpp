#include <bits/stdc++.h>

using namespace std;

int main()
{
    float r,p=0,n=0,z=0;
    int a[100];
    cin>>r;
    for(int i=0;i<r;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<r;i++)
    {
        if(a[i]>0)
        p++;
        else if(a[i]<0)
        n++;
        else
        z++;
    }
    cout<<p/r<<endl<<n/r<<endl<<z/r;
    return 0;
}
