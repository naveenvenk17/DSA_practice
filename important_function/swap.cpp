#include<bits/stdc++.h>
using namespace std;

void swap1(int *c, int *d)
{
    int t;
    t=*c;
    *c=*d;
    *d=t;
    
}


int main()
{
    int a,b;
    cin>>a>>b;

    swap1(&a,&b);
    cout<<a<<" "<<b;
    
}