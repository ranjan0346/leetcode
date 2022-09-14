class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> ans;
        int i=0, temp=0;
        for(i=0; i<nums.size();i++)
        {
            temp+= nums[i];
            ans.push_back(temp);
        }
       return ans; 
    }
};