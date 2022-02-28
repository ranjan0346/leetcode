class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int cnt=0 ;
        for (int i=0; i<items.size(); i++)
        {
            for(int j=0; j<1; j++)
            {
                if(items[i][2]==ruleValue && ruleKey=="name")
                cnt++;
                if(items[i][1]==ruleValue && ruleKey=="color")
                cnt++;
                if(items[i][0]==ruleValue && ruleKey=="type")
                cnt++;
            }
        }
        return cnt;
    }
};