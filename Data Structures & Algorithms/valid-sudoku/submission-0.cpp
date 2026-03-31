class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        // Row Checking 
        
        for(int i = 0; i<9; i++){
           vector <int> freq(10,0);
           for(int j = 0; j<9; j++){
            if(board[i][j] == '.'){
                continue;
            }
            int ele = board[i][j] - '0';
            if(freq[ele] == 1){
                return false;
            }
            else{
                freq[ele] = 1;
            }
           }
        }
        
        // column checking
        for(int i = 0; i<9; i++){
           vector <int> freq(10,0);
           for(int j = 0; j<9; j++){
            if(board[j][i] == '.'){
                continue;
            }
            int ele = board[j][i] - '0';
            if(freq[ele] == 1){
                return false;
            }
            else{
                freq[ele] = 1;
            }
           }
        }

       //sub-boxes checking 
       for(int boxrow = 0; boxrow<3; boxrow++){
        for(int boxcol = 0; boxcol<3; boxcol++){
            vector <int> freq(10,0);
            for(int row = boxrow*3; row<boxrow*3 + 3; row++ ){
            for(int col = boxcol*3; col<boxcol*3 + 3; col++){
                 if(board[row][col] == '.'){
                continue;
            }
            int ele = board[row][col] - '0';
            if(freq[ele] == 1){
                return false;
            }
            else{
                freq[ele] = 1;
            }
            }
            }

        }
       }

     return true;
    }
};
