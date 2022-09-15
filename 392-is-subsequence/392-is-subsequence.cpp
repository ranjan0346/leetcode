class Solution {
public:
    bool isSubsequence(string s, string t) {
        int nt=t.size(), ns=s.size(), j=0;
        for(int i=0; i<ns; i++){
            if(s[i]==t[j]){
                j++;
            }
            else{
                while(s[i]!=t[j]){
                    if(j>nt-1) return false;
                    j++;
                }
                j++;
            }
        }
        return true;
        
    }
};