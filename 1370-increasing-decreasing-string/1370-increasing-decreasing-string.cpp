class Solution {
public:
    string sortString(string s) {
        string res="";
        int n=s.length();
        vector<int> count(26,0);
        for(auto ch: s){
            count[ch-'a']++;
        }
        while(n>res.size()){
            for(int i=0;i<26;i++){
                if(count[i]>0){
                    res+=i+'a';
                    count[i]--;
                }
            }
            for(int j=25;j>=0;j--){
                if(count[j]>0){
                    res+=j+'a';
                    count[j]--;
                }
            }
        }
        return res;
    }
};