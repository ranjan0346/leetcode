class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        unordered_map<string, int> m;
        vector<string> code={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        string temp;
        for(int i=0; i< words.size(); i++){
            temp.clear();
            for(int j=0; j< words[i].size(); j++){
                // char c=words[i][j];
                int n= words[i][j] -'a';
                // temp.push_back(code[n]);
                temp+= code[n];
            }
            m[temp]++;
        }
        return m.size();
    }
};