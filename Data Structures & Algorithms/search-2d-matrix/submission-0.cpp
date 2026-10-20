class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
         int rows = matrix.size();
         int columns = matrix[0].size();
        if(target<matrix[0][0] || target>matrix[rows-1][columns-1]){
            return false;
        }
        int row = -1;
        for(int i =0; i<rows; i++){
            if(matrix[i][0]<=target && target<=matrix[i][columns-1]){              row = i;
                break;
            }
        }

       int low = 0;
       int high = columns-1;
       while(low<=high && row!=-1){
        int mid = low + (high-low)/2;
         if(matrix[row][mid]==target){
            return true;
         }
         else if(matrix[row][mid]<target){
            low = mid+1;
         }
         else{
            high = mid-1;
         }
       }
       
       return false;
    }
};
