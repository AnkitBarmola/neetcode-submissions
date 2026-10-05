class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
       vector<set<char>> rows(9);
       vector<set<char>> column(9);
       vector<set<char>> box(9);
       for(int r=0;r<9;r++){
        for(int c=0;c<9;c++){
            char ch=board[r][c];
            if(ch=='.')continue;
            int b = (r/3)*3 + c/3;
            if(rows[r].count(ch)) return false;
            if(column[c].count(ch)) return false;
            if(box[b].count(ch)) return false;
            column[c].insert(ch);
            rows[r].insert(ch);
            box[b].insert(ch);
        }
        
       }
       return true;
    }
};
