class Solution {
  public:
    string reverseWords(string &s) {
    
        vector<string>words;
        string tmp="";
        for(int i=0;i<s.size();i++){
            if(s[i]=='.' ){
                if(!tmp.empty()){
                words.push_back(tmp);
                tmp="";
            }}
            else{
                tmp+=s[i];
            }
        }
        if(!tmp.empty()){
            words.push_back(tmp);
        }
        reverse(words.begin(),words.end());
        string res;
        for(int i=0;i<words.size();i++){
            res+=words[i];
            if(i!=words.size()-1){
                res+='.';
            }
        }
        return res;
    }
};