class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    
    int majorityElement(int a[], int size)
    {
        
        // your code here
        int hash[1000000]={0};
        int k=size/2;
        int ans=-1;
        for(int i=0;i<size;i++)
        {
            hash[a[i]]++;
            if(hash[a[i]]>k)
            ans=a[i];
        }
        
        return ans;
        
        
        
        
    }
};