// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int isPossible (string s);

int main()
{
    int t; cin >> t;
    while (t--)
	{
		string s; cin >> s;
		if (isPossible (s))
			cout << "Yes\n";
		else
			cout << "No\n";
	}
}

// Contributed By: Pranay Bansal
// } Driver Code Ends


int isPossible (string s)
{
    // your code here
    unordered_map<char, int> umap;
    int cnt=0;
    for (int i=0; i<s.size(); i++){
        umap[s[i]]++;
    }
    
    if(s.size()%2==0){
        for(auto itr: umap)
        if(itr.second%2!=0)return 0;
    }
    else{
        for(auto itr: umap)
        {
           if(itr.second%2!=0)cnt++; 
        }
        return (cnt>1?0:1);
    }
    return 1;
    
}