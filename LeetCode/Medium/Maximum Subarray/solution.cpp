class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        int n = nums.size();

        int largestSum = INT_MIN;
        int total = 0;

        for (int i = 0; i < n; i++) {
            total += nums[i];

            largestSum = max(largestSum, total);

            if (total < 0) {
                total = 0;
            }
        }

        return largestSum;
        
    }
};