class Solution {
void recursion(int index,int target,vector<int>&candidates,vector<vector<int>>&ans,vector<int>&ds){
    int n=candidates.size();
    if(index==n) {
        if(target==0){
            ans.push_back(ds);
        }
        return;
    }
    //include
    if(candidates[index]<=target){
        ds.push_back(candidates[index]);
        recursion(index,target-candidates[index],candidates,ans,ds);
        ds.pop_back();
    }
    recursion(index+1,target,candidates,ans,ds);
}
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>ds;
        recursion(0,target,candidates,ans,ds);
        return ans;
    }
};