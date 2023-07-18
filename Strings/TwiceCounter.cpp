class Solution
{
    public:
        int countWords(string list[], int n)
        {
           //code here.
           unordered_map<string, int> mpp;
           for(int i=0;i<n;i++)
           {
               mpp[list[i]]++;
           }
           int count=0;
           for(int i=0; i<n;i++)
           {
               if(mpp[list[i]]==2)
               {
                   count++;
                   mpp[list[i]]=0;
               }
           }
           return count;
        }

};