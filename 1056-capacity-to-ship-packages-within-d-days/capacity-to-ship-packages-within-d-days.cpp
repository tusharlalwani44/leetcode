class Solution {
private:
int finddays(vector<int>&weights,int cap){
int n=weights.size();
int load=0;
int reqdays=1;
for(int i=0;i<n;i++){
    if(load+weights[i]>cap){
        reqdays++;
        load=weights[i];
    }
    else{
        load+=weights[i];
    }
}
return reqdays;
}
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int n=weights.size();
        int low=*max_element(weights.begin(),weights.end());
        int high=accumulate(weights.begin(),weights.end(),0);
        while(low<=high){
            int mid =low+(high-low)/2;
            if(finddays(weights,mid)<=days){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};