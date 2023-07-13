bool isFrequencyUnique(int n, int arr[])
    {
        set<int> s1;
        for(int i=0;i<n;i++)
        {
            s1.insert(arr[i]);
        }
       
            unordered_map<int, int> mpp;
            for(int i=0;i<n;i++){
                mpp[arr[i]]++;
            }
            set<int> s;
        for(int i=0;i<n;i++)
        {
            s.insert(mpp[arr[i]]);
        }
        if (s.size()==s1.size())
        return true;
        else
        return false;
    }