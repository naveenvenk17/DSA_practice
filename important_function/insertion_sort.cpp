#include<bits/stdc++.h>
using namespace std;
void insertion_sort(int arr[],int n)
{
   int i,j,key;
   for(i=1;i<n;i++){
       j=i-1;
       key=arr[i];
    while(j>=0 && arr[j]>key)
    {
        arr[j+1]=arr[j];
        j--;
    }
    arr[j+1]=key;

}
}
int main()
{
    int n=10;
    int arr[10]={5,3,6,1,9,0,7,6,8,2};
    insertion_sort(arr,n);
    for(auto i:arr)
    cout<<i<<" ";
}