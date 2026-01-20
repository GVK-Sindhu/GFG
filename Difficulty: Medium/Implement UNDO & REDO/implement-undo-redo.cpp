class Solution {
  public:
    vector<char>arr;
    stack<char>st;
    void append(char x) {
        // append x into document
        arr.push_back(x);
    }

    void undo() {
        // undo last change
        st.push(arr.back());
        arr.pop_back();
    }

    void redo() {
        // redo changes
        arr.push_back(st.top());
        st.pop();
    }

    string read() {
        // read the document
        string s;
        for(auto it:arr){
            s+=it;
        }
        return s;
    }
};

// 1 J
// 1 K
// 1 C
// 2
// 2
// 3
// 4