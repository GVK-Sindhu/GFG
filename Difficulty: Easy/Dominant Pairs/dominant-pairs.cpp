class Solution {
  public:
    int dominantPairs(vector<int> &arr) {
        // Code here
        int n=arr.size()/2;
        int res=0;
        vector<int>ls;
        vector<int>rs;
        for(int i=0;i<n;i++){
            ls.push_back(arr[i]);
        }
        sort(ls.begin(),ls.end());
        for(int i=n;i<arr.size();i++){
            rs.push_back(arr[i]);
        }
        sort(rs.begin(),rs.end());
        int j=0;
        for(int i=0;i<rs.size();i++){
            while(j<ls.size() && ls[j]<5LL*rs[i]){
                j++;
            }
            res+=n-j;
        }
        return res;
    }
};

//  10 2 2 1
//  2 10   | 1 2

//  2 4 5 10  |  1 2 3 4
// nv nv v v - for 1       
// res+=ls.size()-j;
// if 2,4 < 1*5 then automatically if 2,4 <2*5 so we dont reset j=0 we will inc j
// if 5 is not also a suitable candidate