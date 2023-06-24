#include <unordered_map>
class Solution { 
    private:
        std::unordered_map<int, int> sequence;
    public:
        int fib(int n) {
          // sequence.find(n) looks for the n-th key in our memo
          // sequence.end() is returned if it does not exist
            if (sequence.find(n) != sequence.end()) {
                return sequence[n];
            }
            if (n <= 1) {
                return n;
            }
            int result = fib(n - 1) + fib(n - 2);
            sequence[n] = result;
            return result;
    }
};
