//INSERTION SORT
#include <bits/stdc++.h>
using namespace std;
void bubble_sort(int arr[],int n)
{
    int i,j;
    bool swapped;
    for(i=0;i<n;i++)
       {    swapped=false;
           for(j=0;j<n-1;j++)
           {if(arr[j]>arr[j+1])
             {swap(arr[j],arr[j+1]);
             swapped=true;
             }

             }
             if(!swapped)
             return;
       }
    
}


int main()
{
    int n=10;
    int arr[10]={2,5,3,6,1,0,7,9,8,4};
    bubble_sort(arr,n);
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}