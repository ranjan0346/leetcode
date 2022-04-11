class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        if(n==1) return 1;
        unordered_set<int> s1;
        unordered_map<int , int> mp;
        int m=trust.size();
        for(int i=0;i<m;i++){
             s1.insert(trust[i][0]);
             mp[trust[i][1]]++;
            }
        // if (s1.find(n)!=s1.end() || s2.size()>1)
        //     return -1;
        //     return n;
        for(auto i: mp){
            if(i. second==n-1 && s1.find(i.first)==s1.end())
                return i.first;
        }
        return -1;
    }
};