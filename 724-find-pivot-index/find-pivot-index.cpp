class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        // left sum
        int left_sum=0;
        for(int i=0;i<n;i++){
            if(left_sum==sum-left_sum-nums[i]){
                return i ;
            }
            left_sum+=nums[i];
        }
        return -1;
    }
};