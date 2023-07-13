/*The structure of the class is
class SortedStack{
public:
	stack<int> s;
	void sort();
};
*/

/* The below method sorts the stack s 
you are required to complete the below method */
void SortedStack :: sort()
{
   //Your code here
   vector<int> v;
   while(!s.empty())
   {
       v.push_back(s.top());
       s.pop();
   }
   for(int i=0;i<v.size();i++)
   {
       for(int j=0;j<v.size()-i-1;j++)
       {
           if(v[j]>v[j+1])
           {
               int temp=v[j];
               v[j]=v[j+1];
               v[j+1]=temp;
           }
       }
   }
   
   for(int i=0;i<v.size();i++)
   {
       s.push(v[i]);
   }
}