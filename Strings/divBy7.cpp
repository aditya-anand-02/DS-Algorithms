class Solution{
  public:
    int isdivisible7(string num){
        //complete the function here
     int rem =0;
        for(int i=0; i<num.length();i++){
            rem= ((rem*10)+(num[i]-'0'))%7;
        }
        return rem==0?1:0;
    }
    
};