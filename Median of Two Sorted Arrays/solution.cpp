class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        // Concatenate the two vectors
        std::vector<int> arr;
        arr.reserve(nums1.size() + nums2.size());
        arr.insert(arr.end(), nums1.begin(), nums1.end());
        arr.insert(arr.end(), nums2.begin(), nums2.end());
        
        // Sort the array in ascending order
        std::sort(arr.begin(), arr.end());
        
        // Calculate the median
        if (arr.size() % 2) {
            int mid = arr.size() / 2;
            return arr[mid];
        } else {
            int a = arr.size() / 2;
            int b = a - 1;
            return (arr[a] + arr[b]) / 2.0;
        }
    }
};
