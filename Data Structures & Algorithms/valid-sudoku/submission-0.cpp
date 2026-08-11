class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

     int row[9][9]={0};
     int col[9][9]={0};
     int boxes[9][9]={0};

     for(int r=0;r<9;r++){
        for(int c=0;c<9;c++){
          if(board[r][c]=='.'){
            continue;
          }
        int value=board[r][c]-'0';

        if(row[r][value-1]==1){
            return false;
        }

        row[r][value-1]=1;
         
         if(col[c][value-1]==1){
            return false;
         }

         col[c][value-1]=1;
 

        int BOX_IDX=3*(r/3)+(c/3);
        if(boxes[BOX_IDX][value-1]==1) {
            return false;
        }
        boxes[BOX_IDX][value-1]=1;


         } // inner for loop

     }    // outer for loop
      return true;

    }
};
