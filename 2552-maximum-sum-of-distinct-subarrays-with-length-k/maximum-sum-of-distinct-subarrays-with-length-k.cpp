class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        long long current_sum = 0;
        long long maxSum = 0;
        unordered_set<int> st;
        int i = 0;
        int j = 0;

        while (j < n) {
            // Check if nums[j] is already present in window
            while (st.count(nums[j])) {
                current_sum -= nums[i];
                st.erase(nums[i]);
                i++;
            }

            current_sum += nums[j];
            st.insert(nums[j]);

            if (j - i + 1 == k) {
                maxSum = max(maxSum, current_sum);
                current_sum -= nums[i];
                st.erase(nums[i]);
                i++;
            }
            j++;
        }
        return maxSum;
    }
};