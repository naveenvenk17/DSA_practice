#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    k=0;
    cin>>n;

    if(n==0)
    printf("%d is not prime\n",n);

    else if(n==1)
    printf("%d is not prime\n",n);

    else if(n==2)
    printf("%d is prime\n",n);

    else if(n==3)
    printf("%d is prime\n",n);

    else{

    for (int i=4;i*i<=n;i++)
    {
        if(n%i==0)
        {
            k++;
        }
       
    }
    if(k==0)
    printf("%d is a prime\n",n);

    else
    printf("%d is not prime\n",n);
    }
}