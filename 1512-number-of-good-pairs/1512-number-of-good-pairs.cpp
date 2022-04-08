class Solution {
public:
    // unsigned long int fact( int x){
    //     unsigned long int ans=1;
    //     for(int i=1; i<=x; i++){
    //         ans *=i;
    //     }
    //     return ans;
    // }
    
    
    int numIdenticalPairs(vector<int>& nums) {
        int ans=0;
        int n=nums.size();
        unordered_map<int, int> map;
        for(int i=0; i<n ; i++){
            map[nums[i]]++;
        }
        
        for(auto i : map){
            int x=i.second;
            
                ans+= x*(x-1)/2;
            
        }
        return ans;
        
    }
};