class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int a[2], i, j, size;
        size= nums.size();
        for(i=0; i<size; i++)
        {
            for(j=i+1; j<size; j++)
            {
               if(target== nums[i] + nums[j])
               {
                   return {i,j};
               }
            }
        }
        return {};
    }
};