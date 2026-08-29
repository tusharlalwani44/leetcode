class Solution {
public:
    vector<int> lexicographicallySmallestArray(vector<int>& nums, int limit) {
        int n=nums.size();
        vector<int>temp(n);
        for(int i=0;i<n;i++){
            temp[i]=nums[i];
        }
        sort(temp.begin(),temp.end());
        vector<queue<int>>lst;
        unordered_map<int,int>mpp;
        queue<int>q;
        q.push(temp[0]);
        lst.push_back(q);
        mpp[temp[0]]=0;
        int current_group=0;
        for(int i=1;i<n;i++){
            if(temp[i]-temp[i-1]<=limit){
                lst[current_group].push(temp[i]);
                mpp[temp[i]]=current_group;
            }
            else{
                current_group++;
                queue<int> newQ;
                newQ.push(temp[i]);
                lst.push_back(newQ);
                mpp[temp[i]]=current_group;
            }
        }
        // reconstruct the final array
        for(int i=0;i<n;i++)
        {
             int group_id=mpp[nums[i]];
             nums[i]=lst[group_id].front();
             lst[group_id].pop();
        }
        return nums;
    }
};