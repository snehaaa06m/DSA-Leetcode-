class Solution {
public:
    vector<int> getRow(int rowIndex) {
         vector<vector<int>> answer(34, vector<int>(34, 0));
        for (int i = 0; i < 34; i++) {
            for (int j = 0; j <= i; j++) {
                if (j == 0 || j == i) {
                    answer[i][j] = 1;
                } else {
                    answer[i][j] = answer[i - 1][j] + answer[i - 1][j - 1];
                }
            }
        }
        vector<int> final_row;
        for (int i = 0; i <= rowIndex; i++) {
            final_row.push_back(answer[rowIndex][i]);
        }
        return final_row;
    }
};