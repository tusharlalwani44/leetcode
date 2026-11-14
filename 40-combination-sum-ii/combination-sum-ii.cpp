class Solution {
void findcombination(int index,vector<int>&arr, int target,vector<vector<int>>&ans,vector<int>&ds){
    int n=arr.size();
    if(target==0){
        ans.push_back(ds);
        return;
    }
    for(int i=index;i<n;i++){
        if(i>index && arr[i]==arr[i-1]) continue;
        if(arr[i]>target) break;
        ds.push_back(arr[i]);
        findcombination(i+1,arr,target-arr[i],ans,ds);
        ds.pop_back();
    }
}
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<int>ds;
        vector<vector<int>>ans;
        findcombination(0,candidates,target,ans,ds);
        return ans;
    }
};