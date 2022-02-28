class Solution {
public:
    vector<int> sumZero(int n) {
        int s=1;
        vector <int> ans;
        for(int i=0; i<n/2; i++)
        {
            ans.push_back(s);
             ans.push_back(-s);
            s++;
        }
        if (n%2!=0)
            ans.push_back(0);
        return ans;

    }
};