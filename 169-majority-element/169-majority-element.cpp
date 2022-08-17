class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map< int, int> m;
        for(auto i: nums){
            m[i]++;
        }
        int p;
        int n=nums.size()/2;
        for(auto i: m){
           if(i.second>n)
               p = i.first;
        }
        return p ;
        
    }
};