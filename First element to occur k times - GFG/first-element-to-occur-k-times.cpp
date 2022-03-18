// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
     int firstElementKTime(int a[], int n, int k)
    {
        unordered_map<int, int> um;
        for(int i=0; i<n; i++){
            um[a[i]]++;
            auto itr=um.find(a[i]);
            if(itr->second==k) return a[i];
        }
        return -1;
    }
    
    
    
    // int firstElementKTime(int a[], int n, int k)
    // {
    //     unordered_map<int, int> umap;
    //     umap[a[0]]++;
    //     for(int i=1; i<n; i++)
    //     {
            
    //         auto itr=umap.find(a[i]);
    //         if(itr!=umap.end()){
    //             if(itr->second ==k) return a[i];
    //         }
    //         umap[a[i]]++;
    //     }
    //     return -1;
    // }
};

// { Driver Code Starts.

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n, k;
	    cin >> n >> k;
	    int a[n];
	    for(int i = 0;i<n;i++){
	        cin >> a[i];
	    }
	    Solution ob;
	    cout<<ob.firstElementKTime(a, n, k)<<endl;
	}
	
	return 0;
}  // } Driver Code Ends