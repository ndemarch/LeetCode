This solution utilizes the **Boyer-Moore voting algorithm** to find the majority vote. The steps are as follows:

# Algorithm :
1. Iterate through the array from the beginning to the end.
2. For each element in the array:
   
    a. If the count is 0, set the current element as the candidate.
   
    b. If the current element is the same as the candidate, increment the count.
   
    c. If the current element is different from the candidate, decrement the count.
   
4. After the first pass, the candidate is the potential majority element.
5. Reset the count to 0.
6. Iterate through the array again.
7. Count the occurrences of the candidate element.
8. If the candidate occurs more than half of the time, it is the majority element. Return it as the majority element.
9. If the candidate occurs less than or equal to half of the time, there is no majority element.

*In this solution we disregard the second pass and not having a return if no majority exists 
(because by default the problem will always have a majority). In this case, whichever value is left on the counter will be the majority.* 
