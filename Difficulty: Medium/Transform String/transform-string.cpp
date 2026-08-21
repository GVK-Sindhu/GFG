class Solution {
  public:
    int transform(string &s1, string &s2) {
        // code here
        int n1=s1.size(),n2=s2.size();
        string tmp1=s1,tmp2=s2;
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        if(s1!=s2){
            return -1;
        }
        int i=n1-1,j=n2-1;
        int res=0;
        while(i>=0 && j>=0){
            if(tmp1[i]==tmp2[j]){
                i--;
                j--;
            }
            else{
                i--;
                res++;
            }
        }
        return res;
    }
};
