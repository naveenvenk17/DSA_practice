string Solution::solve(string A) {
    
    int n=A.size();
    string str="";
    string rev="";
    int i=0,j=0;
    while(i<n)
    {
        if(A[i]!=' ')
        {
            str+=A[i];
          //  cout<<"str ="<<str<<endl;
        }
        else 
        {  // cout<<"str before adding to rev ="<<str<<endl;
            rev=str+rev;
            //cout<<"current rev ="<<rev<<endl;
             str="";
            if(A[i]==' ' and A[i-1]!=' ')
            rev=' '+rev;
        }
        i++;
    }
    rev=str+rev;
    n=rev.size();
    
   while(1)
   {
       if(rev[0]==' ')rev.erase(rev.begin());
       else break;
   }
   
   reverse(rev.begin(),rev.end());
   while(1)
   {
       if(rev[0]==' ')rev.erase(rev.begin());
       else break;
   }
   reverse(rev.begin(),rev.end());
    
    return rev;
}
