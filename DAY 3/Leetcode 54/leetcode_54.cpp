class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int row_size = matrix.size();
        int column_size = matrix[0].size();
        int i=0, j=0;
        int start_row = 0, end_row = row_size-1;
        int start_column = 0, end_column = column_size-1;
        
        int total = row_size*column_size;
        vector<int> spiral;
        
        while(total--){
            spiral.push_back(matrix[i][j]);
            if(i==start_row){   
                if(j==end_column){
                    i++;
                    j--;
                }
                j++;
            }
            else if(j==end_column){
                if(i==end_row){
                    j--;
                    i--;
                }
                i++;
            }
            else if(i==end_row){
                if(j==start_column){
                    i--;
                    j++;
                }
                j--;
            }
            else if(j==start_column){
                if(i==start_row+1){
                    j++;
                    i++;
                    start_row++;
                start_column++;
                end_row--;
                end_column--;
                }
                i--;
            }
            
        }
        
        return spiral;
    }
};