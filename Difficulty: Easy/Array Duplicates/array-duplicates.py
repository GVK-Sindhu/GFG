
class Solution:
    def findDuplicates(self, arr):
        # code here
        res=[]
        dict={}
        for i in arr:
            dict[i]=dict.get(i,0)+1
        for key,value in dict.items():
           if value>1:
               res.append(key)
        return res



#{ 
 # Driver Code Starts
# Initial Template for Python 3

t = int(input())  # number of test cases
for _ in range(t):
    arr = list(map(int, input().split()))  # input array
    s = Solution().findDuplicates(arr)  # find the duplicates
    # Sort the result in ascending order
    s.sort()
    # Output formatting
    if s:
        print(" ".join(map(str, s)))  # Print duplicates in ascending order
    else:
        print("[]")  # Print empty list if no duplicates are found
    print("~")

# } Driver Code Ends