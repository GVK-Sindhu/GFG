class Solution {
  public:
    void sort012(vector<int>& arr) {
        // code here
        int k=0;
        int zc=0,oc=0,tc=0;
        for(int it:arr){
            if(it==0) zc++;
            else if(it==1) oc++;
            else tc++;
        }
        while(zc){
            arr[k++]=0;
            zc--;
        }
        while(oc){
            arr[k++]=1;
            oc--;
        }
        while(tc){
            arr[k++]=2;
            tc--;
        }
    }
};