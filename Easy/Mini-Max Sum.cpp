/*
Given five positive integers, find the minimum and maximum values that can be calculated by summing exactly four of the five integers. Then print the respective minimum and maximum values as a single line of two space-separated long integers.

Example:
arr=[1,3,5,7,9]

The minimum sum is 1+3+5+7=16 and the maximum sum is 3+5+7+9=24. The function prints
16  24
*/

#include <bits/stdc++.h>
#include<iostream>

using namespace std;

int main()
{
    long int a[100], sum=0;
    for(int i=0;i<5;i++)
    cin>>a[i];
    
    int max = a[0], min=a[0];
    
    for(int i=1;i<5;i++)
    {
        if(a[i]>max)
            max=a[i];
    }
    for(int i=1;i<5;i++)
    {
        if(a[i]<min)
            min=a[i];
    }
    for(int i=0;i<5;i++)
    sum+=a[i];
    
    cout<<sum-max<<" "<<sum-min;
    return 0;
}
