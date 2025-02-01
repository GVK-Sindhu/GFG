#User function Template for python3
class Solution:
	def arraySum(self, arr):
	    s=0
	    for i in arr:
	        s=s+i
	    return s


#{ 
 # Driver Code Starts
# Driver code
if __name__ == "__main__":
    tc = int(input())
    while tc > 0:
        arr = list(map(int, input().strip().split()))
        ob = Solution()
        ans = ob.arraySum(arr)
        print(ans)
        tc = tc - 1
        print("~")

# } Driver Code Ends