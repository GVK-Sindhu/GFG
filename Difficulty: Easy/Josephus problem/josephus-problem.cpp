class Solution {
  public:
   
    int josephus(int n, int k) {
        // code here
        queue<int>q;
        for(int i=1;i<=n;i++){
            q.push(i);
        }
        while(q.size()>1){
            int c=0;
            while(c!=k-1){
                int tmp=q.front();
                q.pop();
                q.push(tmp);
                c++;
            }
            q.pop();
        }
        int res=0;
        if(q.size()==1){
            res=q.front();
        }
        return res;
    }
};