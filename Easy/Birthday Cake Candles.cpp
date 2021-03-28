#include<iostream>
using namespace std;

int main(){
    long int n, c=0,a[1000000],max = 0;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        if(max<a[i])
            max=a[i];
    }
    for(int i=0; i<n; i++)
    {
        if(max==a[i])
            ++c;
    }
    cout<<c;
    return 0;
}
