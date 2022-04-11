class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int, int> m;
        for(auto i: nums){
            m[i]++;
            
        }
        
        for(auto i: m){
            if(i.second==n/2)
                return i.first;
        }
        return 0;
        
    }
};