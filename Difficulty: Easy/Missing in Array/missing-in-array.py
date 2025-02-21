#User function Template for python3
class Solution:
    def missingNumber(self, arr):
        n=len(arr)+1
        ts=n*(n+1)//2
        s=sum(arr)
        return ts-s
#{ 
 # Driver Code Starts
#Initial Template for Python 3

t = int(input())
for _ in range(0, t):
    arr = list(map(int, input().split()))
    s = Solution().missingNumber(arr)
    print(s)

    print("~")
# } Driver Code Ends