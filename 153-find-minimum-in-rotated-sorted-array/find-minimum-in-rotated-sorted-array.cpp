class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int low=0;
        int high=n-1;
        int ans=INT_MAX;
        while(low<=high){
            int mid=low+(high-low)/2;
            // search space is already sorted
            // then always arr[low] will be sorted
            //in that search space
            if(nums[low]<=nums[high]){
                ans=min(ans,nums[low]);
                break;
            }
            // left is sorted
            if(nums[low]<=nums[mid]){
                ans=(ans,nums[low]);
                low=mid+1;
            }
            else{
                high=mid-1;
                ans=min(ans,nums[mid]);
            }
        }
        return ans;
    }
};