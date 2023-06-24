/**
 * @param {number[]} nums
 * @return {number}
 */
var findValueOfPartition = function(nums) {
    nums.sort((a, b) => a - b);
    let minimum = 1e9;
    for (let i = 1; i < nums.length; i++) {
      let difference = nums[i] - nums[i - 1];
      if (difference < minimum) {
        minimum = difference;
      }
    }
    return minimum;
};
