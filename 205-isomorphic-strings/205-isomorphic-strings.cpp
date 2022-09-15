class Solution {
    bool help(string s, string t){
      unordered_map<int, int> m;
        for(int i=0; i<s.size(); i++){
            if(m.find(s[i])==m.end()) m[s[i]]=t[i];
            else{
                if(m[s[i]]!=t[i]) return false;
            }
        }
        return true;  
    }
public:
    bool isIsomorphic(string s, string t) {
        return help(s, t) && help(t,s);
        
    }
};