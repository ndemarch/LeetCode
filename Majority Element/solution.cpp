#include <vector>

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate = 0;
        int counter = 0;
        for (int num:nums){
            if (counter == 0){
                candidate = num;
            }
            if (num == candidate){
                counter++;
            }
            else{
                counter--;
            }
        }
    return candidate;
    }
};
