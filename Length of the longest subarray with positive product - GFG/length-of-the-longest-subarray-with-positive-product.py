#User function Template for python3


class Solution:
    def maxLength(self,arr,n):
        #code here
        ans = pos = neg = 0
        for num in arr:
            if num > 0:
                pos = 1+pos 
                neg = 1+neg if neg else 0 
            elif num < 0:
                pos, neg = 1+neg if neg else 0 , pos+1
            else:
                pos=neg=0 
            ans=max(ans,pos)
        return ans    


#{ 
 # Driver Code Starts
#Initial Template for Python 3

def main():
        T=int(input())
        while(T>0):
            
            n=int(input())

            arr=[int(x) for x in input().strip().split()]
            
            
            obj = Solution()
            print(obj.maxLength(arr,n))
            
            T-=1


if __name__ == "__main__":
    main()
# } Driver Code Ends