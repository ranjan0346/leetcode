// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
string firstRepChar(string s);
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        cout<<firstRepChar(s)<<endl;
    }
	return 0;
}// } Driver Code Ends


string firstRepChar(string s)
{
    //code here
    unordered_set<char> st;
    string ans;
    for(int i=0; i<s.size(); i++){
        if(st.find(s[i])!=st.end())
        {ans=s[i];
        return ans;}
        st.insert(s[i]);
    }
    return "-1";
}