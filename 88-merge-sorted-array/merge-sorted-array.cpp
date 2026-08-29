class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<long long>ans(m+n);
        int left=0;
        int right=0;
        int index=0;
        while(left<m && right<n){
            if(nums1[left]<=nums2[right]){
                ans[index++]=nums1[left++];
            }
            else {
                ans[index++]=nums2[right++];
            }
        }
        while(left<m){
            ans[index++]=nums1[left++];
        }
        while(right<n){
            ans[index++]=nums2[right++];
        }
        for(int i=0;i<ans.size();i++){
            nums1[i]=ans[i];
        }
    }
};