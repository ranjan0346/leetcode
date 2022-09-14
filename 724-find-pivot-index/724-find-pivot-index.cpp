class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum=0;
        int n=nums.size();
        for(int i=0; i<n; i++){
            sum+=nums[i];
        }
        int rsum=0, lsum;
        
        for(int i=0; i<n; i++){
            lsum=sum-rsum-nums[i];
            if(lsum==rsum) return i;
             rsum+=nums[i];
        }
        return -1;
        
    }
};