class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> v;
        for (int i=0; i<=n ; i++)
        {
            int temp=i;
            int count=0;
            while (temp>0)
            {
                count++;
                temp=temp&temp-1;
            }
            v.push_back(count);
        }
        return v;
    }
};
