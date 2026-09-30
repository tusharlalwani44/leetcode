class Solution {
private:
bool canSheEatAll(vector<int>&piles,int h,int k){
    long long hoursNeeded=0;
    for(int pile:piles){
        hoursNeeded+=(pile+k-1)/k;
    }
    return hoursNeeded <=h;
}
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int high=*max_element(piles.begin(),piles.end());
        int ans=high;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(canSheEatAll(piles,h,mid)){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};
















