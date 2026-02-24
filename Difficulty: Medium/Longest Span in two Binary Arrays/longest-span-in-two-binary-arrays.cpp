class Solution {
  public:
    int equalSumSpan(vector<int> &a1, vector<int> &a2) {
        // code here
        int n=a1.size();
        vector<int>freq(2*(n+1),-1);
        int maxlen=0,p1=0,p2=0;
        for(int i=0;i<n;i++){
            p1+=a1[i];
            p2+=a2[i];
            int curdiff=p1-p2;
            int idx=curdiff+n;
            if(curdiff==0){
                maxlen=max(maxlen,(i+1));
            }
            else if(freq[idx]!=-1){
                maxlen=max(maxlen,i-freq[idx]);
            }
            else{
                freq[idx]=i;
            }
        }
        return maxlen;
    }
};