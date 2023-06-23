class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
      arr = nums1 + nums2 
      arr.sort()
      if len(arr) % 2:
        mid = len(arr) // 2 
        return arr[mid] 
      else:
        a = len(arr) // 2
        b = a - 1
        return (arr[a] + arr[b]) / 2
