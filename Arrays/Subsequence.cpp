class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int N)
    {
      //Your code here
      sort(arr,arr+N);
      if(N==0)
      return 0;
      int longest=1;
      int cntcurr=0;
      int lastsmall=INT_MIN;
      
      for(int i=0;i<N;i++)
      {
         if(arr[i]-1==lastsmall)
         {
             cntcurr++;
             lastsmall=arr[i];
         }
        else if(arr[i]!=lastsmall)
         {
             cntcurr=1;
             lastsmall=arr[i];
         }
         longest=max(longest,cntcurr);
          
      }     
      return longest;
      
      
    }
};