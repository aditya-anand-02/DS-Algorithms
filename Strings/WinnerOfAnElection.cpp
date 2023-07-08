 vector<string> winner(string arr[],int n)
    {
        // Your code here
        // Return the string containing the name and an integer
        // representing the number of votes the winning candidate got
       unordered_map<string, int> mpp;
       sort(arr,arr+n);
       for(int i=0;i<n;i++)
       {
           mpp[arr[i]]++;
       }
       vector<string> ans;
       int max=INT_MIN;
       string strmax;
       for(int i=0;i<n;i++)
       {
           if(mpp[arr[i]]>max)
           {
               max=mpp[arr[i]];
               strmax=arr[i];
               
           }
       }
       if(max==1)
       {
           ans.push_back(arr[0]);
           ans.push_back(to_string(1));
       }
       else
       {
           string s=to_string(max);
       ans.push_back(strmax);
       ans.push_back(s);
       }
       return ans;
    }
};