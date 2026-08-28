class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<int> spiral;
        if (m == 1) {
            for (int i = 0; i < n; i++) {
                spiral.push_back(matrix[0][i]);
            }
        } else if (n == 1) {
            for (int i = 0; i < m; i++) {
                spiral.push_back(matrix[i][0]);
            }
        } else {
            int top = 0, bottom = m - 1, right = n - 1, left = 0;
            while (top <= bottom && left <= right) {
                for (int i = left; i <= right; i++) {
                    spiral.push_back(matrix[top][i]);
                }
                top++;
                if (top > bottom) {
                    break;
                }
                for (int i = top; i <= bottom; i++) {
                    spiral.push_back(matrix[i][right]);
                }
                right--;
                if (left > right) {
                    break;
                }
                for (int i = right; i >= left; i--) {
                    spiral.push_back(matrix[bottom][i]);
                }
                bottom--;
                if (top > bottom) {
                    break;
                }
                for (int i = bottom; i >= top; i--) {
                    spiral.push_back(matrix[i][left]);
                }
                left++;
            }
        }
        return spiral;
    }
};