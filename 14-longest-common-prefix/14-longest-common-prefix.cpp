class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans= strs[0];
        int n=strs.size();
        for(int i=1; i<n; i++){
            int n2=ans.size();
            for(int j=0; j<n2; j++)
            {
                if(ans[j]!=strs[i][j]){
                    ans=ans.substr(0, j);
                    break;
                }
            }
        }
        return ans;
        
    }
};