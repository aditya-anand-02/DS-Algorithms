class Solution{
public:
    int remove_duplicate(int a[],int n){
        // code here
        int i=0;
        for(int j=1;j<n;j++)
        {
            if(a[j]!=a[i])
            {
                a[i+1]=a[j];
                i++;
            }
        }
        return i+1;
    }
}; // remove duplicates without hashing 