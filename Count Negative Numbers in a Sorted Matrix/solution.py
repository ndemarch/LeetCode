class Solution:
    def countNegatives(self, grid):
        # binary search algorithm
        n = len(grid)
        arr = []
        for i in range(n):
            sub = grid[i]
            low, high = 0, len(sub) - 1
            while low <= high:
                mid = (low + high) // 2
                if sub[mid] < 0:
                    high = mid - 1
                else:
                    low = mid + 1
            arr.append(len(sub)-low)
        return sum(arr)
        
        
