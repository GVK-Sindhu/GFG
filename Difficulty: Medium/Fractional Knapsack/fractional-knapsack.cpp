class Solution {
  public:
    static bool comp(const pair<int,int>&a,const pair<int,int>&b){
        double r1=(double)(a.first/(a.second*1.0));
        double r2=(double)(b.first/(b.second*1.0));
        return r1>r2;
    }
    double fractionalKnapsack(vector<int>& val, vector<int>& wt, int capacity) {
        // code here
        vector<pair<int,int>>items;
        int n=val.size();
        for(int i=0;i<n;i++){
            items.push_back({val[i],wt[i]});
        }
        sort(items.begin(),items.end(),comp);
        double pick=0.0;
        for(int i=0;i<n;i++){
            if(items[i].second<capacity){
                pick+=items[i].first;
                capacity-=items[i].second;
            }
            else{
                pick+=capacity*(items[i].first/(items[i].second*1.0));
                capacity=0;
                break;
            }
        }
        return pick;
    }
};
