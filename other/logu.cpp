#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout<<endl;
    cout<<"X"<<" "<<"X^0.5"<<" "<<"X^2"<<" "<<"X^3"<<endl;
    int i;
    float a,b,c,d;
    for(i=1;i<=10;i++)
    {
        a=i;
        b=pow(i,0.5);
        c=pow(i,2);
        d=pow(i,3);


        cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
    }
    
}