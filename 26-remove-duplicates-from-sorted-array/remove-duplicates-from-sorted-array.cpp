class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int>stt;
        // insert all elements in set
        for(int num : nums){
            stt.insert(num);
        }
        // copy the elements from set to original array
        int i=0;
        for(int num: stt){
            nums[i]=num;
            i++;
        }
        // size of set is the number of unique elements:
        return stt.size();
    }
};