// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends


class Solution{
  public:
    int findDiff(int arr[], int n) {
        unordered_map<int , int> m;
        for(int i=0; i<n ; i++){
            m[arr[i]]++;
        }
        
        int max=INT_MIN;
        int min=INT_MAX;
        for(auto itr: m){
            if(itr.second>max) max=itr.second;
            if(itr.second<min) min=itr.second;
        }
        return max-min;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n], i;
        for (i = 0; i < n; i++) cin >> arr[i];
        Solution obj;
        cout << obj.findDiff(arr, n) << "\n";
    }
    return 0;
}
  // } Driver Code Ends