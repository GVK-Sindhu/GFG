class kQueues {

  public:
  int arr_size = 0;
  int nn = 0;
  vector<queue<int>>arr;
  
    kQueues(int n, int k) {
        // Initialize your data members
        arr.resize(k);
        nn = n;
    }

    void enqueue(int x, int i) {
        // enqueue element x into queue i
        arr[i].push(x);
        arr_size++;
    }

    int dequeue(int i) {
        // dequeue element from queue i
        int val;
        if(!arr[i].empty()) {
            val = arr[i].front();
            arr[i].pop();
            arr_size--;
        }
        else val = -1;
        return val;
    }

    bool isEmpty(int i) {
        // check if queue i is empty
        return arr[i].empty();
        
    }

    bool isFull() {
        // check if array is full
        return nn == arr_size;
        
    }
};
