class Solution {
public:
    vector<int> farMin(vector<int>& arr) {
        int n = arr.size();
        vector<int> res(n, -1);
        vector<int> rightMin(n);

        // Step 1: preprocess farthest right minimum
        rightMin[n-1] = arr[n-1];
        for (int i = n-2; i >= 0; i--) {
            rightMin[i] = min(arr[i], rightMin[i+1]); //it is in sorted order
        }

        // Step 2: binary search for each index
        for (int i = 0; i < n; i++) {
            int l = i+1, r = n-1, ans = -1;
            while (l <= r) {
                int mid = (l+r)/2;
                if (rightMin[mid] < arr[i]) {
                    ans = mid;
                    l = mid+1; // try farther right
                } else {
                    r = mid-1;
                }
            }
            res[i] = ans;
        }

        return res;
    }
};

