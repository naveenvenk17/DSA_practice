#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a,b,c,d;

    cin>> a>>b;
    int l1=a.size();
    int l2=b.size();

    cout<<l1<<" "<<l2<<endl;
    c=a+b;
    cout<<c<<endl;

    // char ch=a[0];
    // a[0]=b[0];
    // b[0]=ch;
    swap(a[0],b[0]);

    cout<<a<<" "<<b<<endl;


}