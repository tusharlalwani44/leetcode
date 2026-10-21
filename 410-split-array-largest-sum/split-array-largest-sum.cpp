class Solution {
private:
bool isPossible(vector<int>&nums,int k,long long maxAllowedTime){
    int n= nums.size();
    int painters=1;
    int time=0;
    for(int i=0;i<n;i++){
        if(time+nums[i]<=maxAllowedTime){
            time+=nums[i];
        }
        // new painter
        else{
            painters++;
            time=nums[i];
        }
    }
    return painters<=k;
}
public:
    int splitArray(vector<int>& nums, int k) {
        int low=*max_element(nums.begin(),nums.end());
        int high=accumulate(nums.begin(),nums.end(),0LL);
        int ans=0;
        while(low<=high){
            long long mid=low+(high-low)/2;
            if(isPossible(nums,k,mid)){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};