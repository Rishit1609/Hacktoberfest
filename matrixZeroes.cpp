class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        bool col = false;
        bool row = false;
         for(int i = 0; i < matrix.size(); i++){
            for(int j = 0; j < matrix[0].size(); j++){
                if(matrix[i][j] == 0) {
                    if(i == 0) row = true;
                    if(j == 0) col = true;
                    matrix[0][j] = matrix[i][0] = 0;
                }
            }
        }
        for(int i = 1; i < matrix.size(); i++){
            for(int j = 1; j < matrix[0].size(); j++){
                if(matrix[i][0] == 0 || matrix[0][j] == 0) matrix[i][j] = 0;
            }
        }
        if(col){
            for(int i = 0; i < matrix.size(); i++) matrix[i][0] = 0;
        }
        if(row){
            for(int j = 0; j < matrix[0].size(); j++) matrix[0][j] = 0;
        }
    }
};
int main() {
  Solution s;
  int mat = {{1,1,1},{1,0,1},{1,1,1}};
  s.setZeroes(mat);
  for(auto i : mat) {
    for(auto j : i) {
      cout << j;
    }
    cout << endl;
  }
  return 0;
}
