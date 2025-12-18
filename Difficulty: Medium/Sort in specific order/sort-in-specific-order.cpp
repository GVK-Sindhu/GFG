class Solution {
  public:
    void sortIt(vector<int>& arr) {
        // code here
        vector<int>odd;
        vector<int>even;
        for(int it:arr){
            if(it%2==1)
            {
                odd.push_back(it);
            }
            else{
                even.push_back(it);
            }
        }
        sort(odd.begin(),odd.end(),greater<int>());
        sort(even.begin(),even.end());
        for(int i=0;i<odd.size();i++){
            arr[i]=odd[i];
        }
        int c=odd.size();
        for(int i=0;i<even.size();i++){
            arr[i+c]=even[i];
        }
    }
};