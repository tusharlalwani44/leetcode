class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int NumberOfChildren=g.size();
        int NumberOfCookie=s.size();
        // sorting both the arrays:
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        // now the g and s are sorted;
        int childindex=0;
        for(int cookieindex=0;cookieindex<NumberOfCookie && childindex<NumberOfChildren;cookieindex++){
            if(s[cookieindex]>=g[childindex]){
                childindex++;
            }
        }
        return childindex;
    }
};