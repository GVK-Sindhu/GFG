class Solution {
  public:
    int findIndex(string &s) {
        // code here
        int n=s.size();
        vector<int>opens(n,0);
        vector<int>closes(n,0);
        if(s[0]=='('){
            opens[0]=1;
        }
        for(int i=1;i<n;i++){
            opens[i]=opens[i-1];
            if(s[i]=='('){
                opens[i]++;
            }
        }
        if(s[n-1]==')'){
            closes[n-1]=1;
        }
        for(int i=n-2;i>=0;i--){
            closes[i]=closes[i+1];
            if(s[i]==')'){
                closes[i]++;
            }
        }
        if(closes[0]==0){
            return 0;
        }
        for(int k=1;k<n;k++){
            if(opens[k-1]==closes[k]){
                return k;
            }
        }
        return n;
    }
};

// when ))) the ans will be n as there is chance to split we break here ))) | 
// (( the ans will be 0 as there is no chance to split |(( breaking here isnt possible