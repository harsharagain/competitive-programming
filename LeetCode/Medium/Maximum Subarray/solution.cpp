class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        int maxSum = INT_MIN;
        int temp;

        for (int val : nums) {
            temp += val;

            maxSum = max(maxSum, temp);

            if (temp < 0) {
                temp = 0;
            }
        }

        return maxSum;
        
    }
};
