class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        int n=arr.size();
        //precompute
        for(int i=1;i<n;i++){
            arr[i]=arr[i]^arr[i-1];
        }
        vector<int>result;
        result.reserve(queries.size());
        for(const auto&q:queries){
            int left=q[0];
            int right=q[1];
            if(left==0){
                result.push_back(arr[right]);
            }
            else{
                result.push_back(arr[right]^arr[left-1]);
            }
        }
        return result;
    }
};