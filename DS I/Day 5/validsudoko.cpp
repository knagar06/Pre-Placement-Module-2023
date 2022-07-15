class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
unordered_map<char,int> row, col, box;
    
        for(int i=0;i<9;i++){
            row.clear();
            col.clear();
            
            for(int j=0;j<9;j++){
                
                if(board[i][j]!='.') {
                    if(row.find(board[i][j])!=row.end()) {return false;}
                    else {row[board[i][j]]++;}
                }
                if(board[j][i]!='.') {
                    if(col.find(board[j][i])!=col.end()) {return false;}
                    else {col[board[j][i]]++;}
                }
                
                
            }
        }
       
        
        int r=0, c=0;
        
        while(true) {
            box.clear();
            for(int i=r;i<=r+2;i++){                
                for(int j=c;j<=c+2;j++){
                    if(board[i][j]!='.') {
                        if(box.find(board[i][j])!=box.end()) {cout<<r<<c; return false;}
                        else {box[board[i][j]]++;}
                    }                    
                }
            }
            c+=3;
            if(c==9 && r!=9) {c=0; r+=3;}
            if(r==9) {break;}
            
        }
       
        
        return true;
    
    }
};