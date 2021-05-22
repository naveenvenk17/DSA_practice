#include <bits/stdc++.h>
using namespace std;

void merge(int arr[],int l,int m, int r)
{
    int n1=m+1-l;
    int n2=r+1-(m+1);
    int leftarr[n1];
    int rightarr[n2];
   int i,j,k;
    for(i=0;i<n1;i++)
    {
         leftarr[i]=arr[l+i];
    }
    for( i=0;i<n2;i++)
     {
         rightarr[i]=arr[i+m+1];
     }
       i=0;j=0;k=l;
     while(i<n1 && j<n2)
     {
         if(leftarr[i]<rightarr[j])
         {
             arr[k]=leftarr[i];
             i++;
         }
         else
         {
            arr[k]=rightarr[j];
            j++;
         }
         k++;
     }
     while(i<n1)
     {
         arr[k]=leftarr[i];
          k++;
          i++;
     }
     while(j<n2)
     {
         arr[k]=rightarr[j];
          k++;
          j++;
     }
     return;

}

void mergesort(int arr[],int l,int r)
{   if(l>r)return;
    int m=(l+r)/2;
  
   mergesort(arr,l,m);
   mergesort(arr,m+1,r);
   merge(arr,l,m,r);
   return;
}



int main()
{   int n=10;
    int arr[10]={3,1,7,5,4,9,0,8,6,2};
    int l=0,r=9;
    mergesort(arr,l,r);
    for(int i=0;i<10;i++)
    cout<<arr[i]<<" "<<endl;
}