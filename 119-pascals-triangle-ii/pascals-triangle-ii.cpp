class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> tria (rowIndex + 1);
        int colNum = 1;
        for(int r = 0; r <= rowIndex; r++){
            
           vector<int> row(colNum, 1);
           
           tria[r] = row;
           
           for(int c = 1; c < colNum-1; c++){
              tria[r][c] =  tria[r-1][c-1] + tria[r-1][c];
           }
           colNum++;
        } 
        return tria[rowIndex];
    }
};