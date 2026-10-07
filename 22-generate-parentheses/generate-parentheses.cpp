class Solution {
private:
void backtrack(int openCount,int closeCount,int n,string current,vector<string>&result){
    //base case
    if(current.length()==2*n) {
        result.push_back(current);
        return;
    }
    // adding an opening bracket
    if(openCount<n){
        backtrack(openCount+1,closeCount,n,current+"(",result);
    }
    //adding closing bracket
    if(closeCount<openCount){
        backtrack(openCount,closeCount+1,n,current+")",result);
    }
}
public:
    vector<string> generateParenthesis(int n) {
        vector<string>result;
        backtrack(0,0,n,"",result);
        return result;
    }
};