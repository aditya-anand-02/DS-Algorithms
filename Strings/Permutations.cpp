class Solution
{
	public:
		vector<string>find_permutation(string S)
		{
		    // Code here 
		    string a1=S;
		    vector<string> ans;
		    ans.push_back(a1);
		    next_permutation(S.begin(), S.end());
		    while(S!=a1)
		    {
		         
		        ans.push_back(S);
		        next_permutation(S.begin(), S.end());
		       
		    }
		    return ans;
		}
};