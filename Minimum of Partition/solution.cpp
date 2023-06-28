#include <vector>
#include <algorithm>

class Solution {
public:
    int findValueOfPartition(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        long long min = 10e9;
        long long difference = 10e9 - 1;
        for (int i=1; i<nums.size(); i++){
            difference = nums[i] - nums[i-1];
            if(difference < min){
                min = difference;
            }
        }
        return min;
    }
};
