class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        //rotate first k element
        reverse(nums.begin(), nums.begin() +n-k );
        //rotate last n-k element
        reverse(nums.begin()+n-k, nums.end() );
        // rotate all
        reverse(nums.begin(), nums.end() );
        return;
    }
};