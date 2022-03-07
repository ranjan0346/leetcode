class Solution {
    void reverse(vector<char> &s, int l, int h)
    {
        if( h>l)
        {
            swap(s[l],s[h]);
            reverse(s,l+1,h-1);
        }
        return;
    }
public:
    void reverseString(vector<char>& s) {
       int l=0, h=s.size()-1;
        reverse(s, l,h);
        return;
    }
};

//iterative
// int l=0,h =s.size()-1;
//         while(h >l)
//         {
//             swap(s[l++],s[h--]);
//         }
        