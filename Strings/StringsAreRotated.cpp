class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    bool isRotated(string str1, string str2)
    {
        // Your code here
        if(str1.length()==1 && str2.length())
        return str1==str2;
        string str3=str1;
        int l=str3.length();
        reverse(str3.begin(),str3.begin()+l-2);
        reverse(str3.begin()+l-2,str3.end());
        reverse(str3.begin(),str3.end());
        reverse(str1.begin(), str1.begin()+2);
        reverse(str1.begin()+2, str1.end());
        reverse(str1.begin(), str1.end());
    
        if(str1==str2 || str2==str3)
        return true;
        else
        return false;
    }

};