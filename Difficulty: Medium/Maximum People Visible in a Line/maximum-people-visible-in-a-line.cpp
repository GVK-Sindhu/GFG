class Solution {
  public:
    int maxPeople(vector<int> &arr) {
        // code here
        int maxi=*max_element(arr.begin(),arr.end());
        int n=arr.size();
        int maxres=0;
          if(n == 1) return 1;

        for(int i=0;i<n;i++){
            // if(arr[i]==maxi){
            //   if(i>0){   l=i-1;  }
            //   if(i<n-1){ r=i+1; }
            //     while(l>=0 && arr[i]>arr[l]){
            //         l--;
            //     }
            //     while(r<n && arr[i]>arr[r]){
            //         r++;
            //     }
            //     if(i==0){ 
            //          maxres=max(maxres,((i-(l))+(r-(i+1))+1));
            //     }
            //     if(i==n-1){
            //          maxres=max(maxres,((i-(l+1))+(r-(i))+1));
            //     }
            //   else{
            //         maxres=max(maxres,((i-(l+1))+(r-(i+1))+1));
            //   }
                // cout<<i<<" "<<l<<" "<<r<<" "<<maxres<<"\n"
                   if(arr[i] == maxi){
                int l = i - 1;
                int r = i + 1;

                while(l >= 0 && arr[i] > arr[l]) l--;
                while(r < n && arr[i] > arr[r]) r++;

                int leftVisible  = i - l - 1;
                int rightVisible = r - i - 1;

                maxres = max(maxres, leftVisible + rightVisible + 1);
                
            }
            
        }
        return maxres;
    }
};