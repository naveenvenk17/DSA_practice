#include <bits/stdc++.h>
using namespace std;
int binary_search(int arr[],int l,int r,int key)
{int m;
    
    while(r>=l)
    {
        m=(l+r)/2;
        if(arr[m]>key) r=m-1;
        else if(arr[m]<key) l=m+1;
        else if(arr[m]==key) return m;
    }
     return -1;
}
int main()
{
    int n=10;
    int arr[10]={0,3,6,12,16,21,33,51,63,94};
    int l=0,r=9,key;
    cin>>key;
    cout<<binary_search(arr,l,r,key)<<endl;
}