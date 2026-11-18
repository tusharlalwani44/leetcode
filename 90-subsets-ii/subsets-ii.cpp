class Solution {
public:
 void func(int index,vector<int>&nums,vector<int>&ds,vector<vector<int>>&ans){
    int n=nums.size();
    ans.push_back(ds);
    for(int i=index;i<n;i++){
        if(i!=index && nums[i]==nums[i-1]) continue;
        ds.push_back(nums[i]);
        func(i+1,nums,ds,ans);
        ds.pop_back();
    }
}
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int>ds;
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        func(0,nums,ds,ans);
        return ans;
    }
};