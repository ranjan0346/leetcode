// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution {
  public:
    bool areKAnagrams(string str1, string str2, int k) {
        // code here
        unordered_map<int ,int> mp;
        int kcnt=0;
        int n=str1.size();
        int m=str2.size();
        if(n!=m) return false;
        for(int i=0; i<n; i++){
            mp[str1[i]]++;
        }
        
        for(int i=0; i<m; i++){
            auto itr=mp.find(str2[i]);
            if(itr!=mp.end()){
                if(itr->second>0){
                     itr->second--;
                     n--;
                }
            }
            else kcnt++;
            
        }
        if(n<=k)return true;
        return false;
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string str1,str2;
		cin>>str1>>str2;
		int k;
		cin>>k;
		Solution ob;
		if(ob.areKAnagrams(str1, str2, k) == true)
			cout<<"1\n";
		else
			cout<<"0\n";
	}
}  // } Driver Code Ends