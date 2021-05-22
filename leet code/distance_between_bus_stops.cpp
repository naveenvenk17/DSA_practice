#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> distance;
    int start,destination;

    //copy from here
    int sum=accumulate(distance.begin(),distance.end(),0);
    int dist=accumulate(distance.begin()+start,distance.begin()+destination,0);

    int minimum= min(dist,sum-dist);
    
    return minimum;


    


}