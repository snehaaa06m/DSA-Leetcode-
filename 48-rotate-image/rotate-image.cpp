class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
         int n = matrix.size();
        vector<vector<int>> dup;
        vector<int> row;
        for (int j = 0; j < n; j++) {
            row.clear();
            for (int i = n - 1; i >= 0; i--) {
                row.push_back(matrix[i][j]);
            }
            dup.push_back(row);
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                matrix[i][j] = dup[i][j];
            }
        }
    }
};