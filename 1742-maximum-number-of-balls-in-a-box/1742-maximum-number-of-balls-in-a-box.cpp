class Solution {
public:
    int countBalls(int lowLimit, int highLimit) {
        unordered_map<int, int> m;
        for(int i=lowLimit; i<=highLimit; i++){
            int x=i;
            int sum=0;
            while(x>0){
                sum+=x%10;
                x=x/10;
                
            }
            m[sum]++;
        }
        int mx=INT_MIN;
        for(auto i: m){
            mx=max(mx, i.second);
        }
        return mx;
        
    }
};