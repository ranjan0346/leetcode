class Solution {
public:
    bool divideArray(vector<int>& nums) {
        int n= nums.size();
        unordered_map<int,int> m;
        for(int i=0; i<n; i++){
            m[nums[i]]++;
        }
        int cnt=0;
        
        for(auto i: m){
            if(i.second%2==0)
                cnt++;
            else break;
        }
        if(cnt==m.size()) return true;
        return false;
        
    }
};