class Solution {
  public:
    int kthElement(vector<int> &a, vector<int> &b, int k) {
        // code here
        int n=a.size();
        int m=b.size();
        int i=0,j=0,c=0,res=0;
        while(i<n && j<m){
            if(a[i]<b[j]){
                res=a[i];
                i++;
            }
            else{
                res=b[j];
                j++;
            }
            c++;
            if(c==k){
                return res;
            }
        }
        while(i<n){
            i++;
            c++;
            if(c==k) return a[i-1];
        }
        while(j<m){
            j++;
            c++;
            if(c==k) return b[j-1];
        }
        return -1;
    }
};