class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        int row[9]={};
        int column[9]={};
        int box[9]={};
        for(int i=0; i<9; i++){
            for(int j=0; j<9; j++){
                if(board[i][j]=='.') continue;
                int value=board[i][j]-'1';
                int b=((i/3)*3)+(j/3);
                int mask = 1 << value;
                if((row[i] & mask) || (column[j] & mask) || (box[b] & mask)){
                    return false;
                }
                row[i]|=mask;
                column[j]|=mask;
                box[b]|=mask;
            }

        }
        return true;
        
    }
};
