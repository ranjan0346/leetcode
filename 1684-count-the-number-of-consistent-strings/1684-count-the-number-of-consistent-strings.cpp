class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int n=allowed.size();
        int m=words.size();
        unordered_set<char> s;
        
        for(int i=0; i<n; i++){
            s.insert(allowed[i]);
        }
        
        int cnt=0, ans=0;
        
        for(int i=0; i<m; i++){
            string st=words[i];
            int x =st.size();
            for(int j=0; j<x; j++){
                if(s.find(st[j])!=s.end())
                    cnt++;
                else break;
            }
            if(cnt== x)
                ans++;
            cnt=0;
        }
        return ans;
    }
};