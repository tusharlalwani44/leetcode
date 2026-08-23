class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        int i = 0;
        unordered_map<int,int>mpp;
        for(int num : nums)
        {
         int complement = target - num;
         if(mpp.find(complement)!=mpp.end()){
            return {mpp[complement],i};

        }
        mpp[num]=i++;
    }
    return {};
}
};