class Solution {
    private:
    void helper(int i, int target, vector<int> &ds, vector<vector<int>> &ans, vector<int>& candidates)
    {
        if(target==0) {
            ans.push_back(ds);
            return ;
            
        }
        if(i== candidates.size()) return ;
        
        //pick case
        if(candidates[i]<= target)
            {ds.push_back(candidates[i]);
            helper(i, target-candidates[i], ds, ans, candidates);
            ds.pop_back();}
        // not pick case;
        helper(i+1, target, ds, ans, candidates);
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        helper(0, target, ds, ans, candidates);
        return ans;
        
    }
};