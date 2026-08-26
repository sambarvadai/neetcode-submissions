class Solution {
    vector<string> res;
public:
    vector<string> generateParenthesis(int n) {
    backTrackingFn(n,0,0,"");
    return res;      
    }
    void backTrackingFn(int n, int openBracketCt, int closeBracketCt, string cur){
    if(cur.length() == 2*n){
        res.push_back(cur);
    }
    if(openBracketCt < n){
        backTrackingFn(n,openBracketCt+1, closeBracketCt,cur+"(");
    }
    if(closeBracketCt < openBracketCt){
        backTrackingFn(n, openBracketCt, closeBracketCt+1, cur+")");    }

    }
};
