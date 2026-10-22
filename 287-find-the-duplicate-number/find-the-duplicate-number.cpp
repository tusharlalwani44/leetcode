class Solution {
private:
int count(vector<int>&nums,int mid){
    int count=0;
    for(int num: nums){
        if(num<=mid){
            count++;
        }
    }
    return count;
}
public:
    int findDuplicate(vector<int>& nums) {
        int low=1;
        int high=nums.size()-1;
        int duplicate=-1;
        while(low<=high){
            int mid =low+(high-low)/2;
            if(count(nums,mid)>mid){
                duplicate=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return duplicate;
    }
};