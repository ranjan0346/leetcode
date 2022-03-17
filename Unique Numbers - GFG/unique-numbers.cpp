// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function Template for C++
class Solution
{
public:
        // vector<int> uniqueNumbers(int L,int R)
        // {
        //     unordered_set<int> set;
        //     for(int i=L; i<R; i++){
        //         int temp=i;
        //         while (temp>0){
        //             if(set.search())
        //         }
        //     }
        // }
        
        
    vector<int> uniqueNumbers(int L,int R)
    {
        // Write Your Code here
        unordered_map<int , int> umap;
        vector<int> ans;
        for(int i=L; i<=R; i++){
            int temp=i;
            int count=0;
            while(temp>0){
                umap[temp%10]++;
                temp/=10;
                count++;
            }
            
            if(umap.size()==count)ans.push_back(i);
            // for( auto itr:umap){
            //     if(itr.second==1) ans.push_back(i);
            //     else break;
            // }
            umap.clear();
            
            
        }
        return ans;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l,r ;
        cin >> l >> r;
		Solution ob;
		vector<int> numbers = ob.uniqueNumbers(l,r);
		
		for(int num : numbers){
		   cout<<num<<" ";
		}
		cout<<endl;
        
    }
    return 0;
}  // } Driver Code Ends