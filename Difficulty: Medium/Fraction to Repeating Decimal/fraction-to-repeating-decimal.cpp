class Solution {
  public:
    string calculateFraction(int a, int b) {
        // Code here
        string res="";
        int integer=a/b;
        res+=to_string(integer);
        int remainder=a%b;
        if(remainder==0){
            return res;
        }
        res+=".";
        unordered_map<int,int>mp;
        while(remainder!=0){
            if(mp.count(remainder)){
                res.insert(mp[remainder],"(");
                res+=")";
                break;
            }
            mp[remainder]=res.size();
            remainder*=10;
            int digit=remainder/b;
            res+=to_string(digit);
            remainder=remainder%b;
        }
        return res;
    }
};