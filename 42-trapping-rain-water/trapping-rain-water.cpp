class Solution {
public:
    int trap(vector<int>& height) {
        int left=0;
        int right=height.size()-1;
        int water=0;
        // variables to keep track of the maximum height seen so far from left to right
        int leftmax=height[left];
        int rightmax=height[right];
        // loop until two pointers meet
        while(left<right){
            if(leftmax<rightmax){
                // Move the left pointer inwards
                left++;
                // Update the maximum height seen from the left
                leftmax=max(leftmax,height[left]);
                // Calculate trapped water at the current left position
                water+=leftmax-height[left];
            }
            else{
                // Move the right pointer inwards
                right--;
                // Update the maximum height seen from the right
                rightmax = max(rightmax, height[right]);
                // Calculate trapped water at the current right position
                water += rightmax - height[right];
            }
        }
        return water;
    }
};