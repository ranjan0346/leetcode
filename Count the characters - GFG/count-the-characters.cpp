// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution
{
  public:
        int getCount (string s, int N)
        {
            //code here.
            unordered_map<char, int> map;
            char temp=s[0];
            int cnt=0;
            map[s[0]]++;
            for(int i=1; i<s.size(); i++){
                if(s[i]==temp) continue;
                map[s[i]]++;
                temp=s[i];
                
            }
            for( auto i:map){
                if(i.second==N) cnt++;
            }
            return cnt;
        }
};

// { Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        int n; cin >> n;
        
        Solution ob;
        cout <<ob.getCount (s, n) << endl;
    }
}

// Contributed By: Pranay Bansal
  // } Driver Code Ends