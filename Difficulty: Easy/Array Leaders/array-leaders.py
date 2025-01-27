class Solution:
    def leaders(self, arr):
        l=[]
        maxright=arr[-1]
        l.append(maxright)
        for i in range(len(arr)-2,-1,-1):
            if arr[i]>=maxright:
                l.append(arr[i])
                maxright=arr[i]
        l.reverse()
        return l

#{ 
 # Driver Code Starts
t = int(input())  # number of test cases
for _ in range(t):
    arr = list(map(int, input().split()))  # input array
    s = Solution().leaders(arr)  # find the leaders

    # Output formatting
    if s:
        print(" ".join(map(str, s)))  # Print leaders in the required order
    else:
        print("[]")  # Print empty list if no leaders are found

    print("~")

# } Driver Code Ends