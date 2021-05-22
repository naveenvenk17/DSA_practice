int Solution::atoi(const string A) {
    long int n=A.size();
    long int number=0;
    bool sign=false;
    bool digit_occured=false;
    bool negative=false;
    
    
      for(int i=0;i<n;i++)
      {
          if(A[i]>='0' and A[i]<='9')
          {
              digit_occured=true;
              number=(number*10) +(A[i]-'0');
          }
          else if((A[i]=='-' or A[i]=='+') and !sign and !digit_occured)
          {
              sign=true;
              if(A[i]=='-')
              negative = true;
          }
          
          else if(A[i]==' ' and !sign and !digit_occured)
              continue;
          else
             break;
             
          if(number>INT_MAX)
             break;
           
      }
      if(negative)
      number*=-1;
      
      return min(max(number,(long) INT_MIN),(long)INT_MAX);
      
      
}
