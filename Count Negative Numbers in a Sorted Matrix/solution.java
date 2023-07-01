class Solution {
    public int countNegatives(int[][] grid) {
        // beats 100% in time complexity 
        int n = grid.length;
        int[] ans = new int[n];
        for (int i = 0; i < n; i++){
            int[] sub = grid[i];
            int low = 0;
            int high = sub.length - 1;
            while (low <= high){
                int mid = (low + high) / 2;
                if (sub[mid] < 0){
                    high = mid - 1;
                } else{
                    low = mid + 1;
                }
            }
            ans[i] = sub.length - low; 
        }
        int sum = 0;
        for (int num:ans){
            sum += num;
        }
        return sum;
    }
}
