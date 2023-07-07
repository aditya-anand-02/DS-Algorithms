class ParenthesisChecker
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        // Your code here  {([)}])
      
        stack<int> st;
        for(int i=0;i<x.length();i++)
        {
            if(x[i]=='('||x[i]=='['||x[i]=='{')
            {
                st.push(x[i]);
            }                  // ({)]{)}})
            else
            {
                if((st.empty()) || (x[i]==')' && st.top()!='('))
                return false;
                if((st.empty()) || (x[i]=='}' && st.top()!='{'))
                return false;
                if((st.empty()) || (x[i]==']' && st.top()!='['))
                return false;
                
            st.pop();
            }
            
        }
        return st.empty() ;
        
        
    }

};