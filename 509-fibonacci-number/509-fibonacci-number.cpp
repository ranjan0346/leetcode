class Solution {
 
   
public:
    vector<int> v;
    
    
    int fib(int n) {
    if(n==0|| n==1) return n;
        
    v.push_back(0);
    v.push_back(1);
        
      for (int i=2; i<=n; i++) {
          int temp= v[i-1] + v[i-2];
          v.push_back(temp);
      }     
    return v[n];
        
    }
};