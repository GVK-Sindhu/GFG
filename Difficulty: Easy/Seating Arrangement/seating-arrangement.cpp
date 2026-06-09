class Solution {
  public:
    bool canSeatAllPeople(int k, vector<int> &seats) {
        // code here
        int n=seats.size(),c=0;
        for(int i=0;i<n;i++){
            if(seats[i]==0 &&
            (i == 0 || seats[i - 1] == 0) &&
                (i == n - 1 || seats[i + 1] == 0)){
                seats[i]=1;
                c++;
            }
        }
        if(c>=k){
            return true;
        }
        return false;
    }
};