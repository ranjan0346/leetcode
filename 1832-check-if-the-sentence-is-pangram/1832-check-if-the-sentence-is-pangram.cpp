class Solution {
public:
    bool checkIfPangram(string sentence) {
        int n=sentence.size();
        if(n<26) return false;
        
        unordered_set<char> s;
        // for(int i=0; i<26; i++)
        //     s.insert("a"+i);
        
        for (int i=0;i<n; i++){
            s.insert(sentence[i]);
        }
        if(s.size()==26) return true;
        return false;
        
    }
};