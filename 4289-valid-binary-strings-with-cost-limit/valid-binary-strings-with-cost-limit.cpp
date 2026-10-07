class Solution {
private:
void backtrack(int currentindex,string current,int cost,bool flag,int n,int k,vector<string>&result){
    // base case 
    if(currentindex>=n){
        result.push_back(current);
        return;
    }
    // choosing 0
    backtrack(currentindex+1,current+"0",cost,false,n,k,result);
    // choosing 1: only possible when previous is not one
    if(!flag && cost+currentindex<=k){
        backtrack(currentindex+1,current+"1",cost+currentindex,true,n,k,result);
    }
}
public:
    vector<string> generateValidStrings(int n, int k) {
        vector<string>result;
        backtrack(0,"",0,false,n,k,result);
        return result;
    }
};