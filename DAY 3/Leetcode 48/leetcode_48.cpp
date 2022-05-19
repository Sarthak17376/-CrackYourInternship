class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int size_row = matrix.size();
        int size_column = matrix[0].size();
        
        for(int i=1; i<size_row; i++){
            for(int j=0; j<i; j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        
        for(int i =0; i<size_row; i++){
            int x=0, y=size_column-1;
            while(x<y){
                swap(matrix[i][x], matrix[i][y]);
                x++;
                y--;
            }
        }
    }
};