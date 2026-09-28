class Solution {
public:
    int maxDepth(string s) {
        int depth=0;
        int res=0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='(') depth++;
            if(s[i]==')') depth--;
            res=max(res, depth);
        }
        return res;
    }
};
