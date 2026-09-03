class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        // first find the minimum element to check odd parity or even parrity
        //code for finding minimum element
        int min_value=INT_MAX;
        for(int num : nums1){
            if(num<min_value){
                min_value=num; // minimum value found
            }
        }
        // if min_value is even we will look for even parity
        if(min_value%2==0){
            for(int num : nums1){
                if(num%2!=0){
                    return false;
                }
            }
        }
        // If the minimum value is odd, we can always make all elements odd.
        // If the minimum value is even and all elements are even, we return true.
        return true;

    }
};