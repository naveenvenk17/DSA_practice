#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int i,a=0,g,j,num,sum,k,e,square,p,q,l,r,c=0,d;
    cin>>p>>q;
    for(i=p;i<=q;i++)
    {   d=i;
        while(d>0)
        {d=d/10;
        a++;
        }
        g=pow(10,a);

        square=i*i;
        sum=p/g + p%g;

        if(square == sum)
        {
            cout<<i;
            c++;
        }

    }
    if(c==0)
    cout<<"INVALID RANGE";
    return 0;
}