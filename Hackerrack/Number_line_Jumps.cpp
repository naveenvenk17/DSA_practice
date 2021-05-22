#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,a1,a2,d1,d2,n;

    cin>>a1>>d1>>a2>>d2;


    if(a2>a1 && d2>=d1)
    {
        cout<<"NO";
    }

    else 
    {
        n=(a1-a2)%(d2-d1);
        
        if(n==0)
        cout<<"YES";
        else
        cout<<"NO";

    }
}