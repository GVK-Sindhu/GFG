class Solution {
  public:
    string findLongestWord(string &s, vector<string> &d) {
        sort(d.begin(),d.end(),[](string &a,string &b){
            if(a.size()==b.size()){
                return a<b;
            }
            return a.size()>b.size();
        });
        for(int k=0;k<d.size();k++){
            string cur=d[k];
            int i=0,j=0;
            while(i<s.size()){
                if(s[i]==cur[j]){
                    i++;
                    j++;
                }
                else{
                    i++;
                }
            }
            if(j==cur.size()){
                return cur;
            }
        }
        return "";
    }
};