# Approach
Concatenate the lists, sort in ascending order and find the midpoint depending on if the concatenated array is even or odd. 
If even, this is simply the middle index, if odd, find the two inner most indices and calculate the average.
This is a binary search algorithm.

# Complexity
### Time complexity:

$O(Nlog(N))$ : From using sort()

### Space complexity:

$O(N)$ : from concatenation of new array
