class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string str) {
        int ans=0;
        for(int i=0;i<str.length();i++)
        {
            if(str[i]>=48 && str[i]<=57)
            {
                ans++;
            }
        }
        if(ans==str.length()|| str[0]=='-'&& ans==str.length()-1)
        {
            return stoll(str);
        }
        else
        return -1;
    }
};