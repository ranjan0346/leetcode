class Solution {
public:
    string sortString(string s) {
        int n=s.size();
        string ans ="";
        
        map<char, int> m;
        
        for(int k=0;k<n;k++){
            m[s[k]]++;
        }
        
        while(ans.size()<n){
            for(auto &i: m){
                if((i.second)>0){
                    ans+=i.first;
                    i.second--;
                }
            }
            
            
            for(auto j= m.rbegin();j!=m.rend();j++){
                if((j->second)>0){
                     ans+=(*j).first;
                    j->second--;
                }
        }
    }
        return ans;
    }
};