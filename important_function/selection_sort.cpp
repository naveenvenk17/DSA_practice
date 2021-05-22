#include <bits/stdc++.h>
using namespace std;
void selectionSort(int arr[],int n){
  
    int i,j,idx=0;
    for(i=0;i<n-1;i++)
    {   idx=i;
       
       for(j=i+1;j<n;j++)
       {    
            if(arr[j]<arr[idx])
             { idx=j;
             }
       }
     
    swap(arr[i],arr[idx]);
    }
    cout<<endl;
    return;
}

int main(){

    int arr[10]={3,7,5,0,9,6,1,8,2,4};
    selectionSort(arr,10);
    for(int i=0;i<10;i++)cout<<arr[i]<<" ";



}