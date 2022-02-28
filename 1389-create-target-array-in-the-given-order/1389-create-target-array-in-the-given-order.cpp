class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> ans;
        for(int i=0; i<nums.size(); i++)
        {
           ans.insert(ans.begin() +index[i], nums[i]);
        }
        return ans;
    }
};
// vector<int> output(nums.size());
//         for(int i=0; i<nums.size(); i++)
//         {
//             int in =index[i];
//             output.insert(in, nums[i]);
//         }
//         return output;