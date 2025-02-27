//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // int gcd(int a,int b){
    //     while(a>0 && b>0){
    //         if (a>b) a=a%b;
    //         else b=b%a;
    //         if (a==0) return b;
    //         else return a;
    //     }
    // }
    vector<int> lcmAndGcd(int a, int b) {
        // code here
        int A=a,B=b;
        while(b!=0){
            int rem=a%b;
            a=b;
            b=rem;
        }
        int gcd=a;
        int lcm=A*B/gcd;
        vector<int>res;
        // int gcd_val=gcd(a,b);
        // int lcm=A*B/gcd_val;
        res.push_back(lcm);
        res.push_back(gcd);
        return res;
      
     }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int A, B;

        cin >> A >> B;

        Solution ob;
        vector<int> ans = ob.lcmAndGcd(A, B);
        cout << ans[0] << " " << ans[1] << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends