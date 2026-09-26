class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int MaxSum=INT_MIN;
        int currentsum=0;
        for(int i=0;i<n;i++){
            currentsum+=nums[i];
            MaxSum=max(MaxSum,currentsum);
            if(currentsum<0){
                currentsum=0;
            }
        }
        return MaxSum;
    }
};