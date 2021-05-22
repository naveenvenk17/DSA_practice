#include<stdio.h>
#include<iostream>
using namespace std;

int square_root(int x)
{ 
    if(x==0 or x==1)
    return x;
   
    int l=1;
    int r=x;
    int mid,ans;
    while(l<=r)
    {   mid=(l+r)/2;
        if((mid*mid)==x)
           return mid;
        
        else if((mid*mid)<x)
        {
            ans=mid;
            l=mid+1;
        }
        else
        {
            r=mid-1;
        }
    }
    return ans;
    
}

int main()
{
    int x;
    cin>>x;
    cout<<square_root(x);
}