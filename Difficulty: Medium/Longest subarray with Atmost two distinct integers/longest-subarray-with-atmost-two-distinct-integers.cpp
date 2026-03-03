class Solution {
  public:
    int totalElements(vector<int> &arr) {
        // code here
        int n=arr.size();
        int i=0,j=0,maxlen=0;
        map<int,int>mp;
        while(j<n){
            mp[arr[j]]++;
            while(mp.size()>2){
                mp[arr[i]]--;
                if(mp[arr[i]]==0){
                    mp.erase(arr[i]);
                }
                i++;
            }
            maxlen=max(maxlen,j-i+1);
            j++;
        }
        return maxlen;
    }
};

// 3 5 2 10 4 5 5 1 5 6
// 1 2 3 4  5 6 6 7 7 8

// 3 3 5  
// 1 1 2
// 6 4 9 10 1
// 1 2 3  4  5

