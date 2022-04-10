class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        int n=paths.size();
        string ans;
        unordered_map< string, int> m;
        for(int i=0; i<n; i++){
           m[paths[i][0]]++;
            m[paths[i][1]]++;
            }    
        
        for (int i=0; i<n; i++){
            if(m[paths[i][1]]==1)
                return paths[i][1];
        }
        return ans;
        
    }
};