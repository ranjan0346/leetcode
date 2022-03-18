// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
string reverseString(string s);
int main()
{
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
	    {
	        string s;
	        getline(cin,s);
	        cout<<reverseString(s)<<endl;
	    }
}
// } Driver Code Ends


string reverseString(string s)
{
    //code here.
    unordered_set<char> st;
    string ans;
    for(int i=s.size()-1; i>=0; i--){
        if(s[i]==' ') continue;
        if(st.find(s[i])==st.end()) ans.push_back(s[i]);
         st.insert(s[i]);
    }
    // reverse(ans.begin(),ans.end());
    return ans;
}