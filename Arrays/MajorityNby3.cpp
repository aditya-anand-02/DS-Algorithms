class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int, int> mpp;
        vector<int> v;
        for(int i=0;i<nums.size();i++)
        {
            mpp[nums[i]]++;
        }
        if(nums.size()==1)
        {
            v.push_back(nums[0]);
        }
        if(nums.size()==2)
        {
            if(nums[0]==nums[1])
            v.push_back(nums[0]);
            else
            {
                v.push_back(nums[0]);
                v.push_back(nums[1]);
            }
        }
        if(nums.size()>=3)
        {
            for(int i=0;i<nums.size();i++)
            {
                if(mpp[nums[i]]>nums.size()/3)
                {
                   v.push_back(nums[i]);
                   mpp[nums[i]]=0;
                }
            }
            
        }

        // if(v[0]==INT_MIN)
        // v.pop_back();
        return v;
        
    }