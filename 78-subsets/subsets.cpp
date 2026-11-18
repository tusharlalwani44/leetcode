class Solution {
void recursion(int index,vector<int>&nums,vector<int>&ds,vector<vector<int>>&ans){
    int n=nums.size();
    //base case
    if(index==n){
        ans.push_back(ds);
        return;
    }
    // pick element
    ds.push_back(nums[index]);
    recursion(index+1,nums,ds,ans);
    // backtrack
    ds.pop_back();
    //exclude:
    recursion(index+1,nums,ds,ans);

}
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>ds;
        recursion(0,nums,ds,ans);
        return ans;
    }
};