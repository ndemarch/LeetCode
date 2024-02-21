#include <iostream>
using namespace std;

class Solution {
public:
    int rob(vector<int>& nums) {
        int n = size(nums);
        if (n == 0){
            return 0;
        }
        else if (n == 1){
            return nums[0];
        }
        int first = nums[0];
        int second = max(nums[0], nums[1]);
        for (int i = 2; i < n; i++){
            int currentSum = max(second, first + nums[i]);
            first = second;
            second = currentSum;
        }
        return second;
    }
};
