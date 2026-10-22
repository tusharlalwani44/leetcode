class Solution {
public:
    int arrangeCoins(int n) {
        int low=1;
        int high=n;
        while(low<=high){
            long mid=low+(high-low)/2;
            long long coinsneeded=mid*(mid+1)/2;
            if(coinsneeded<=n){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return high;
    }
};