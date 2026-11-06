class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int minlength=INT_MAX;
        int currentSum=0;
        int left=0;
        for(int right=0;right<n;right++){
            currentSum+=nums[right];
        while(currentSum>=target)
         {
            minlength=std::min(minlength,right-left+1);
            currentSum-=nums[left];
            left++;
        }
        }
        return(minlength==INT_MAX)?0:minlength;
    }
};