class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int n=jewels.size();
        int m=stones.size();
        unordered_set<char>s;
        
        for(int i=0; i<n; i++){
            s.insert(jewels[i]);
        }
        
        int count=0;
        for(int i=0; i<m; i++){
            if(s.find(stones[i])!=s.end())
                count++;
        }
        return count;
        
    }
};