class Solution:
    def trap(self, height: List[int]) -> int:

# Auxillary Array and prefix array approach   
# Time = O(n), Space = O(n)     
        # n = len(height)
        # left =  [0]*n
        # right = [0]*n
        # ans = 0

        # left[0] = height[0]
        # for i in range(1, n):
        #     left[i] = max(left[i-1], height[i])

        # right[n-1] = height[n-1]    
        # for i in range(n-2, -1, -1):
        #     right[i] = max(right[i+1], height[i])
        
        # for i in range(n):
        #     ans += min(left[i], right[i])-height[i]

        # return ans


#2 pointers approach
# time = O(n), space = O(1)

        n = len(height)
        l = 0
        r = n-1
        ans = 0
        lmax = height[0]
        rmax = height[n-1]

        while l < r:
            lmax = max(lmax, height[l])
            rmax = max(rmax, height[r])

            if lmax < rmax:
                ans += lmax - height[l]
                l = l+1

            else:
                ans += rmax - height[r]
                r = r-1

        return ans


        