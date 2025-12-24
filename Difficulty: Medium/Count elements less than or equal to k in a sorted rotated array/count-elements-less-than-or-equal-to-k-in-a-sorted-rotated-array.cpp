class Solution {
    public:
    int countLessEqual(vector<int>& arr, int x) {
        // code here
        int stidx=0;
        int n=arr.size();
        for(int i=0;i<n-1;i++){
            if(arr[i]>arr[i+1]){
                stidx=i+1;
                break;
            }
        }
        vector<int>res;
        for(int i=stidx;i<n;i++){
            res.push_back(arr[i]);
        }
        for(int i=0;i<stidx;i++){
            res.push_back(arr[i]);
        }
        
        auto it=upper_bound(res.begin(),res.end(),x);
        int edidx=it-res.begin();
        
        return edidx;
    }
};