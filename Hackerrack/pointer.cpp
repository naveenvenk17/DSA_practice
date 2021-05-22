#include <bits/stdc++.h>
using namespace std ;
void update(int *a,int *b)
{
   int s,d;
   s= *a + *b;
   d= *a - *b >0 ? *a-*b : *b - *a;

   *a=s;
   *b=d;
}
int main()
{
   int a,b;
   cin>>a;
   cin>>b;

   update(&a,&b);

printf( "%c\n%c", a,b);


return 0; 
}
