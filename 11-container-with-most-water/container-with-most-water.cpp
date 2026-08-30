class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int capacity=0;
        int left=0;
        int right=n-1;
        while(left<right){
            int width=right-left;
            capacity=max(capacity,width*(min(height[left],height[right])));
            if(height[left]<height[right]){
                left++;
            }
            else{
                right--;
            }
        }
        return capacity;
    }
};