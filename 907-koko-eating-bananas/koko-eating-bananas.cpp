class Solution {
private:
long long calchours(vector<int>&piles,int hour){
    long long totalH=0;
    int n=piles.size();
    for(int i=0;i<n;i++){
        totalH+=ceil((double)piles[i]/hour);
    }
    return totalH;
}
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int high=*max_element(piles.begin(), piles.end());
        int ans=high;
        while(low<=high){
            int mid=low+(high-low)/2;
            long long total_hour=calchours(piles,mid);
            if(total_hour<=h){
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