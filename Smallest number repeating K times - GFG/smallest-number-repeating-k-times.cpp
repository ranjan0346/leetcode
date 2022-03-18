// { Driver Code Starts
//Initial Template for C++



#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++


class Solution{
    public:
    int findDuplicate(int arr[], int n, int k) 
    { 
        unordered_map<int , int> m;
        for(int i=0; i<n ; i++){
            m[arr[i]]++;
        }
        int min =INT_MAX;
        for (auto itr: m){
            if(itr.second==k && itr.first<min)
            min=itr.first;
        }
        if(min==INT_MAX)return -1;
        return min;
    
    }
};

// { Driver Code Starts.

int main() {
	int t;
	
	cin >> t;
	
	while(t--){
	    int n;
	    cin >> n;
	    int k;
	    cin >> k;
	    int a[n];
	    for(int i = 0;i<n;i++){
	        cin >> a[i];
	    }
	    Solution ob;
	    cout << ob.findDuplicate(a,n,k) << endl;
	    }
	return 0;
}
  // } Driver Code Ends