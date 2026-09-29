class Solution {
private: 
bool canship(vector<int>&weights,int days,int capacity){
    int RequiredDays=1;
    int CurrentLoad=0;
    // traversing in weight array
    for(int weigh : weights){
        if(CurrentLoad+weigh>capacity){
            RequiredDays++;
            CurrentLoad=0;
        }
        CurrentLoad+=weigh;
    }
    return RequiredDays<=days;
}
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int n=weights.size();
        int low=*max_element(weights.begin(),weights.end());
        int high=accumulate(weights.begin(),weights.end(),0);
        while(low<high){
            int mid=low+(high-low)/2;
            //using the predicate function
            if(canship(weights,days,mid)){
                high=mid;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};