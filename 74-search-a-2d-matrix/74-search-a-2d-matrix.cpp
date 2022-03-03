class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r=matrix.size();
        int c=matrix[0].size();
        for (int i=0; i< r; i++){
            if(target<=matrix[i][c-1]){
                int start=0 , end=c-1;
                while (end>=start){
                    int mid =(start+end)/2;
                    if(target==matrix[i][mid])
                        return true;
                    else if( target>matrix[i][mid])
                        start=mid+1;
                    else
                        end=mid-1;
                }
                return false;
            }
        }
        return false;
        
    }
};