class Solution {
private: 
    int binarysearch(vector<int>& nums, int target, int low, int high) {
        // base case
        if (low > high) {
            return -1;
        }
        
        int mid = low + (high - low) / 2;
        
        if (nums[mid] == target) {
            return mid;
        } 
        else if (nums[mid] < target) {
            return binarysearch(nums, target, mid + 1, high);
        }
        else {
            // search left half
            return binarysearch(nums, target, low, mid - 1);
        }
    }

public:
    int search(vector<int>& nums, int target) {
        return binarysearch(nums, target, 0, nums.size() - 1);
    }
};