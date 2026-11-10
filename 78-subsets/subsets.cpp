class Solution { 
void recursion(int index,vector<int>&nums,vector<int>&current,vector<vector<int>>&result){
    int n=nums.size();
    //base case
    if(index>=n) {
        result.push_back(current);
        return;
    }
    current.push_back(nums[index]);
    recursion(index+1,nums,current,result);
    // backtrack
    current.pop_back();

    // remove element
    recursion(index+1,nums,current,result);
} 
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>result;
        vector<int>current;
        recursion(0,nums,current,result);
        return result;
    }
};