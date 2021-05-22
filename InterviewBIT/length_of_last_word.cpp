int Solution::lengthOfLastWord(const string A) {
    
    int i,n=A.length();
    
    for(i=n-1;i>=0;i--)
    {
        if(A[i]!=' ')
        break;
    }
    n=i+1;
    for(i;i>=0;i--)
    {
        if(A[i]==' ')
        break;
    }
    return n-i-1;
}
