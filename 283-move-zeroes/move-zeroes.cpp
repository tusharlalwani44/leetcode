class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){ // nums[]={0,1,0,2,12} --- i at 0
        for(int j=i+1;j<n;j++){
            if(nums[i]==0 && nums[j]!=0){
                swap(nums[i],nums[j]);
            } // 100312
        }
        }
    }
};