class Solution {
  public:
    bool wildCard(string &txt, string &pat) {
        int i=0,j=0;
        int startidx=-1,match=0;
        while(i<txt.size()){
            if(j<pat.size() && pat[j]==txt[i] || pat[j]=='?'){
                i++;
                j++;
            }
            else if(j<pat.size() && pat[j]=='*'){
                startidx=j;
                match=i;
                j++;
            }
            else if(startidx!=-1){
                j=startidx+1;
                match++;
                i=match;
            }
            else{
                return false;
            }
        }
        while(j<pat.size() && pat[j]=='*'){
            j++;
        }
        return j==pat.size();
    }
};