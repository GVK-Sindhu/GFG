
class Solution {
  public:
    char nonRepeatingChar(string &s) {
        //  code here
        unordered_map<int,int>freq;
        for(char c:s){
            freq[c]++;
        }
        // vector<char>unique;
        // for(auto it:freq){
        //     if(it.second==1){
        //         unique.push_back(it.first);
        //     }
        // }
        char res='$';
        for(char c:s){
            if(freq[c]==1){
                res=c;
                break;
            }
        }
        return res;
    }
};