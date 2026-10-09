class Solution {
public:
    string removeKdigits(string num, int k) {
        string res="";
        for(char c:num){
            // remove the previous element
            while(!res.empty() && k>0 && res.back()>c){
                res.pop_back();
                k--;
            }
            if(!res.empty() || c!='0'){
                res.push_back(c);
            }
        }
        while(!res.empty()&&k>0){
            res.pop_back();
            k--;
        }
        return res.empty() ? "0" : res;
    }
};